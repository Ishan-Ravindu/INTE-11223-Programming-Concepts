#include <fstream>
#include <iostream>

using namespace std;

int main() {
  fstream myFile;
  string text;
  int lineSize;
  int count = 1;

  cout << "enter line size: ";
  cin >> lineSize;

  myFile.open("test.txt", ios::out);
  if (myFile.is_open()) {
    while (count <= lineSize) {
      cout << "Input a sentence " << count << ": ";
      cin >> text;
      myFile << text << "\n";
      count++;
    }
    myFile.close();
  }
}