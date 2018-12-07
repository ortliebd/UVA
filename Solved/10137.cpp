#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main (int argc, char **argv) {
  //input vector
  vector<double> input_vector;
  double temp;
  
  //number of students
  int number_students;

  //total expenses
  double total_expenses;

  //average expenses
  double average_expenses;

  //minimum exchange
  double minimum_exchange;

  double positive_difference;
  double negative_difference;

  //set pricions of cout for two digits after comma

  //main loop
  while (cin >> number_students && number_students > 0) {
    total_expenses = 0;
    average_expenses = 0;
    minimum_exchange = numeric_limits<double>::max();
    
    //each trip loop
    for (int i = 0; i < number_students; i++) {
      cin >> temp;
      total_expenses += temp;
      input_vector.push_back(temp);
    }

    average_expenses = total_expenses / number_students;

    positive_difference = 0;
    negative_difference = 0;

    for (int i = 0; i < number_students; i++) {
      double temp = (long)((input_vector[i] - average_expenses) * 100);
      if (temp > 0)
	positive_difference += temp;
      else
	negative_difference += temp;
    }
    negative_difference *= -1;
    double result = negative_difference > positive_difference? negative_difference : positive_difference;
    
    printf("$%.2f\n", result / 100);
   
    input_vector.clear();
  }
  return 0;
}
