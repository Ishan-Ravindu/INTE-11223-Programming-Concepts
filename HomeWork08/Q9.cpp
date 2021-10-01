#include <iostream>

using namespace std;

int main() {
  int numberArraySize;
  cout << "Enter Your number Array Size =:  ";
  cin >> numberArraySize;

  int numberArray[numberArraySize];

  // add array element using pointers
  for (int i = 0; i < numberArraySize; i++) {
    cout << "Enter number " << i + 1 << "=: ";
    cin >> *(numberArray + i);
  }

  // print array element using pointers

  for (int i = 0; i < numberArraySize; i++) {
    cout << *(numberArray + i) << endl;
  }
}