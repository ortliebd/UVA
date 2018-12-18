#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  int cases;
  long int x, y;
  long int sum, diff;

  cin >> cases;

  for (int i = 0; i < cases; i++) {
    cin >> sum >> diff;
    x = (sum + diff) / 2;
    y = sum - x;

    if (sum < diff || (sum - diff) % 2 != 0)
      cout << "impossible" << endl;
    else
      cout << x << " " << y << endl;
  }
  return 0;
}
