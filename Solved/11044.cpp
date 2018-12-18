#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  int cases;
  int rows;
  int columns;
  int sonars;

  cin >> cases;
  for (int i = 0; i < cases; i++) {
    cin >> rows >> columns;
    sonars = (rows / 3) * (columns / 3);
    cout << sonars << endl;
  }
  return 0;
}
