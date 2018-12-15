#include <iostream>
#include <string>
#include <map>

using namespace std;

typedef map<string, int> msi;
typedef pair<string, int> psi;

int main (int argc, char **argv) {
  int lines;
  string country;
  string temp;

  msi loved_ones;
  
  cin >> lines;
  cin.ignore();
  while (lines > 0) {
    cin >> country;
    getline (cin, temp);

    pair<msi::iterator, bool> it;
    it = loved_ones.insert (psi (country, 1));
    if (it.second == false) {
      it.first->second++;
    }
    
    lines--;
  }

  msi::iterator it;  
  for (it = loved_ones.begin(); it != loved_ones.end(); ++it) {
    cout << it->first << " " << it->second << endl;
  }
  return 0;
}
