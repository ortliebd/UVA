#include <iostream>
#include <string>
#include <map>

using namespace std;

typedef map<char, int> mci;
typedef pair<char, int> pci;

int main (int argc, char **argv) {
  string expression;

  mci table;

  table.insert (pci ('A', 2));
  table.insert (pci ('B', 2));
  table.insert (pci ('C', 2));
  table.insert (pci ('D', 3));
  table.insert (pci ('E', 3));
  table.insert (pci ('F', 3));
  table.insert (pci ('G', 4));
  table.insert (pci ('H', 4));
  table.insert (pci ('I', 4));
  table.insert (pci ('J', 5));
  table.insert (pci ('K', 5));
  table.insert (pci ('L', 5));
  table.insert (pci ('M', 6));
  table.insert (pci ('N', 6));
  table.insert (pci ('O', 6));
  table.insert (pci ('P', 7));
  table.insert (pci ('Q', 7));
  table.insert (pci ('R', 7));
  table.insert (pci ('S', 7));
  table.insert (pci ('T', 8));
  table.insert (pci ('U', 8));
  table.insert (pci ('V', 8));
  table.insert (pci ('W', 9));
  table.insert (pci ('X', 9));
  table.insert (pci ('Y', 9));
  table.insert (pci ('Z', 9));

  while (cin >> expression) {
    for (int i = 0; i < expression.size(); i++) {
      if (isdigit (expression[i]) || expression[i] == '-')
	cout << expression[i];
      else 
	cout << table.at (expression[i]);
    }
    cout << endl;
  }
  return 0;
}
				 
