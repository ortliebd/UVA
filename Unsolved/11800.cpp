#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  int cases;
  int p1[2];
  int p2[2];
  int p3[2];
  int p4[2];
  
  cin >> cases;
  for (int i = 1; i <= cases; i++) {
    cin >> p1[0] >> p1[1]
	>> p2[0] >> p2[1]
	>> p3[0] >> p3[1]
	>> p4[0] >> p4[1];
    cout << p1[0] << p1[1] << " "
	 << p2[0] << p2[1] << " "
	 << p3[0] << p3[1] << " "
	 << p4[0] << p4[1] << " "
	 << endl;
    cout << p1[0] - p2[0] << " " << p2[0] - p3[0] << " " << p3[0] - p4[0] << " " << p4[0] - p1[0]
	 << endl;
    cout << p1[1] - p2[1] << " " << p2[1] - p3[1] << " " << p3[1] - p4[1] << " " << p4[1] - p1[0]
	 << endl << endl;
  }
  return 0;
}
