#include <iostream>

using namespace std;

void valueSwap(int*, int*);

int main() {
  int arrayLength = 14;
  int numberArray[arrayLength] = {62, 5, 2, 7, 9, 1, 0, 9, 8, 5, 0, 1, 2, 58};
  int firstNumberIndex = 0;
  int secondNumberIndex = 1;

  // outer loop section
  while (true) {
    if (firstNumberIndex > arrayLength) {
      for (int i = 0; i < arrayLength; i++) {
        cout << *(numberArray + i) << " ";
      }
      cout << endl;
      break;
    } else {
      // inner loop section
      while (true) {
        if (secondNumberIndex >= arrayLength) {
          firstNumberIndex++;
          secondNumberIndex = firstNumberIndex + 1;
          break;
        } else if (*(numberArray + firstNumberIndex) >
                   *(numberArray + secondNumberIndex)) {
          valueSwap((numberArray + firstNumberIndex),
                    (numberArray + secondNumberIndex));

          firstNumberIndex = 0;
          secondNumberIndex = 1;

        } else {
          secondNumberIndex++;
        }
      }
      // end of inner loop section
    }
  }
  // end of outer loop section
}

void valueSwap(int* firstNumberPtr, int* secondNumberPtr) {
  int temValue1 = *(firstNumberPtr);
  int temValue2 = *(secondNumberPtr);
  *(firstNumberPtr) = temValue2;
  *(secondNumberPtr) = temValue1;
}