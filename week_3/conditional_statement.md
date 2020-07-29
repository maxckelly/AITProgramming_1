# Week 3 

### If statement
  - These are very similar to javascript. See below example

  ```
    // Declare the integer variable 
    int number = 0;

    // Asks the user to enter a number
    cout << "Please enter a number ";

    // Gets the  number from the user and stores it in the var
    cin >> number;

    // Conditional operators
    if (number > 0 && number <= 9) {
      // Checks if number is greater than 0 but less than or equal to 9
      cout << "Your number is greater than 0" << endl;
    } else if (number >= 10) {
      // Checks if number is greater than or equal to 10
      cout << "Your number is more than 10!" << endl;
    } else {
      cout << "You number is less than 0" << endl;
    }
  ```

  - Another example below: 

  ```
    int num1, num2, num3;

    cout << "Please enter 3 integers ";

    // The below is the same as doing cin on seprate lines.
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 >> num3) {
      cout << "Num1 is the largest number: " << num1 << endl;
    } else if (num2 > num1 && num2 > num3) {
      cout << "Num2 is the largest number: " << num2 << endl;
    } else {
      cout << "Num3 is the largest number: " << num3 << endl;
    }
  ```
### Switch statements

  - Similar to switch statements in javascript syntax is the same. However if you need to do an or in a switch you have to do a new line with the word `case` like the below example:

  ```
    char menuOption = 'a';

    // Display options
    cout << "A || a - First option" << endl;
    cout << "B || b - Second option" << endl;
    cout << "C || c - Third option" << endl;

    cin >> menuOption;

    switch (menuOption) {
      case 'A':
      case 'a':
        cout << "You selected option A" << endl;
        break;
      case 'B': 
      case 'b': 
        cout << "You selected option B" << endl;
      case 'C':
      case 'c':
        cout << "You selected option C" << endl;
      default:
        cout << "You didn't select an option, please try again" << endl;
        break;
    }
  ```
### Nested Conditions
  - You can nest if statements just like javascript 

  ```
  // Declare a student mark
  float studentMark = 0.0f;

  // Ask the user to enter a student mark 
  cout << "Please enter the student mark: ";

  // Get the mark and assign to var
  cin >> studentMark;

  // Check if student mark >= 0
  if (studentMark >= 0) {
    if (studentMark > 50) {
      cout << "Student passed!" << endl;
    }
  }
  ```

### Ternary Operator 
  - Ternary operator is the same as javaScript - Only difference is that it needs () around the operators 
  
  ```
    int a = 10, b = 20;
    bool result;
    
    result = (a > b) ? true : false;

    cout << "Is A greater than B? " << boolalpha << result << endl;
    return 0;
  ```

### Questions: 
  - Does the return statement work the same in c++ as in javaScript.