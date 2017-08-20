#include <iostream>
#include <list>

using namespace std;

int main(int argc, char *argv[])
{
  int instancias;
  int n1, n2, dif_abs;
  list <int>::iterator i_dif;
  
  while (cin >> instancias) {
    if (instancias == 1) {
      cin >> n1;
      cout << "Jolly\n";
    } else {
      list <int> dif;
      int entrada[instancias];

      for (int i=0; i<instancias; i++) {
	cin >> n1;
	entrada[i] = n1;	
      }

      for (int i=0; i<instancias-1; i++) {
	dif_abs = abs (entrada[i] - entrada[i+1]);
	dif.push_back (dif_abs);
      }

      dif.sort();

      if (dif.front() == 1) {
	int i = dif.front();
        while (!dif.empty() ) {
	  if (i != dif.front() ) {
	    cout << "Not jolly\n";
	    break;
	  }
      	  dif.pop_front();
	  i++;
	}
	if (dif.empty() ) cout << "Jolly\n";
      } else if (dif.back() == 1) {
	int i = 1;
	while (!dif.empty() ) {
	  if (i != dif.back() ) {
	    cout << "Not jolly\n";
	    break;
	  }
	  dif.pop_back();
	  i++;
	}
	if (dif.empty() ) cout << "Jolly\n";
      } else {
	cout << "Not jolly\n";
      }
    }
    
  }
  return 0;
}
