#include <string.h>

#include <iostream>
using namespace std;

// A program to copy a file in another name.

int main() {
  FILE *fptr1, *fptr2;
  char current, fname1[20], fname2[20];

  cout << "Input the source file name: ";
  cin >> fname1;

  fptr1 = fopen(fname1, "r");

  if (fptr1 == NULL) cout << "Input the new file name: ";
  cin >> fname2;

  fptr2 = fopen(fname2, "w");
  if (fptr2 == NULL)

    while (1) {
      current = fgetc(fptr1);
      if (current == EOF) {
        break;
      } else {
        fputc(current, fptr2);  // copying to file
      }
    }
  cout << "The file " << fname1 << " copied successfully in the file " << fname2
       << endl;

  fclose(fptr1);
  fclose(fptr2);

  getchar();
}