#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int count = 0;
    int total = 0;
    int size;
    int inputNumber;
    double average;

    std::cout << "enter max input size" << endl;
    cin >> size;

    while (true)
    {
        if (count >= size)
            break;
        cout << "Enter Number " << count + 1 << endl;
        cin >> inputNumber;
        total += inputNumber;
        count++;
    }
    average = (double)total / (double)size;
    cout << "average : " << average << endl;

    return 0;
}
