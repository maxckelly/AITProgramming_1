#include <iostream>

using namespace std; 

int forLoop() {
  // Print something 5 times
  string output = "MAX";
  for (int count = 0; count <= 10; count ++) {
    cout << output << count << endl;
  }
  return 0;
};

int whileLoop() {
  int i = 1;

  while (i <= 5) {
    cout << "HELLO WORLD" << endl;
    i++;
  };
  return 0;
};

int anotherWhileLoop() {
  int option = 0, number1 = 0, number2 = 0;

  while (option != 3) {
    cout << "1 - Add" << endl;
    cout << "2 - Sub" << endl;
    cout << "3 - Exit" << endl;
    cout << "Please select an option ";
    cin >> option;

    if (option == 1 || option == 2) {
      cout << "Please enter 2 numbers: ";
      cin >> number1 >> number2;
    };

    switch (option) {
      case 1:
        cout << number1 + number2 << endl;
        break;
      case 2: 
        cout << number1 - number2 << endl;
        break;
      case 3: 
        cout << "You've left the game" << endl;
        break;
      default:
        cout << "Option selected is invalid" << endl;
        break;
    }
  }
  return 0;
};

int doWhileLoop () {
  int i = 20;
  do {
    cout << "Hello world";
    // Expression
    i --;
  } while (i != 0);
  return 0;
};

int nestedLoop () {
  for (int row = 1; row <= 5; row++) {
    // Inner loop will control the cols
    for (int col = 1; col <= 5; col++) {
      cout << "ROW" << row << "COL" << col << endl; 
    };
    cout << endl;
  };

  return 0;
};


int continueKeyword () {
  // Continue keywords - This just keeps running the statement. Break statement stops. 
  for (int i = 1; i <= 50; i++) {
    if (i % 2 == 0) {
      continue;
    }
    else {
      cout << i << endl;
    }
  };

  return 0;
};

int breakKeyword () {
  for (int i = 0; i <= 10; i++) {
    if (i == 5) {
      cout << "break" << endl;
      break;
    }
    cout << "No break yet" << endl;
  }

  return 0;
}

int extraExample () {
  // Extra Example: On assignment 1
  float a = 0, b = 10;
  for (int i = a; i <= b; i++) {
    if (i == 1) {
      cout << "One" << endl;
    }
    else if (i > 5) {
      cout << "Here we find out if its even or odd.";
    }
  }

  return 0;
};



int main() {
  // forLoop();
  // whileLoop();
  // anotherWhileLoop();
  // nestedLoop();
  breakKeyword();
  return 0;
};