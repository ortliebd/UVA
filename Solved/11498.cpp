#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  int queries;
  int div_x, div_y;
  while (cin >> queries && queries != 0) {
    cin >> div_x >> div_y;
    for (int i = 0; i < queries; i++) {
      int x, y;
      cin >> x >> y;
      if (x == div_x || y == div_y) {
	cout << "divisa\n";
      } else if (x - div_x > 0 && y - div_y < 0) {
	cout << "SE\n";
      } else if (x - div_x > 0 && y - div_y > 0) {
	cout << "NE\n";
      } else if (x - div_x < 0 && y - div_y > 0) {
	cout << "NO\n";
      } else {
	cout << "SO\n";
      }
    }
  }
  return 0;
}
