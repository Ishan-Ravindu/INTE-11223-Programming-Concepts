#include <fstream>
#include <iostream>

using namespace std;

int main() {
  fstream myFile;
  string text;
  myFile.open("test.txt", ios::out);
  if (myFile.is_open()) {
    cout << "Input a sentence for the file :";
    cin >> text;
    myFile << text;
    myFile.close();
  }
}