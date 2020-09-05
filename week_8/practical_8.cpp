#include <iostream>
#include <string>
#include <iomanip> // This is for set percision
using namespace std;

int userInputOne, userInputTwo, userInputThree, vendorAmount, vendorSelection, questionThreeUserInput = 0, userNum, baseNumber;
double userAdd1, userAdd2;

int questionOne(int num1, int num2, int num3) {
  if (num1 < num2 && num1 < num3) {
    return num1;
  } else if (num2 < num1 && num2 < num3) {
    return num2;
  } else {
    return num3;
  }
};

void questionTwo() {
  // Declares vars
  double drinkPrice = 1.60, amount = 0, prevAmount, change;
  double twentyDollars= 0.0, tenDollars = 0.0, fiveDollars = 0.0, twoDollars = 0.0, oneDollar = 0.0, fiftyCents = 0.0, twentyCents = 0.0, tenCents = 0.0, fiveCents = 0.0;
  int vendorSelection = 0;

  // Asks user how much money they want to spend
  for (prevAmount = 0; amount < drinkPrice; prevAmount = prevAmount + amount)
  {
    amount = prevAmount;
    cout << "Please enter note or coin (0.05, 0.1, 0.2, 0.5, 1, 2, 5, 10 or 20) ";
    if (amount >= drinkPrice) {
      break;
    };

    cin >> amount;
  };

  // Asks user what option they would like
  for (int i; vendorSelection <= 0 || vendorSelection > 3; i ++) {
    cout << "Please select your item \n 1. Coca Cola \n 2. Sprite \n 3. Fanta " << endl;
    cin >> vendorSelection;
  };

  // Displays selected option
  cout << "You selected drink: " << vendorSelection << endl;

  // Calc the total change
  change = amount - drinkPrice;

  // Assign values to the change
  while (change >= 20) {
    change -= 20;
    twentyDollars++;
  };

  while (change >= 10) {
    change -= 10;
    tenDollars++;
  };

  while (change >= 5) {
    change -= 5;
    fiveDollars++;
  };

  while (change >= 2) {
    change -= 2;
    twoDollars++;
  };

  while (change >= 1) {
    change -= 1;
    oneDollar++;
  };

  while (change >= .5) {
    change -= 0.5;
    fiftyCents++;
  };

  while (change >= .2) {
    change -= 0.2;
    twentyCents++;
  };

  while (change >= .1) {
    change -= 0.1;
    tenCents++;
  };

  while (change >= 0.05) {
    change -= 0.05;
    fiveCents++;
  };

  // Display the change back
  cout << "$20 note: " << twentyDollars << endl;
  cout << "$10 note: " << tenDollars << endl;
  cout << "$5 note: " << fiveDollars << endl;
  cout << "$2 coin: " << twoDollars << endl;
  cout << "$1 coin: " << oneDollar << endl;
  cout << "50c coin: " << fiftyCents << endl;
  cout << "20c coin: " << twentyCents << endl;
  cout << "10c coin: " << tenCents << endl;
  cout << "5c coin: " << fiveCents << endl;
};

// Question Three
void questionThree(int userInput, int add = 2)
{
  for (int count = add; add <= userInput; add = add + 2) {
    cout << add << endl;
  }
};

// Question Four
double add (double num1, double num2) {
  return num1 + num2;
};

int add(int num1, int num2) {
  return num1 + num2;
};

int add(int num1, double num2) {
  return num1 + num2;
};

// Question Five - overpowering function
double myPower(double baseNumber, int exponentNumber = 2) {
  float result = 1;

  // While expon number doesnt = 0 times the result by the base number and take one away from exponent number
  while (exponentNumber != 0) {
    result *= baseNumber;
    --exponentNumber;
  };

  return result;
};

float myPower(float baseNumber, int exponentNumber = 2)
{
  float result = 1;

  while (exponentNumber != 0)
  {
    result *= baseNumber;
    --exponentNumber;
  };

  return result;
};

int myPower(int baseNumber, int exponentNumber = 2)
{
  float result = 1;

  while (exponentNumber != 0)
  {
    result *= baseNumber;
    --exponentNumber;
  };

  return result;
};

long int myPower(long int baseNumber, int exponentNumber = 2)
{
  float result = 1;

  while (exponentNumber != 0)
  {
    result *= baseNumber;
    --exponentNumber;
  };

  return result;
};

int main () {
  cout << "QUESTION ONE" << endl;
  cout << "Please enter three numbers ";
  cin >> userInputOne >> userInputTwo >> userInputThree;
  cout << questionOne(userInputOne, userInputTwo, userInputThree) << endl;

  cout << "QUESTION TWO" << endl;
  questionTwo();

  cout << "QUESTION THREE" << endl;
  cout << "Please enter how much you want to add up too ";
  cin >> questionThreeUserInput;
  questionThree(questionThreeUserInput);

  cout << "QUESTION FOUR" << endl;
  cout << "Please enter two numbers: ";
  cin >> userAdd1 >> userAdd2;
  cout << add(userAdd1, userAdd2) << endl;

  cout << "QUESTION FIVE" << endl;
  cout << "Please enter in a base number ";
  cin >> baseNumber;
  cout << myPower(5.0f, baseNumber) << endl;
  return 0;
}