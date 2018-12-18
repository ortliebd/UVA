#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  int input;

  while (cin >> input) {
    int borrow = 0;
    int total = 0;
    while (input > 0) {
      if (input % 3 != 0 && input >= borrow) {
	borrow++;
	input += borrow;
      } else {
	total += input;
	input = (input + borrow) / 3;
	cout << total << endl;
      }
    }
  }
  return 0;
}
