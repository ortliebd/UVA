#include <iostream>
#include <string>
#include <locale>
#include <map>
#include <cmath>

using namespace std;

typedef map<int, char> mic;
typedef pair<int, char> pic;
typedef map<char, int> mci;
typedef pair<char, int> pci;

int main (int argc, char **argv) {
  locale loc;
  string input;
  int number;
  int value;
  int hash;

  mic table;
  table.insert (pic (1, 'I'));
  table.insert (pic (5, 'V'));
  table.insert (pic (10, 'X'));
  table.insert (pic (50, 'L'));
  table.insert (pic (100, 'C'));
  table.insert (pic (500, 'D'));
  table.insert (pic (1000, 'M'));

  mci r_table;
  r_table.insert (pci ('I', 1));
  r_table.insert (pci ('V', 5));
  r_table.insert (pci ('X', 10));
  r_table.insert (pci ('L', 50));
  r_table.insert (pci ('C', 100));
  r_table.insert (pci ('D', 500));
  r_table.insert (pci ('M', 1000));

  while (getline (cin, input)) {
    if (isdigit (input[0])) {
      string roman = {};
      mic::iterator it;
      for (int i = 0; i < input.size(); i++) {
	value = input[i] - '0';
	hash = pow (10, input.size() - i - 1);
	number = value * hash;
	if (value <= 3) {
	  for (int i = 0; i < value; i++) {
	    roman += table.at (hash);
	  }
	} else if (value == 4) {
	  it = table.find (hash);
	  roman += it->second;
	  it++;
	  roman += it->second;
	} else if (value == 9) {
	  it = table.find(hash);
	  roman += it->second;
	  it++; it++;
	  roman += it->second;
	} else if (value == 5) {
	  roman += table.at (number);
	} else {
	  it = table.find (hash);
	  it++;
	  roman += it->second;
	  it--;
	  for (int i = 0; i < value - 5; i++) {
	    roman += it->second;
	  }
	}	
      }
      cout << roman << endl;
    } else {
      int decimal = 0;
      int i;
      for (i = 0; i < input.size() - 1; i++) {
	if (r_table.at (input[i]) < r_table.at (input[i + 1])) {
	  decimal += r_table.at (input[i + 1]) - r_table.at (input[i]);
	  i++;
	} else {
	  decimal += r_table.at (input[i]);
	}
      }
      if (i != input.size()) {
	decimal += r_table.at (input[i]);
      }
      cout << decimal << endl;
    }
  }
  return 0;
}

/*
1 I
212 CCXII
240 CCXL
428 CDXXVIII
3957 MMMCMLVII
3911 MMMCMXI
1790 MDCCXC
1554 MDLIV
1285 MCCLXXXV
1007 MVII
*/
