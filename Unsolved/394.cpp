#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;


typedef vector<int> vi;
typedef vector<vi> vii;
typedef map<string, vii> msi;


int main (int argc, char **argv) {
  int base_address;
  int number_of_dimensions;
  int lower_bound;
  int upper_bound;
  int element_size;

  int number_of_arrays;
  int number_of_references;

  char name_array[11];
  char temp;

  msi array;
  vi index;
  int input_index;
  
  scanf("%d %d", &number_of_arrays, &number_of_references);
  cin.ignore();

  for (int i = 0; i < number_of_arrays; i++) {
    for (int i = 0; i < 10; i++) {      
      scanf ("%c", &name_array[i]);
    }

    scanf ("%d %d %d", &base_address, &element_size, &number_of_dimensions);

    for (int i = 0; i < number_of_dimensions; i++) {
      scanf ("%d %d", &lower_bound, &upper_bound);
      
      vii temp;
      temp.resize (number_of_dimensions + 1);
      temp[0].push_back (base_address);
      temp[0].push_back (element_size);
      temp[0].push_back (number_of_dimensions);
      temp[i + 1].push_back (lower_bound);
      temp[i + 1].push_back (upper_bound);

      array.insert (pair<string, vii> (name_array, temp) );
    }
  }
  
  cin.ignore();
  for (int i = 0; i < number_of_references; i++) {
    for (int i = 0; i < 10; i++) {
      scanf ("%c", &name_array[i]);
      if (name_array[i] != ' ')
	printf ("%c", name_array[i]);
    }
    printf ("[");

    msi::iterator it = array.find (name_array);
    for (int i = 0; i < it->second[0][2]; i++) {
      scanf ("%d", &input_index);
      printf ("%d", input_index);
      index.push_back(input_index);
    }
    printf ("]");
  }
  
  return 0;
}
