#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int getLCF(int number1, int number2);

int main()
{
    int number1, number2;
    cout << "Enter Number 1" << endl;
    cin >> number1;
    cout << "Enter Number 2" << endl;
    cin >> number2;

    cout << "LCF of " << number1 << " and " << number2 << " is " << getLCF(number1, number2) << endl;

    return 0;
}

int getLCF(int number1, int number2)
{
    int max;

    if (number1 > number2)
        max = number1;
    else
        max = number2;

    while (true)
    {
        if (max % number1 == 0 && max % number2 == 0)
        {

            return max;
        }
        max++;
    }
}