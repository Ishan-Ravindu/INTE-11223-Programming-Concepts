#include <iostream>
#include <string>
using namespace std;
int main() {
  int number = 123456789;
  int remainder = 0;
  int reverseNumber = 0;
  int* numberPtr = &number;
  int* remainderPtr = &remainder;
  int* reverseNumberPtr = &reverseNumber;

  while ((*numberPtr) > 0) {
    *remainderPtr = *numberPtr % 10;
    *numberPtr = *numberPtr / 10;
    *reverseNumberPtr = (*reverseNumberPtr * 10) + *remainderPtr;
  }

  cout << "reverse number is " << *reverseNumberPtr << endl;
}