#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  int height_well, climb_capacity, slide_capacity, fatigue_factor;

  while (scanf ("%d %d %d %d", &height_well, &climb_capacity, &slide_capacity, &fatigue_factor)
	 && height_well != 0) {
    int day = 0;
    double initial_height = 0.00;
    double distance_climbed = 0.00;
    double height_after_climbing = 0.00;
    double height_after_sliding = 0.00;
    
    do {
      distance_climbed = climb_capacity - (fatigue_factor / 100.00 * climb_capacity * day);
      height_after_climbing = distance_climbed + initial_height;
      height_after_sliding = height_after_climbing - slide_capacity;
      cout << distance_climbed << " "<< height_after_climbing << " " << height_after_sliding << " " << initial_height;
      initial_height -= height_after_sliding;
      day++;
      if (height_after_sliding < 0) break;
      if (height_after_climbing > height_well) break;
    } while (true);
    cout << "day: " << day << endl;
  }
  return 0;
}
