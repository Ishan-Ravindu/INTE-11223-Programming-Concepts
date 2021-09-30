#include <iostream>

using namespace std;

void print(int *);

int main() {
  int number;
  print(&number);
}

void print(int *numberPtr) {
  cout << "Enter Number =: ";
  cin >> *numberPtr;
  cout << *numberPtr << endl;
}