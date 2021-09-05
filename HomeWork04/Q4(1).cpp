#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    int lowestNumber;
    int secondLowestNumber;
    int thirdLowerstNumber;
    int noOfElements;
    int userInputNumber;

    cout << "Input No of Element" << endl;
    cin >> noOfElements;

    cout << "EnterNumber" << endl;
    cin >> userInputNumber;
    lowestNumber = userInputNumber;
    secondLowestNumber = userInputNumber;
    thirdLowerstNumber = userInputNumber;
    count++;

    while (count < noOfElements)
    {

        cout << "Enter Number" << endl;
        cin >> userInputNumber;

        if (userInputNumber < lowestNumber)
        {
            thirdLowerstNumber = secondLowestNumber;
            secondLowestNumber = lowestNumber;
            lowestNumber = userInputNumber;
        }

        else if (userInputNumber < secondLowestNumber && userInputNumber > lowestNumber || count == 1)
        {
            thirdLowerstNumber = secondLowestNumber;
            secondLowestNumber = userInputNumber;
        }
        else if (userInputNumber < thirdLowerstNumber && userInputNumber > secondLowestNumber || count == 2)
        {
            thirdLowerstNumber = userInputNumber;
        }
        count++;
    }

    cout << "Third Lowest Number " << thirdLowerstNumber << endl;
}
