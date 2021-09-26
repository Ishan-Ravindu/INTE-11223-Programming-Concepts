#include <cstring>
#include <iostream>
using namespace std;

int main(void) {
  string name = "";
  char input[100];
  int count = 0;

  cout << "type text here :";

  getline(cin, name, '\n');

  for (int i = 0; i < name.length(); i++) {
    input[i] = name[i];
  }

  char *token = strtok(input, " ");
  while (token != NULL) {
    count++;
    token = strtok(NULL, " ");
  }
  cout << "number of word:= " << count << endl;
}