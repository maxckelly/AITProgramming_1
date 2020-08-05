#include <iostream>

using namespace std; 

int questionOne () {
  int userInput;
  // Ask user
  cout << "Please enter a number: ";
  cin >> userInput;

  for (int count = 1; count <= userInput; count ++) {
    cout << (userInput * count) << endl;
  };

  return 0;
};

int questionTwo () {
  float floatNumber = 2;
  while (floatNumber >= 0) {
    cout << floatNumber << endl;
    floatNumber = floatNumber - 0.25;
  }

  return 0;
};


int questionThree() {
  float floatNumber = 2;

  do {
    cout << floatNumber << endl;
    floatNumber = floatNumber - 0.25;
  } while (floatNumber >= 0);

  return 0;
}

int questionFour () {
  for (int count = 100; count >= 0; count --) {
    cout << count << endl;
  }
  return 0;
};

int questionFive() {
  // row * col
  int userInput;
  cout << "Please enter multiplication size(1-15): ";
  cin >> userInput;

  for (int row = 1; row <= userInput; row++) {
    for (int col = 1; col <= userInput; col++) {
      cout << row * col << " ";
    }
    cout << endl;
  }

  return 0;
};

int main() {
  cout << "Question One" << endl;
  questionOne();
  cout << endl;

  cout << "Question Two" << endl;
  questionTwo();
  cout << endl;

  cout << "Question Three" << endl;
  questionThree();
  cout << endl;

  cout << "Question Four" << endl;
  questionFour();
  cout << endl;

  cout << "Question Five" << endl;
  questionFive();
  cout << endl;

  return 0;
};