#include <iostream>

using namespace std;

int main() {
  char text[100] = "sample text";
  char* textPtr = &text[0];
  int count = 0;

  while (true) {
    if (*textPtr == 0) {
      cout << *textPtr << endl;
      break;
    }
    textPtr++;
    count++;
  }

  cout << "Text size := " << count << endl;
}