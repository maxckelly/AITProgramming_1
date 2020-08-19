#include <iostream>
#include <iomanip> // This is for set percision 
using namespace std; 

int taskOne () {
  // Define the const
  const float PI = 3.14159265359;
  float userRadius = 0.0f;

  // Ask user
  cout << "Please enter a random number for the radius ";
  cin >> userRadius;

  // Calculate and display results
  cout << "Area of the circle = " << fixed << setprecision(5) << PI * userRadius * userRadius << endl;

  return 0;
}

// Define the PI
#define PI 3.14159265359

int taskTwo () {
  // Define var
  double userInput = 0.0;

  // Ask user input
  cout << "Please enter a random number for the circumference ";
  cin >> userInput;

  // Display result 
  cout << "Circumference of your circle = " << fixed << setprecision(5) << PI * 2 * userInput << endl;
  return 0;
}


int taskThree () {
  // Question A
  int i1 = 4;
  int i2 = 8;

  // Convert i1 to double
  double i1Double = double(i1);
  double i2Double = double(i2);

  // Display converted results
  cout << "i1Double converted " << i1Double << endl;
  cout << "i2Double converted " << i2Double << endl;
  
  // Calculate i1/i2 and print result 
  cout << "i1Double / i2: " << i1Double / i2 << endl;
  cout << "i1 / i2Double: " << i1 / i2Double << endl;

  // Calculates i1 / i2 then converts to double. 
  double result = double(i1 / i2);
  cout << "Result " << result << endl;

  // Question B
  double d1 = 5.5;
  double d2 = 6.6;

  // Assign i1 to d1 then print d1
  i1 = d1;
  cout << "i1 now is double: " << d1 << endl;

  // Assign d2 to i2 then print i2
  i2 = d2;
  cout << "d2 value is now int: " << i2 << endl;

  return 0;
}

int main () {
  taskOne();
  taskTwo();
  taskThree();
  return 0;
}
