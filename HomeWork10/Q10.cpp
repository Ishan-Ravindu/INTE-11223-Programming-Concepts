#include <stdio.h>

#include <fstream>
#include <iostream>
using namespace std;
int main() {
  char fileOne[30], fileTwo[30], fileTarget[30], ch;
  fstream fpsOne, fpsTwo, fpTarget;
  cout << "Enter the Name of First Source File: ";
  gets(fileOne);
  cout << "Enter the Name of Second Source File: ";
  gets(fileTwo);
  fpsOne.open(fileOne, fstream::in);
  fpsTwo.open(fileTwo, fstream::in);
  if ((!fpsOne) || (!fpsTwo)) {
    cout << "\nError Occurred (First Source File)!";
    return 0;
  } else {
    cout << "\nEnter the Name of Target File: ";
    gets(fileTarget);
    fpTarget.open(fileTarget, fstream::out);
    if (!fpTarget)
      cout << "\nError Occurred (Target File)!";
    else {
      while (fpsOne >> noskipws >> ch) fpTarget << ch;
      fpTarget << "\n";
      while (fpsTwo >> noskipws >> ch) fpTarget << ch;
      cout << "\nContent of Two File Merged Successfully into Third!";
    }
  }
  fpsOne.close();
  fpsTwo.close();
  fpTarget.close();
  cout << endl;
  return 0;
}