#include <iostream>

using std::cout;
using std::endl;

int main() {
    double* d_var;
    double* d_array;

    d_var = new double(10.58);
    d_array = new double[10];

    cout << d_var << endl;
    cout << d_array << endl;

    delete d_var;
    delete[] d_array;

}