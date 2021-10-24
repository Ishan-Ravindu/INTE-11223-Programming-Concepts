#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
  // create text.txt file with more than one line in root before run the progame
  fstream myFile;
  string line;
  int count = 0;

  myFile.open("test.txt", ios::in);
  if (myFile.is_open()) {
    while (getline(myFile, line)) {
      count++;
    }
    myFile.close();
  }
  cout << "number of lines in the file " << count << endl;
}