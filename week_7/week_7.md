- `type name[size];` e.g. `int numbers[5];`
- It's good practice to first initialise with at least {} that means it returns 0 instead of a random number.
- to initialise an array you can do `int numbers[5] = {}` or `int numbers[5] = {40, 55, 63}`.
- NOTE: if you have no don't put in the declared array length on initialise e.g. 5 then it will init with 0.
- You don't need to specify the size of the array you must initialize with values. E.g. `int numbers[] = {1, 2, 3}`
- Display elements of an array you can use a for loop like 
```
// 5 is the array length
for (int i = 0; i < 5; i++) {
  cout << numbers[i];
}
```

- Multidimensional arrays - `type name[size1][size2]` e.g.
- The first elements (2) is the two objects, the [3] is the number of elements inside the first object, finally the [4] is the elements inside the inner most objects 
```
int numbers[2][3][4] = {
  { {1,2,3,4} {4,5,6,7} {7,8,9,10} }, 
  {1, 2, 3,4} {4, 5, 6,7} }}
```

- Two Dimensional arrays - `type name[2][3]`, `type name[row][column]` e.g. `int x = twoDNum[1][3]`.
- Think of this as a table this array would have two rows and 3 columns so 
```
int twoDim[3][5] = {};
int position = twoDim[1][3];
```

- Character arrays
- NOTE: There will always be a `\0` at the end of a char array. This effects the size e.g. if you put 5 then the fifth index will display `\0`. This is called the null terminator and tells teh program its at the end of the array.
- e.g. `char chArray[] = "Hello";`
```
// First way to declare
char name[10];

// Second way to declare
char myName[] = "Max";

// Third way can be doing it one by one. Compiler will NOT add the `\0` at the end 
char hello[] = {'h', 'e', 'l', 'l', 'o', '\0'};
```
- You don't need to loop through the char arrays you can just print it and it will print in order. 