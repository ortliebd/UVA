#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

typedef vector<unsigned long long int> vi;

vi factoradic (unsigned long long int, int);

int main (int argc, char **argv) {
  int number_of_samples;
  unsigned long long int permutation_number;
  string input;
  vi factoradic_number;

  cin >> number_of_samples;

  while (number_of_samples--) {
    cin >> input;
    cin >> permutation_number;
    sort (input.begin(), input.end());
    factoradic_number = factoradic (permutation_number, input.size());

    for (int i = 0; i < factoradic_number.size(); i++) {
      cout << input[factoradic_number[i]];
      input.erase (input.begin() + factoradic_number[i]);
    }
    cout << endl;
    
  }
  return 0;
}

vi factoradic (unsigned long long int n, int s) {
  vi fac_number;
  long double factorial = s - 1;
  unsigned long long int remainder = n;
  
  for (int i = s; i > 0; i--, factorial--) {
    fac_number.push_back (remainder / (unsigned long long int)tgamma (factorial + 1));
    //cout << remainder << " " << (unsigned long long int)tgammal (factorial + 1) << endl;
    //cout << remainder / (unsigned long long int)tgammal (factorial + 1) << endl;
    remainder = remainder % (unsigned long long int)tgammal (factorial + 1);
  }
  
  return fac_number;
}
