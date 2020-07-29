#include <iostream>
#include <iomanip> // This is for set percision
#include <stdio.h>
#include <ctype.h> // Converts char letter to uppercase char using toupper()

using namespace std;

// Assigns a number to a var then prints it to the screen. 
int questionOne() {
  int n = 32;
  return n;
};

// Takes in three numbers from the user then adds them together. 
int questionTwo () {
  int a = 0;
  int b = 0;
  int c = 0;

  cout << "Enter number one ";
  cin >> a;

  cout << "Enter number two ";
  cin >> b;

  cout << "Enter number three ";
  cin >> c;

  cout << "Your total is: " << (a + b + c) << endl;
  return 0;
};

int questionThree(int numOne, int numTwo) {
  double firstDouble = numOne;
  double secondDouble = numTwo;
  double total = (firstDouble + secondDouble);
  cout << "My double " << fixed << setprecision(2) << total << endl;
  return 0;
};

// Converts the letters to upper case 
int questionFour(char letterOne, char letterTwo) {
  char firstLetter = toupper(letterOne);
  char secondLetter = toupper(letterTwo);
  cout << "Hello, " << firstLetter << "." << secondLetter << "." << "!" << endl;
  return 0;
}

int main() {
  cout << questionOne() << endl;
  questionTwo(); 
  questionThree(45.0, 23.0);
  questionFour('t', 'h');
  return 0;
};