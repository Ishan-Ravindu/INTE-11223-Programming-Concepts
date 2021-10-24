#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  // create text.txt file with more than one line in root before run the progame
  fstream myFile;
  string line;
  string lines[100];
  int count = 0;

  myFile.open("test.txt", ios::in);
  if (myFile.is_open()) {
    while (getline(myFile, line)) {
      // store value in array
      lines[count] = line;
      count++;
    }
    myFile.close();
  }
  // print lines in array
  for (int i = 0; i < count; i++) {
    cout << lines[i] << endl;
  }
}