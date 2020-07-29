#include <iostream>

using namespace std;

int gradingSystem () {
  // Declare var 
  float mark = 0.00f;

  // Asks the user to enter mark
  cout << "Please enter the students mark: ";

  // Capture input and assign to var
  cin >> mark;

  if (mark <= 49.99) {
    cout << "Grade F" << endl;
  } else if (mark >= 50.00 && mark <= 64.99) {
    cout << "Grade P" << endl;
  } else if (mark >= 65.00 && mark <= 74.99) {
    cout << "Grade C" << endl;
  } else if (mark >= 75.00 && mark <= 84.99) {
    cout << "Grade D" << endl;
  } else if (mark >= 85.00 && mark <= 100.00) {
    cout << "Grade H" << endl;
  } else {
    cout << "Error please try again" << endl;
  }

  return 0;
};

int main () {
  gradingSystem();
  return 0;
};