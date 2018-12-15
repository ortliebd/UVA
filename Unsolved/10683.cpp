#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  int input;
  int decimal_hour, tradicional_hour;
  int decimal_minute, tradicional_minute;
  int decimal_second, tradicional_second;
  int decimal_centmo, tradicional_centmo;
  int decimal_time, tradicional_time;

  while (cin >> input) {
    tradicional_hour = input / 1000000;
    tradicional_minute = input / 10000 % 100;
    tradicional_second = input / 100 % 100;
    tradicional_centmo = input % 100;

    tradicional_time = tradicional_hour * 3600 + tradicional_minute * 60 + tradicional_second + tradicional_centmo / 100;

    decimal_centmo = tradicional_time / 100;
    
    cout << tradicional_time << endl;
    cout << decimal_hour << " " << decimal_minute << " " << decimal_second << " " << decimal_centmo << endl;

  }
  return 0;
}
