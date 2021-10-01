#include <iostream>

using namespace std;

int main() {
  int arrayLength = 10;
  int numberArray[arrayLength] = {5, 2, 7, 9, 1, 0, 9, 8, 5, 0};
  int firstNumberIndex = 0;
  int secondNumberIndex = 1;
  while (true) {
    if (firstNumberIndex > arrayLength) {
      for (int i = 0; i < arrayLength; i++) {
        cout << numberArray[i];
      }
      cout << endl;
      break;
    } else {
      while (true) {
        if (secondNumberIndex >= arrayLength) {
          firstNumberIndex++;
          secondNumberIndex = firstNumberIndex + 1;
          break;
        } else if (numberArray[firstNumberIndex] >
                   numberArray[secondNumberIndex]) {
          int temNumber1 = numberArray[firstNumberIndex];
          int tempNumber2 = numberArray[secondNumberIndex];
          numberArray[firstNumberIndex] = tempNumber2;
          numberArray[secondNumberIndex] = temNumber1;
          firstNumberIndex = 0;
          secondNumberIndex = 1;

        } else {
          secondNumberIndex++;
        }
      }
    }
  }
}