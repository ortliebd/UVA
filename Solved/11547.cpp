#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  int cases;

  cin >> cases;
  for (int i = 0; i < cases; i++) {
    int input;
    int result;
    cin >> input;
    result = abs (((input * 567 / 9 + 7492) * 235 / 47 - 498) % 100 / 10);
    cout << result << endl;
  }
  return 0;
}
