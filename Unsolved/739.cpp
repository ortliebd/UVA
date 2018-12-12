#include <iostream>
#include <string>

using namespace std;

int main (int argc, char **argv) {
  string name;
  while (getline(cin, name) ) {
    cout << name << endl;
  }
  return 0;
}
