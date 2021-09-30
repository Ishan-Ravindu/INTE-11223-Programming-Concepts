#include <iostream>

using namespace std;

int main() {
  int inputNumber;
  int* inputNumberPtr;

  cout << "enter your number =: ";
  cin >> inputNumber;
  inputNumberPtr = &inputNumber;
  cout << "input number address is " << inputNumberPtr << endl;
}