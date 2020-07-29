#include <iostream>

using namespace std;

int employeeNumber() {
  int empNo = 10;
  cout << "Employee number is: " << empNo << endl;
  return 0;
};

int employeeSalary() {
  float empSalary = 675.34;
  cout << "Employee salary is: " << empSalary << endl;
  return 0;
};

int employeeEmploymentStatus() {
  bool empEmploymentStatus = true;
  cout << "Employeee Status: " << boolalpha <<  empEmploymentStatus << endl;
  return 0;
};

int employeeMartialStatus() {
  char empMartialStatus = 'M';
  cout << "Employee Martial Status " << empMartialStatus << endl;
  return 0;
};

int main() {
  employeeNumber();
  employeeSalary();
  employeeEmploymentStatus();
  employeeMartialStatus();
  return 0;
};