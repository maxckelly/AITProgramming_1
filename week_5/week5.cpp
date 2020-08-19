#include <iostream>

using namespace std;

int implicitConversion () {
  int ten = 10;
  char a = 'a'; // ASCII = 97 in decimal

  int result = ten + a; // This will give us 107

  cout << "The value of result = " << result << endl;
  return 0;
};

int act_ImpTypeConv () {
  int myNum;
  float myFloat;

  cout << "Please enter one int number and one float number ";
  cin >> myNum >> myFloat;

  // Convert int to float
  float result = myNum;

  cout << myFloat + result << endl;

  return 0;
};

int act_ExpTypeCon () {
  // Declare var
  int myInt;
  double myDouble;

  // Ask user input
  cout << "Please enter one int number and float number ";
  cin >> myInt >> myDouble;

  // cast convert double into an int
  int myConvertedInt = int(myDouble);

  cout << myDouble << endl;
  cout << myConvertedInt << endl;
  cout << "Area of square is " << (myDouble * myConvertedInt) << endl; 
  return 0;
}

int explicitTypeConversion () {
  // Functional casting
  int myIntNumber = 99;

  // Casting from int to double. Using explicit conversion
  double myDouble = double(myIntNumber);

  // C Style explicit conversion
  double myCStyleDouble = (double)myIntNumber;


  return 0;
}

int main() {
  // act_ImpTypeConv();
  // implicitConversion();
  // explicitTypeConversion();
  act_ExpTypeCon();
  return 0;
}