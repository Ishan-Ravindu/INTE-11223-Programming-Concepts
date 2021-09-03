#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int count = 0;
    int size;
    int inputNumber;
    int smallNumber;
    int largeNumber;

    std::cout << "enter max input size" << endl;
    cin >> size;

    while (true)
    {
        if (count >= size)
            break;

        cout << "Enter Number " << count + 1 << endl;
        cin >> inputNumber;

        if (count == 0)
        {
            smallNumber = inputNumber;
            largeNumber = inputNumber;
            count++;
            continue;
        }

        if (inputNumber < smallNumber)
            smallNumber = inputNumber;

        if (inputNumber > largeNumber)
            largeNumber = inputNumber;

        count++;
    }

    cout << "small number : " << smallNumber << endl;
    cout << "Large number : " << largeNumber << endl;

    return 0;
}
