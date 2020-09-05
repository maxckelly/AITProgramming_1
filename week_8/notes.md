## Functions 
- Function is a group of statements with a name
- The below is an example function. A return type is what will be returned e.g. string etc... IF its void we don't need to put the return type.
```
return_type function_name (params) {
  statement1;
  statement2;
  statement3;
  return statement;
};
```

``` 
int functionOne (int num1, int num2) {
  // Max number is local to function
  int maxNumber = 0;

  if (num1 > num2) {
    maxNumber = num1;
  } else {
    maxNumber = num2;
  }

  // returns an int
  return maxNumber;
}
```

- Function declertion is telling the compiler what we're going to compile later on. It allows you to declare the function incase it runs after main() and doesn't fail. `int functionName(int, int);` or `int functionName();` or `int functionName(int num1, int num2);`
- Function overloading: two or more function with the same name but different params are known as overloaded functions
```
int Sum (int a, int b);
float Sum(float a, float b);
double Sum(double a, double b, double c = 1);
```