#include <iostream>

using namespace std;

int main() {
  char text[100] = "sample text";  // only letters
  char* textPtr = &text[0];
  int vowelsCount = 0;
  int consonantsCount = 0;

  while (true) {
    if (*textPtr == 0) {
      cout << *textPtr << endl;
      break;
    } else if (*textPtr == 'a' || *textPtr == 'e' || *textPtr == 'i' ||
               *textPtr == 'o' || *textPtr == 'u') {
      vowelsCount++;

    } else if (*textPtr == ' ') {
      textPtr++;
      continue;
    } else {
      consonantsCount++;
    }
    textPtr++;
  }
  cout << "vowels Count = " << vowelsCount << endl;
  cout << "consonants Count = " << consonantsCount << endl;
}
