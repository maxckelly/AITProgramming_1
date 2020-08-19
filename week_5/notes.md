# Week 5

## Constants / Literals in C++

## What are literals 
  - Literals is a fixed value that is inserted directly into the source code - hard coded.

  ```
  int x = 5;
  cout << "Hello World" << x << endl;
  ```
  - The literal above is the 5. Literals can't be changed.
  - Literals can be
    - Integer - base10, base8 or base16
    - Float - decimal form, exponential form
    - Character literals - wide character literals `wchat_t`, plain character
    - String literals - use `""` instead of `''`
    - Boolean Literal - true or false 
  - Literals are just like `int myNumber = 0;` or `String myName = "MAX";` etc...

## Constants
  - Constants treated like var. You can't change the value of a constant 
  - Ways to use this can be with `const` or `#define`
  ```
  const <type> variableName = value;
  // The define is defined at the top e.g.
  #define MY_CONST 400
  ```
  - For define you don't need an `=` or a `;` at the end. Good practice of define is to use uppercase.
  - When you use `#define` you don't need to define the type e.g. you DON'T need to do `#define int MY_NUM 9` it is just `#define MY_NUM 9`
## Type conversion in C++
  - Type conversion is a process of converting one predefined type ino another type. 
  - e.g. if you have an int and want to convert it to a float 

  ### Implicit type conversion
  - This is automatic type conversion e.g.
  - Type casting should always be in the right order (lower to higher datatype). Below example

  ```
  int a = 10;
  // Implicit type conversion
  float f = a;
  f += 2.5f;
  cout << f << endl;
  ```

  or below is the same: 

  ```
  int myInt = 10;
  double myDouble = myInt;
  ```

  - Type casting in the wrong order can mean loss of data. 
  - Order: bool => char => short int => int => unsigned int => long => unsigned long long => float => double => long double
  - Good table to help https://upload.wikimedia.org/wikipedia/commons/1/1b/ASCII-Table-wide.svg 

  #### Functional casting
  - Forcing the compiler to convert one type to another type. 
  - This meaning you're explicitly saying the type you want...
  e.g. 
  ```
  // Functional casting
  int myIntNumber = 99;

  // Casting from int to double. Using explicit conversion
  double myDouble = double(myIntNumber);
  ```

  #### C Style Casting
  - The below is C style casting 
  ```
  // Functional casting
  int myIntNumber = 99;

  // C Style explicit conversion
  double myCStyleDouble = (double)myIntNumber;
  ```

