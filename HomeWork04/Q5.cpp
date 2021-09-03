#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int greatestCommonDivisor(int numberOne, int NumberTwo);

int main()
{
    int numberOne;
    int numberTwo;
    cout << "Enter Number One" << endl;
    cin >> numberOne;
    cout << "Enter Number Two" << endl;
    cin >> numberTwo;
    cout << "GCD of " << numberOne << " and " << numberTwo << " is " << greatestCommonDivisor(numberOne, numberTwo) << endl;
    return 0;
}

int greatestCommonDivisor(int numberOne, int numberTwo)
{
    if (numberOne == 0)
        return 0;

    if (numberTwo == 0)
        return 0;

    if (numberOne == numberTwo)
        return numberOne;

    if (numberOne > numberTwo)
        return greatestCommonDivisor(numberOne - numberTwo, numberTwo);
    return greatestCommonDivisor(numberOne, numberTwo - numberOne);
}