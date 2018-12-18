#include <iostream>


using namespace std;

int main (int argc, char **argv) {
  int width, height, sub_boards;
  int x1, y1, x2, y2;

  while (cin >> width >> height >> sub_boards && width && width && sub_boards) {
    int free_spots = width * height;
    int spots[500][500] = {0};
    for (int i = 0; i < sub_boards; i++) {
      cin >> x1 >> y1 >> x2 >> y2;
      for (int i = min (x1, x2); i <= max (x1, x2); i++)
	for (int j = min (y1, y2); j <= max (y1, y2); j++)
	  spots[i][j] = 1;
    }
    for (int i = 0; i < width; i++)
      for (int j = 0; j < height; j++) 
	if (spots[i][j] == 1) {
	  free_spots--;
	  spots[i][j] = 0;
	}
    cout << free_spots << endl;
  }
  return 0;
}
