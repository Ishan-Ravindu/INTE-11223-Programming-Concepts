#include <string.h>

#include <iostream>
using namespace std;

int main() {
  FILE *fptr;
  char text[100], filename[100];
  int c, count = 0, chars, tot = 0;

  cout << "Input the file name to be opened: ";
  cin >> filename;

  fptr = fopen(filename, "r");

  fscanf(fptr, "%s %d", text, &c);

  while (!feof(fptr)) {
    count++;
    for (int i = 0; text[i] != '\0'; i++) {
      chars++;
    }

    while (c / 10 != 0) {
      tot++;
    }

    fscanf(fptr, "%s %d", text, &c);
  }

  fclose(fptr);
  cout << "The number of words in the file is : " << count << endl;
  cout << "The number of characters in the file is : " << chars + tot << endl;
}