#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main (int argc, char **argv) {
  int hour, minute, second;
  int speed;
  string input;
  double elapsed_time = 0;
  double initial_time = 0;
  double distance_traveled = 0;

  while (getline (cin, input)) {
    hour = stoi (input.substr (0, 2));
    minute = stoi (input.substr (3, 5));
    second = stoi (input.substr (6, 8));
    if (input.size() > 8) {
      speed = stoi (input.substr (8, input.back()));
      initial_time = hour + minute / 60.0 + second / 3600.0;
      if (distance_traveled >= 0) {
	distance_traveled += (initial_time - elapsed_time) * speed;
	initial_time = elapsed_time;
      }
    } else {
      elapsed_time = hour + minute / 60.0 + second / 3600.0;
      distance_traveled += (elapsed_time - initial_time) * speed;
      printf ("%02d:%02d:%02d %.2f km\n", hour, minute, second, distance_traveled);
      initial_time = elapsed_time;
    }
  }
  return 0;
}
