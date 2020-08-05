#include <iostream>

using namespace std;

int printName() {
  string name = "MAX";
  for (int count = 0; count <= 7; count ++) {
    cout << name << endl;
  }
  return 0;
};

int hundreds() {
  for (int count = 0; count <= 100; count ++) {
    cout << count << endl;
  };
  return 0;
};

int actDWLoop () {
  char color;

  do {
    // Ask user
    cout << "Please enter a character: R, G, Y, B, P or Q to quit: ";
    cin >> color;
    color = tolower(color);

    switch (color) {
      case 'r':
        cout << "Red" << endl;
        break;
      case 'g':
        cout << "Green" << endl;
        break;
      case 'y':
        cout << "Yellow" << endl;
        break;
      case 'b':
        cout << "Blue" << endl;
        break;
      case 'p':
        cout << "Pink" << endl;
        break;
      case 'q':
        cout << "Program has finished" << endl;
        break;
      default:
        cout << "Invalid input please try again" << endl;
        break;
    }
  } while (color != 'q');

  return 0;
}

int main() {
  // printName();
  // hundreds();
  actDWLoop();
  return 0;
}