#include <iostream>

using namespace std;

int questionOne () {
  // Declare var
  int numberOne = 4;
  int numberTwo = 4;
  string notDivisiable;

  notDivisiable = (numberOne % numberTwo) ? "It is not divisable" : "It is divisable";

  cout << notDivisiable << endl;
  return 0;
};

int questionTwo () {
  char input;
  string response; 
  // Ask user
  cout << "Are you enrolled in the subject?: y/n: ";
  cin >> input;

  // handle user response with tenary:
  // response = (input == 'Y' || input == 'y') ? "You are enrolled" : "You are not enrolled";

  // Handle users response
  // if (input == 'y' || input == 'Y') {
  //   response = "You are enrolled";
  // } else if (input == 'n' || input == 'N') {
  //   response = "You are not enrolled. To enroll go to our website";
  // } else {
  //   response = "You pressed the wrong key, please either press y or n";
  // }

  // Handle with switch
  switch (input) {
    case 'Y':
    case 'y':
      response = "You are enrolled";
      break;
    case 'N':
    case 'n':
      response = "You are not enrolled. To enroll go to our website";
      break;
    default:
      response = "You pressed the wrong key, please either press y or n";
      break;
  }

  // Display response
  cout << response << endl;
  return 0;
};

int questionThree () {
  // Number Vars
  int num1 = 54;
  float num2 = 88.0f;
  double num3 = 111;

  // Handle which one is the smallest
  if (num1 < num2 && num1 < num3) {
    cout << "The min number is: " << num1 << endl;
  } else if (num2 < num1 && num2 < num3) {
    cout << "This min number is: " << num2 << endl;
  } else if (num3 < num1 && num3 < num2) {
    cout << "The min number is: " << num3 << endl;
  }

  return 0;
};

int questionFour() {
  char input;
  string question = "Please pick a color: r = Red, g = Green, y = Yellow, b = Blue, p = Pink ";
  string response = "The color picked by you is: "; 
  
  // Ask user
  cout << question;

  // Get user input 
  cin >> input;

  // Handle code based on user selection
  switch (input) {
    case 'r':
    case 'R':
      cout << response << "Red" << endl;
      break;
    case 'g':
    case 'G':
      cout << response << "Green" << endl;
      break;
    case 'y': 
    case 'Y':
      cout << response << "Yellow" << endl;
      break;
    case 'b': 
    case 'B':
      cout << response << "Blue" << endl;
      break;
    case 'p': 
    case 'P':
      cout << response << "Pink" << endl;
      break;
    default:
      break;
  }

  return 0;
};

int main () {
  questionOne();
  questionTwo();
  questionThree();
  questionFour();
  return 0;
};