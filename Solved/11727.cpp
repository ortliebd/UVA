#include <iostream>

using namespace std;

int main (int argc, char **argv) {
  int s1, s2, s3;
  int cases;
  int output;

  cin >> cases;

  for (int i = 1; i <= cases; i++) {
    cin >> s1 >> s2 >> s3;
    //cout << s1 << " " << s2 << " " << s3 << endl;

    if ( (s1 <= s2 && s2 <= s3) || (s3 <= s2 && s2 <= s1))
      output = s2;
    else if ( (s2 <= s1 && s1 <= s3) || (s3 <= s1 && s1 <= s2))
      output = s1;
    else if ( (s1 <= s3 && s3 <= s2) || (s2 <= s3 && s2 <= s1))
      output = s3;

    printf ("Case %d: %d\n", i, output);
  }
  
  return 0;
}
