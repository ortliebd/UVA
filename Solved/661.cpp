#include <iostream>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<vi> vii;

int main (int argc, char **argv) {
  int number_of_devices;
  int number_of_operations;
  int capacity_of_fuse;

  int input;
  int sequence = 0;

  while (cin >> number_of_devices >> number_of_operations >> capacity_of_fuse &&
	 number_of_devices && number_of_operations && capacity_of_fuse) {
    vii devices;
    int maximal_power_consuption = 0;
    int current_power_consuption = 0;
    sequence++;
    
    devices.resize(number_of_devices);
    
    for (int i = 0; i < number_of_devices; i++) {
      cin >> input;
      devices[i].push_back(input);
      devices[i][1] = 0;
    }
    
    for (int i = 0; i < number_of_operations; i++) {
      cin >> input;
      if (maximal_power_consuption != -1) {
	if (devices[input - 1][1] == 0) {
	  devices[input - 1][1] = 1;
	  current_power_consuption += devices[input - 1][0];
	  
	  if (current_power_consuption > maximal_power_consuption)
	    maximal_power_consuption = current_power_consuption;
	  
	  if (current_power_consuption > capacity_of_fuse) {
	    maximal_power_consuption = - 1;
	  }
	} else if (devices[input - 1][1] == 1) {
	  devices[input - 1][1] = 0;
	  current_power_consuption -= devices[input - 1][0];
	}
      }
    }

    cout << "Sequence " << sequence << endl;
    if (maximal_power_consuption == - 1) {
      cout << "Fuse was blown.\n";
    } else {
      cout << "Fuse was not blown.\n" << "Maximal power consumption was "
	   << maximal_power_consuption << " amperes.\n";
    }
    cout << endl;
  }
  return 0;
}
