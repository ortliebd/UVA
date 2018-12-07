#include <iostream>
#include <string>

using namespace std;

int main (int argc, char **argv) {
  //size of digits
  int size;
  
  //input numbers
  string numbers;

  while (cin >> size && cin >> numbers && size > 0) {
    string output[2 * size + 3][(size + 2) * numbers.size() + numbers.size() - 1];
    for (int i = 0; i < numbers.size(); i++) {
      switch (numbers[i]) {
      case '0':
	for (int m = 0; m < size; m++) { 
	  output[0][1 + (size + 3) * i + m] = "-";
	  output[(2 * size + 2)][1 + (size + 3) * i + m] = "-";
	  
	  output[m + 1][0 + (size + 3) * i] = "|";
	  output[size + 2 + m][0 + (size + 3) * i] = "|";
	  output[1 + m][(size + 1) + (size + 3) * i] = "|"; 
	  output[size + 2 + m][(size + 1) + (size + 3) * i] = "|"; 
	}
	break;
      case '1':
	for (int m = 0; m < size; m++) {
	  output[1 + m][(size + 1) + (size + 3) * i] = "|"; 
	  output[size + 2 + m][(size + 1) + (size + 3) * i] = "|"; 
	}
	break;
      case '2':
	for (int m = 0; m < size; m++) { 
	  output[0][1 + (size + 3) * i + m] = "-";
	  output[size + 1][1 + (size + 3) * i + m] = "-";
	  output[(2 * size + 2)][1 + (size + 3) * i + m] = "-";
	  
	  //output[m + 1][0 + (size + 3) * i] = "|";
	  output[size + 2 + m][0 + (size + 3) * i] = "|";
	  output[1 + m][(size + 1) + (size + 3) * i] = "|"; 
	  //output[size + 2 + m][(size + 1) + (size + 3) * i] = "|"; 
	}
	break;
      case '3':
	for (int m = 0; m < size; m++) { 
	  output[0][1 + (size + 3) * i + m] = "-";
	  output[size + 1][1 + (size + 3) * i + m] = "-";
	  output[(2 * size + 2)][1 + (size + 3) * i + m] = "-";
	  
	  output[1 + m][(size + 1) + (size + 3) * i] = "|"; 
	  output[size + 2 + m][(size + 1) + (size + 3) * i] = "|"; 
	}
	break;
      case '4':
	for (int m = 0; m < size; m++) { 
	  output[size + 1][1 + (size + 3) * i + m] = "-";
	  
	  output[m + 1][0 + (size + 3) * i] = "|";
	  output[1 + m][(size + 1) + (size + 3) * i] = "|"; 
	  output[size + 2 + m][(size + 1) + (size + 3) * i] = "|"; 
	}
	break;
      case '5':
	for (int m = 0; m < size; m++) { 
	  output[0][1 + (size + 3) * i + m] = "-";
	  output[size + 1][1 + (size + 3) * i + m] = "-";
	  output[(2 * size + 2)][1 + (size + 3) * i + m] = "-";
	  
	  output[m + 1][0 + (size + 3) * i] = "|";
	  output[size + 2 + m][(size + 1) + (size + 3) * i] = "|"; 
	}
	break;
      case '6':
	for (int m = 0; m < size; m++) { 
	  output[0][1 + (size + 3) * i + m] = "-";
	  output[size + 1][1 + (size + 3) * i + m] = "-";
	  output[(2 * size + 2)][1 + (size + 3) * i + m] = "-";
	  
	  output[m + 1][0 + (size + 3) * i] = "|";
	  output[size + 2 + m][0 + (size + 3) * i] = "|";
	  output[size + 2 + m][(size + 1) + (size + 3) * i] = "|"; 
	}
	break;
      case '7':
	for (int m = 0; m < size; m++) { 
	  output[0][1 + (size + 3) * i + m] = "-";
	  
	  output[1 + m][(size + 1) + (size + 3) * i] = "|"; 
	  output[size + 2 + m][(size + 1) + (size + 3) * i] = "|"; 
	}
	break;
      case '8':
	for (int m = 0; m < size; m++) { 
	  output[0][1 + (size + 3) * i + m] = "-";
	  output[size + 1][1 + (size + 3) * i + m] = "-";
	  output[(2 * size + 2)][1 + (size + 3) * i + m] = "-";
	  
	  output[m + 1][0 + (size + 3) * i] = "|";
	  output[size + 2 + m][0 + (size + 3) * i] = "|";
	  output[1 + m][(size + 1) + (size + 3) * i] = "|"; 
	  output[size + 2 + m][(size + 1) + (size + 3) * i] = "|"; 
	}
	break;
      case '9':
	for (int m = 0; m < size; m++) { 
	  output[0][1 + (size + 3) * i + m] = "-";
	  output[size + 1][1 + (size + 3) * i + m] = "-";
	  output[(2 * size + 2)][1 + (size + 3) * i + m] = "-";
	  
	  output[m + 1][0 + (size + 3) * i] = "|";
	  output[1 + m][(size + 1) + (size + 3) * i] = "|"; 
	  output[size + 2 + m][(size + 1) + (size + 3) * i] = "|"; 
	}
	break;
      }
    }
    
    for (int i = 0; i < (2 * size + 3); i++) {
      for (int j = 0; j < ((size + 2) * numbers.size() + numbers.size() - 1); j++) {
	if (output[i][j] != "")
	  cout << output[i][j];
	else
	  cout << " ";
      }
      cout << endl;
    }
    cout << endl;
  }
  return 0;
}
