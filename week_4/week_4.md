# Week 4 - Loop statements

## Loops
  - Allows you to execute code till the condition is finished. 
    ```
    for (init; condition; expression) {
      statement(s);
    };
    ```
    - Below init is the var it starts with e.g. count = 0.
    - Condition - count >= 10;
  - Example below
    ```
    string output = "MAX";
    for (int count = 0; count <= 10; count ++) {
      cout << output << count << endl;
    }
    ```
## While loops
  - While loops are very similar to javascript while loops
  ```
  int m = 1;
  while (m <= 10) {
    cout << "HELLO WORLD" << end;
    m++;
  }
  ```
  - Another example below:
  ```
  int i = 1;

  while (i <= 5) {
    cout << "HELLO WORLD" << endl;
    i++;
  };
  ```
## DO WHILE loop
  - Similar to while loop
  ```
  int i = 20;
  do {
    cout << "Hello world";
    // Expression
    i --;
  } while (i != 0);
  ```
## Nested Loops
  - Nested loops are conditions within a loop
  ```
  for (int row = 1; row <= 5; row++) {
    // Inner loop will control the cols
    for (int col = 1; col <= 5; col++) {
      cout << "ROW" << row << "COL" << col << endl; 
    };
    cout << endl;
  };
  ```