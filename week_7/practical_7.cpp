#include <iostream>
#include <string>
#include <iomanip> // This is for set percision
using namespace std;

int questionOne() {
  // Delcare two arrays
  char suitArray[4] = {'C', 'D', 'H', 'S'};
  int cardNumberArray[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

  // Loop through first array 
  for (int r = 0; r < 4; r++) {
    // Print out first array
    cout << suitArray[r] << " ";
    // Loop through second array and print out. 
    for (int c = 0; c < 13; c ++) {
      // If number is any of the below either print out number or string
      switch (cardNumberArray[c])
      {
      case 1:
        cout << "ACE" << " ";
        break;
      case 11:
        cout << "JACK" << " ";
        break;
      case 12:
        cout << "QUEEN" << " ";
        break;
      case 13:
        cout << "KING" << " ";
      default:
        cout << cardNumberArray[c] << " ";
        break;
      }
    }
    cout << endl;
  }

  return 0;
};

// Declare arrays
string nameArray[3] = {"John", "Peter", "Sally"};
double salary[3] = {2450.00, 2750.50, 1500.75};

int questionTwo() {
  // Set headers
  cout << "NAME" << " " << "MONTHLY SALARY" << endl;
  // Loop through arrays and print out the data. 
  for (int c = 0; c < 3; c++) {
    cout << nameArray[c] << " " << fixed << setprecision(2) << salary[c] << endl;
  };
  return 0;
}

int questionThree() {
  // Loop through the arrays above. 
  for (int i = 0; i < 3; i++) {
    // Calculates yearly income
    double yearlyIncome = salary[i] * 12; 

    // If yearly income below threshold then don't calculate tax
    if (yearlyIncome <= 18200) {
      cout << nameArray[i] << " has no tax, yearly income under 18,200" << endl;
    } else {
      // Else calculate tax and print name + tax
      double totalTax = yearlyIncome * 0.19;
      cout << nameArray[i] << "'s tax for 2020 is: " << fixed << setprecision(2) << totalTax << endl;
    }
  };

  return 0;
}

int main()
{
  questionOne();
  questionTwo();
  questionThree();
  return 0;
}