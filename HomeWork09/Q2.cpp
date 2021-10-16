#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
    double value;
    cout << "Enter Value=: ";
    cin >> value;

    double* d_var = new double(value);

    cout << *(d_var) << endl;

    delete d_var;

}