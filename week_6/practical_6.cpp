#include <iostream>
#include <iomanip> // This is for set percision
using namespace std;

int questionOne() {

  string printOut = "C++ Revision Exercise \n----------------------\n \nWelcome to C++ Revision Session"; 

  cout << printOut << endl;
  return 0;
};

int questionTwo() {
  int n;

  n = 32;

  cout << n << endl;

  return 0;
};

int questionThree() {
  double numberOne, numberTwo;

  cout << "Please enter your first number ";
  cin >> numberOne;
  cout << "Please enter your second number ";
  cin >> numberTwo;

  cout << "Total: " << fixed << setprecision(2) << numberOne + numberTwo << endl;

  return 0;
};

int questionFour() {
  int intFive = 5, intSeven = 7, intFour = 4, intThree = 3;
  double doubleNumberOne = 5.4, doubleNumberTwo = 2.2, doubleNumberThree = 8.0;

  cout << intFive <<  " + " << intSeven << " = " << intFive + intSeven << endl;
  cout << doubleNumberOne << " - " << doubleNumberTwo << " = " << doubleNumberOne - doubleNumberTwo << endl;
  cout << intFive << " * " << doubleNumberThree << " = " << fixed << setprecision(1) << intFive * doubleNumberThree << endl;
  cout << intFive << " + " << intSeven << " = " << intFive / intSeven << endl;
  cout << intFour << " % " << intThree << " = " << intFour % intThree << endl;

  return 0;
};


int questionFive() {
  int userNumbers[5], n, count = 0;
  float sum = 0.0, avg;

  while (count < 5) {
    cout << "Please enter a number ";
    cin >> userNumbers[count];
    count ++;
  };

  n = sizeof(userNumbers) / sizeof(userNumbers[0]);

  for (int index = 0; index < n; index ++) {
    sum += userNumbers[index];
    avg = sum / n;
  };


  cout << "The average is: " << avg << endl;

  return 0;
};

int questionSix () {

  return 0;
};

int questionSeven() {
  int userNumbers[3];
  int arrayLength, smallestNumber;
  arrayLength = sizeof(userNumbers) / sizeof(userNumbers[0]);

  // Asks user to enter in the number
  for (int index = 0; index < arrayLength; index ++) {
    cout << "Please enter a number " << endl;
    cin >> userNumbers[index]; 
  };

  // Finds the smallest number
  for (int index = 0; index < arrayLength; index ++) {
    if (userNumbers[0] > userNumbers[index]) {
      smallestNumber = userNumbers[index];
      break;
    }
  }

  cout << smallestNumber << endl;
  return 0;
}

int main () {
  // questionOne();
  // questionTwo();
  // questionThree();
  // questionFour();
  // questionFive();
  // questionSix();
  // questionSeven();
  return 0;
}