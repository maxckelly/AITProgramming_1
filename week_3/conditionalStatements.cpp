#include <iostream>

using namespace std;

int main () {

  // Declare the integer variable 
  int number = 0;

  // Asks the user to enter a number
  cout << "Please enter a number ";

  // Gets the  number from the user and stores it in the var
  cin >> number;

  // Conditional operators
  if (number > 0 && number <= 9) {
    // Checks if number is greater than 0 but less than or equal to 9
    cout << "Your number is greater than 0" << endl;
  } else if (number >= 10) {
    // Checks if number is greater than or equal to 10
    cout << "Your number is more than 10!" << endl;
  } else {
    cout << "You number is less than 0" << endl;
  }

  return 0;
};