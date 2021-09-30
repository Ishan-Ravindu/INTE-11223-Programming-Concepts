#include <iostream>

using namespace std;

void findMinAndMax(int* max, int* min, int numberArray[], int arrayLength);
int main() {
  int numberArray[3] = {10, -17, 27};
  int max;
  int min;
  findMinAndMax(&max, &min, numberArray, 3);
  cout << "Max : " << max << endl;
  cout << "Min " << min << endl;
}

void findMinAndMax(int* max, int* min, int numberArray[], int arrayLength) {
  *max = numberArray[0];
  *min = numberArray[0];
  for (int i = 0; i < arrayLength; i++) {
    numberArray[i] > * max ? * max = numberArray[i] : * max = *max;
    numberArray[i] < * min ? * min = numberArray[i] : * min = *min;
  }
}