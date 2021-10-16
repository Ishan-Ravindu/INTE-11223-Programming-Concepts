#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    int size;
    int max;

    cout << "Input total number of elements(1 to 100): ";
    cin >> size;
    int* d_array = new int[size];

    for (int i = 0; i < size; i++)
    {
        int number;
        cout << "Number " << i + 1 << " : ";
        cin >> number;
        d_array[i] = number;
    }

    for (int i = 0; i < size; i++)
    {
        if (i == 0) {
            max = d_array[0];
            continue;
        }
        if (d_array[i] > max)
            max = d_array[i];
    }

    cout << "The Largest element is : " << max << endl;

    delete[] d_array;
}