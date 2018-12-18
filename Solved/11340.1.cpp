#include <iostream>
#include <map>
#include <string>

using namespace std;

typedef map<char, int> mci;
typedef pair<char, int> pci;

int main (int argc, char **argv) {
  int cases;

  scanf ("%d ", &cases);
  for (int i = 0; i < cases; i++) {
    mci table;
    int amount_char;
    int lines;
    string text;
    int total_cents = 0;
    scanf ("%d ", &amount_char);
    for (int i = 0; i < amount_char; i++) {
      char key;
      int value;
      scanf ("%c %d ", &key, &value);
      table.insert(pci (key, value));
    }
    scanf ("%d ", &lines);
    while (lines) {
      char input;
      scanf ("%c", &input);
      if (table.find (input) != table.end())
	total_cents += table.find (input)->second;
      if (input == '\n') lines--;
    }
    printf ("%.2f$\n", total_cents / 100.00);
  }
  
  return 0;
}
