#include <iostream>
#include <iomanip> // This is for set percision
using namespace std;

int activityOne () {
  int emptyArray[10] = {};
  int userInput;
  int displayedCount; 

  for (int i = 0; i < 10; i++) {
    cout << "Please enter a number: ";
    cin >> emptyArray[i];
  };

  for (int i = 0; i < 10; i++) {
    cout << emptyArray[i] << endl;
  };

  cout << "What number would you like to find? ";
  cin >> userInput;

  for (int i = 0; i < 10; i++) {
    userInput == emptyArray[i] ? displayedCount +=1 : displayedCount;
  };

  cout << displayedCount << endl;

  return 0;
}

int main()
{
  activityOne();
  return 0;
}