#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  // create text.txt file in root before run the progame
  fstream myFile;
  string line;
  myFile.open("test.txt", ios::in);
  if (myFile.is_open()) {
    getline(myFile, line);
    myFile.close();
  }
  cout << line << endl;
}