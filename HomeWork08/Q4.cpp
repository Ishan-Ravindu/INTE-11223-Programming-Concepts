#include <iostream>

using namespace std;

int main() {
  int inputNumber;
  int* inputNumberPtr = &inputNumber;

  cout << "enter your number =: ";
  cin >> *(inputNumberPtr);
  cout << "value in the pointer address = " << *inputNumberPtr << endl;
}