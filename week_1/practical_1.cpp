// Header file to perform input/output. This is a library, its predefined working. <iostream> is for input and output streams.
// So this is saying include this library 
#include <iostream>

using namespace std;

/* 
  Question 2: 
  This is a multiline comment 
  In this program iit will run the below function program, and print "MAX KELLY", my DOB and the file path to this file on separete lines.
*/

int myName(){
  // Below I'm printing out my name
  cout << "Max Kelly" << endl;
  return 0;
};

// The below gets the file path location and prints it in the main function
int filePathLocation() {
  // Below I'm printing out the file path location
  cout << "/Users/mkelly/AITProgramming_1/weekOne/practical_1.cpp" << endl;
  return 0;
}

int main() {
  // Below runs the above functions
  myName();
  filePathLocation();
  cout << "06/12/1997" << endl;
  return 0;
};

