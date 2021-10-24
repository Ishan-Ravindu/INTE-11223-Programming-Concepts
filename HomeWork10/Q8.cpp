#include <string.h>

#include <iostream>
using namespace std;

// A program to replace a specific line with another text in a file.

int main(void) {
  FILE *fptr1, *fptr2;
  char filename[50];
  char current, newline;
  int rep, temp = 1;

  // get user input for the file to be opened
  cout << "Input the file name to be opened: ";
  cin >> filename;

  // get user input for the line to be deleted
  cout << "Please enter the line to be replaced : ";
  cin >> rep;
  &rep;

  cout << "Input the content of the new line: ";
  cin >> newline;

  fptr1 = fopen(filename, "r");  // open file in read mode

  current = getc(fptr1);

  // print the contents of file
  while (current != EOF) {
    printf("%c", current);
    current = getc(fptr1);
  }

  // take pointer to start.
  rewind(fptr1);

  fptr2 = fopen("temp.txt", "w");  // open a temparory file in write mode

  current = getc(fptr1);

  while (current != EOF) {
    if (current == ' ') {
      temp++;
    }

    // copy and paste the text in temp file up to the line to be replaced.
    if (temp != rep) {
      putc(current, fptr2);
    } else  // line to be replaced
    {
      while ((current = getc(fptr1)) != ' ') {
      }
      // read and skip the line ask for new text
      // cout << "Input the content of the new line: ";

      // flush the input stream
      fflush(stdin);
      putc(' ', fptr2);  // space

      while ((current = getchar()) != ' ') {
        putc(current, fptr2);
        // replace
        fputs(" ", fptr2);
        temp++;
      }

      current = getc(fptr1);
    }

    // close both files
    fclose(fptr1);
    fclose(fptr2);

    return 0;
  }
}