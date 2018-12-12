#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main (int argc, char **argv) {
  int requirements;
  int proposals;
  string name_requirement;
  string temp;

  int cases = 1;

  while (scanf ("%d %d ", &requirements, &proposals) && requirements && proposals) {
    int requirements_met = 0;
    string current_agency;
    string best_agency;
    float current_compliance;
    float best_compliance = numeric_limits<float>::min();
    float current_price;
    float best_price = numeric_limits<float>::min();

    for (int i = 0; i < requirements; i++) {
      getline (cin, temp);
    }

    for (int i = 0; i < proposals; i++) {      
      getline (cin, current_agency);

      scanf ("%f %d ", &current_price, &requirements_met);

      for (int i = 0; i < requirements_met; i++) {
	getline (cin, temp);    
      }      
      current_compliance = requirements_met / (float)requirements;

      if (current_compliance > best_compliance) {
	best_compliance = current_compliance;
	best_agency = current_agency;
	best_price = current_price;
      } else if (current_compliance == best_compliance) {
	if (current_price < best_price) {	  
	  best_compliance = current_compliance;
	  best_agency = current_agency;
	  best_price = current_price;
	}
      }
    }
    if (cases > 1) cout << endl;
    cout << "RFP #" << cases++ << endl << best_agency << endl;
  }
  return 0;
}
