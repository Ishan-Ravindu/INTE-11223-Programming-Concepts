#include <iostream>
#include <math.h> //only in Question 3
using std::cout;
using std::endl;
using std::pow;  //only in Question 3
using std::sqrt; //only in Question 3

// IM/2019/020
// ishan ravindu
// Home Work o5

int integerPower(int base, int exponent);                                      //Question 1
int timeConvertToSeconds(int hours, int minutes, int second);                  //Question 2
double getDistanceBetweenTwoPoint(double x1, double y1, double x2, double y2); //Question 3
int getFibonacciSequence(int endNumber);                                       //Question 4
int printFibonacciSequence(int endNumber);                                     //Question 4

int main()
{
    cout << "Question 1" << endl;
    int answer1 = integerPower(2, 5);
    cout << answer1 << "\n"
         << endl;

    cout << "Question 2" << endl;
    int answer2 = timeConvertToSeconds(1, 1, 1);
    cout << answer2 << "\n"
         << endl;

    cout << "Question 3" << endl;
    double answer3 = getDistanceBetweenTwoPoint(-2, -2, -4, -4);
    cout << answer3 << "\n"
         << endl;

    cout << "Question 4" << endl;
    printFibonacciSequence(20);
}

/* 1. Write a function integerPower( base, exponent ) that returns the value of baseexponent
         For example, integerPower( 3, 4 ) = 3 * 3 * 3 * 3. Assume that exponent is a
        positive, nonzero integer, and base is an integer. Function integerPower should use
        for to control the calculation. Do not use any math library functions.*/

int integerPower(int base, int exponent)
{
    int answer = base;
    for (int i = 1; i < exponent; i++)
    {
        answer *= base;
    }
    return answer;
}

// int integerPower(int base, int exponent)
// {
//     if (exponent == 1)
//         return base;
//     return base * integerPower(base, exponent - 1);
// }

/* 2. Write a function that takes the time as three integer arguments (for hours, minutes,
         and seconds), and returns the number of seconds since the last time the clock “struck
        12.” Use this function to calculate the amount of time in seconds between two times,
        both of which are within one 12-hour cycle of the clock.*/

int timeConvertToSeconds(int hours, int minutes, int second)
{
    return hours * 60 * 60 + minutes * 60 + second;
}

/* 3. Write function distance that calculates the distance between two points(x1, y1) and
         (x2, y2).All numbers and return values should be of type double.*/

double getDistanceBetweenTwoPoint(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

/* 4. The Fibonacci sequence is a sequence of numbers such that the first and second
         numbers are 0 and 1 respectively, and each number after the second is the sum of its
         two predecessors. Design a recursive function that take a positive value of N as
         input, and outputs the first N elements of the Fibonacci series. */

int getFibonacciSequence(int endNumber)
{
    if (endNumber == 0 || endNumber == 1)
        return endNumber;
    return (getFibonacciSequence(endNumber - 1) + getFibonacciSequence(endNumber - 2));
}

int printFibonacciSequence(int endNumber)
{

    int i = 0;
    while (i < endNumber)
    {
        if (endNumber == 0)
            break;
        cout << getFibonacciSequence(i) << endl;
        ;
        i++;
    }
    return 0;
}