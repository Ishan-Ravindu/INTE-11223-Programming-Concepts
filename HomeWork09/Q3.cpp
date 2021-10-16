#include <iostream>

using std::cout;
using std::endl;

int main() {
    int arraySize = 10;
    double* d_array = new double[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        d_array[i] = 1.0;
    }
    delete[] d_array;
}