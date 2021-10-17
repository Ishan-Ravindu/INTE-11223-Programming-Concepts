#include<iostream>
#include<cstring>
using namespace std;

int* count;

void letterFrequency(string str)
{
    count = new int[26]{ 0 };
    int x;
    for (int i = 0; i < str.length(); i++)
    {
        x = toupper(str[i]) - 65;
        *(count + x) = *(count + x) + 1;
    }
}

int main()
{
    string str;
    cout << "Enter String: ";
    getline(cin, str);
    letterFrequency(str);
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            cout << char(i + 65) << ": " << count[i] << endl;
        }
    }
    delete[]count;
}