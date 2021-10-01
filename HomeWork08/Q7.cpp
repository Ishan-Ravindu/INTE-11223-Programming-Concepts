#include <iostream>

using namespace std;
int factorial(int number);

int main() {
  int factorialOfNumber;
  int* factorialOfNumberPtr = &factorialOfNumber;

  *factorialOfNumberPtr = factorial(3);
  cout << *factorialOfNumberPtr << endl;
}

int factorial(int number) {
  if (number == 1) return 1;
  return (number)*factorial(number - 1);
}