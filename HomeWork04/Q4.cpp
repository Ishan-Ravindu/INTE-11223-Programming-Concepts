#include <iostream>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::sort;

int main()
{

    int size;
    int count = 0;
    int inputNumber;

    while (true)
    {
        std::cout << "enter max input size ,must be bigger than 3" << endl;
        cin >> size;

        if (size > 3)
        {
            break;
        }
        else
        {
            cout << "Enter Number Bigger Than 3" << endl;
        }
    }

    int numberList[size];

    while (true)
    {
        if (count >= size)
            break;

        cout << "Enter Number " << count + 1 << endl;
        cin >> inputNumber;
        numberList[count] = inputNumber;
        count++;
    }
    sort(numberList, numberList + size);

    cout << "third smallest number  is : " << numberList[2] << endl;

    return 0;
}
