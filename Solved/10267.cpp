#include <iostream>
#include <string>

using namespace std;

//image matrix
#define MAX 250
char image[MAX][MAX];

void createImage (int, int);
void clearImage (int, int);
void colorPixel (int, int, char);
void drawVertical (int, int, int, char);
void drawHorizontal (int, int, int, char);
void drawFilledRectangle (int, int, int, int, char);
void fillRegion (int, int, int, int, char, char);

int main (int argc, char **argv) {
  //editor commands
  char commands;

  //commands parameters
  int m, n, x, y, y1, y2, x1, x2 = 0;
  char c;
  string name;
  

  //main loop
  while (cin >> commands && commands != 'X') {
    switch (commands) {
    case 'I':
      cin >> m >> n;
      createImage (m, n);
      break;
      
    case 'C':
      clearImage (m, n);
      break;
      
    case 'L':
      cin >> x >> y >> c;
      colorPixel (x, y, c);
      break;
      
    case 'V':
      cin >> x >> y1 >> y2 >> c;
      drawVertical (x, y1, y2, c);
      break;
      
    case 'H':
      cin >> x1 >> x2 >> y >> c;
      drawHorizontal (x1, x2, y, c);
      break;
      
    case 'K':
      cin >> x1 >> y1 >> x2 >> y2 >> c;
      drawFilledRectangle (x1, y1, x2, y2, c);
      break;
      
    case 'F':
      cin >> x >> y >> c;
      fillRegion (m, n, x, y, c, image[y - 1][x - 1]);
      break;
      
    case 'S':
      cin >> name;
      cout << name << endl;
      for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
	  cout << image[i][j];
	}
	cout << endl;
      }
      break;
      
    case 'X':
      break;
    }    
  }
  return 0;
}

void createImage (int m, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      image[i][j] = 'O';
    }
  }
}

void clearImage (int m, int n) {
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      image[i][j] = 'O';
}

void colorPixel (int x, int y, char c) {
  image[y - 1][x - 1] = c;
}

void drawVertical (int x, int y1, int y2, char c) {
  if (y1 > y2) swap (y1, y2);
  for (; y1 <= y2; y1++)
    image[y1 - 1][x - 1] = c;
}

void drawHorizontal (int x1, int x2, int y, char c) {
  if (x1 > x2) swap (x1, x2);
  for (; x1 <= x2; x1++)
    image[y - 1][x1 - 1] = c;
}

void drawFilledRectangle (int x1, int y1, int x2, int y2, char c) {
  if (x1 > x2) swap (x1, x2);
  if (y1 > y2) swap (y1, y2);
  for (int i = x1; i <=x2 ; i++)
    for (int j = y1; j <= y2; j++)
      image[j - 1][i - 1] = c;      
}

void fillRegion (int m, int n, int x, int y, char c, char old_c) {
  //cout << m << " " << n << " " << x << " " << y << " " << c << " " << old_c << endl;
  if (y > n || x > m) return;
  if (y < 0 || x < 0) return;
  if (image[y - 1][x - 1] != old_c) return;
  if (image[y - 1][x - 1] == c) return;

  image[y - 1][x - 1] = c;

  fillRegion (m, n, x + 1, y, c, old_c);
  fillRegion (m, n, x, y + 1, c, old_c);
  fillRegion (m, n, x - 1, y, c, old_c);
  fillRegion (m, n, x, y - 1, c, old_c);
}
