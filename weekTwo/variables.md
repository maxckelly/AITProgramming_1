
# Week 2 - Data Types, C++ gotchas, Variables, CIN, Operators
- roy.fernando@ait.edu.au 

## Data Types
  A data type is classification of data which tells the compiler pr interpreter how the program instends to run the data. 
  - 1. Integer - Whole numbers: 4 bytes of RAM. `int`
  - 2. Character - storing single characters occupies `1 byte of RAM`, keyword is `char`
  - 3. Boolean - Used to store true or false, `1 Byte of RAM`, keyword is `bool`.
  - 4. Floating point: Used to store decimal points, `4 bytes of RAM`, keyword is `float`.
  - 5. Double floating point:  Used for storing values with decimal point, `8 bytes of RAM`, keyword is `double`

## Variables 
  - You can declare a variable by putting `data_type` then `variable name` e.g. `int myNum = 10`
  - Another way to declare var is on the same line like `int variableA = 10, variableB = 20` 

## C++ gotchas
  -  When declaring a boolean if you don't put `boolalpha` it will return binary 0 or 1. If you put `boolalpha` before it will return `true` or `false`. For example:    
  ```
  bool myBoolean = false;
  // boolalpha spits back true or false instead of 1 or 0
  cout << "The Bool is: " << boolalpha << myBoolean << endl;
  ```

  - If you're declaring a `char` then you need to put it in single quotes `''` instead of double `""`. For example: 
  ```
  char myName = 'M';
  ```

  - if you're assigning a float to a variable you must put `f` at the end of the float number. For example: 
  ```
  float myFloat = 12.12f;
  ```

  - To create a new line when printing text you can use the below `\n` or `endl`

## Global and local variables 
  - Global are vars declared outside of main and can be accessed by any function.
  - Local var are declared inside a function and can only be accessed by one function. 

## CIN 
  - `cin` is used to get data from the user. It uses `>>` as we're inputting data. This is the opp of `cout` as it uses `<<.`
  - `cin` and the stream extraction operator `>>` reads input from the keyboard. Below is an example:
  ```
  // Declares var
  int age = 0;

  // Asks user to enter their age
  cout << "Please enter your age";

  // Get information from the keyboard and store into var
  cin >> age;
  ```

## Data type modifiers 
  - These are used to increase or decrease the bit sizes and improve the speed of your application.
  - Data type modifiers are used with the primitive data. 
  - e.g. `shortint` reduces the size

  - `short`
  - `unsigned short`
  - `signed` 
  - `unsigned`

## Operators

  - An operator in a programming language tells a complier to perform specific mathematical and logical computations on operands
  - Operands are the variables
  - `+` is the addition operator and the variables `numOne` and `numTwo` are operands. The operator tells the operands what do to. Example below:
  ```
  int numOne = 1;
  int numTwo = 2; 
  int total = numOne + numTwo;
  ```
  - Arithmetic Operators: `+`, `-`, `*`, `%`, `/`
  - Relational Operators: `<`, `>`, `<=`, `>=`, `==`, `!=`
  - Logical Operators: `&&`, `||`, `!`
  - Assignment Operators: `=`, `+=`, `-=`, `*=`, `/=`, `%=`
  - Increment and Decrement Operators:  `++`, `--`

## Rules of Precedence and associative 
  - To learn more about this go here: 
  - This is just basically how the program reads the code. E.g. 
  - `()` - The program reads this from left -> right
  
## Conditional Operator C++
```
  int smallestNumber = 0, number1 = 10, number2 = 20
  smallestNumber = (number1 < number2) ? number1 : number2
```
## Summary 
- printing something onto the screen we use `cout` with the operator `<<`
- Some of the basic data types in C++ are `int`, `double`, `float`, `bool`, `char`
- Syntax for declaring and init var is `data_type var name =  value`
- `cin` is used to get data input and used with the operator `>>`
- A A mathematical or logical expressions is formed with the help of an operator e.g. `+`
- Most operators work on primitive data types by default (numbers)
- Operators can work on one, two or even three operands at once. Operands are the variable 