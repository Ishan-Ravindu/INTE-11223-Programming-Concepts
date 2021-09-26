#include <cstring>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::strcmp;
using std::string;

int main() {
  string userinputOne;
  string userinputTwo;

  cout << "Enter Your First Word =: ";
  cin >> userinputOne;
  cout << "EnterYour Second Word =: ";
  cin >> userinputTwo;

  const char* str_inp1 = userinputOne.c_str();
  const char* str_inp2 = userinputTwo.c_str();

  if (strcmp(str_inp1, str_inp2) == 0)
    cout << "\nBoth the input strings are equal." << endl;
  else if (userinputOne.length() < userinputTwo.length())
    cout << "\nword two is bigger" << endl;
  else
    cout << "\nWord One is bigger" << endl;
}