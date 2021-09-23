#include <iostream>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main()
{
    string inputstring;
    char letterArray[100];
    getline(std::cin, inputstring);

    for (int i = 0; i < inputstring.length(); i++)
    {
        letterArray[i] = inputstring[i];
    }
    cout << endl;

    cout << "Upper Case => ";
    for (int i = 0; i < inputstring.length(); i++)
    {
        char ch = toupper(letterArray[i]);
        cout << ch;
    }
    cout << endl;

    cout << "Lower Case => ";
    for (int i = 0; i < inputstring.length(); i++)
    {
        char ch = tolower(letterArray[i]);
        cout << ch;
    }
    cout << endl;
}