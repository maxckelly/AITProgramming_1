#include <iostream>
#include <iomanip> // This is for set percision

using namespace std;

// The below declares the data type of doubles
int doubleDataTypes() {
  // Double declares a double data type
  double myDouble =  2.12345;
  cout << "Value of myDouble is: " <<  myDouble << endl;

  // To explain myDouble with two dec you do the below. To change the number of decimals you put 3 instead of 2 etc...
  cout << "Display my double with 2 decimals spaces: " << fixed << setprecision(2) << myDouble << endl;
  return 0;
};

int floatDataTypes() {
  float myFloat = 12.12f;
  cout << "Value of myFloat is: " << myFloat << endl;
  return 0;
}

// Char you must use single quotes '' not "" 
int charDataTypes() {
  // Chars are only one character
  char myName = 'M';
  cout << "My name is: " << myName << endl;
  return 0;
};

int booleanDataTypes() {
  bool myBoolean = false;
  // boolalpha spits back true or false instead of 1 or 0
  cout << "The Bool is: " << boolalpha << myBoolean << endl;
  return 0; 
}

// The below delcares the data types of integers 
int intDataTypes() {
  // Int declares the an integer
  int myNumber = 10;
  cout << "Value of my number: " << myNumber << endl;

  myNumber = 20;
  cout << "New value of my number: " << myNumber << endl;
  return 0;
};


int getUserAge() {
  // unsigned basically says only positive numbers 
  unsigned int age = 0;

  // Ask user
  cout << "Please enter your age ";

  // Get information from the keyboard and store into var
  cin >> age;

  // Display updated age
  cout << "users age is now: " << age << endl; 
  return 0;
};

int main() {
  charDataTypes();
  booleanDataTypes();
  intDataTypes();
  doubleDataTypes();
  floatDataTypes();
  getUserAge();
  return 0;
};