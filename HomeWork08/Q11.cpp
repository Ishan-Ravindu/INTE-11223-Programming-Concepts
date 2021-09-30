#include <iostream>

using namespace std;

int main() {
  char text[100] = "sample text";
  char* textPtr = &text[0];

  while (true) {
    if (*textPtr == 0) {
      cout << *textPtr << endl;
      break;
    } else if (*textPtr == ('a' || 'e' || 'i' || 'o' || 'u')) {
      cout << *textPtr << endl;
    }
  }
}
