#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int planeSeatArray[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int bookedSeatCount = 0; //to track booked seat , if bookedSeatCount ==10 program terminates
    int cutomerChoice;       //to track ,is choice first class or economy class
    while (true)
    {
        cout << "\n ####Welcome to AirLine####\n " << endl;
        cout << "Please type 1 for  'first class' " << endl;
        cout << "Please type 2 for  'economy class' " << endl;
        cout << "now enter your choice := ";
        cin >> cutomerChoice;

        // customer choice validate part
        if (!(cutomerChoice == 1 || cutomerChoice == 2))
        {
            cout << "\n (Enter Valid Input) " << endl;
            continue;
        }
        //end of customer choice validate part
        // -------------------------------------------------------------------------------------------------------------------------------------
        if (cutomerChoice == 1) // cutomerChoice== first class
        {
            for (int i = 0; i < 5; i++)
            {
                if (planeSeatArray[i] == 0)
                {
                    planeSeatArray[i] = 1;
                    bookedSeatCount++;
                    cout << "\n --Thanks For Booking First Class Seat number " << i + 1 << "--\n"
                         << endl;
                    break; //to take new customer
                }
                else
                {
                    if (i == 4) // if not availabe first class seats
                    {
                        int optinalChoice;
                        cout << "\n --There no seat in first class--\n"
                             << endl;
                        cout << "would you like to book  economy class seat then press 1" << endl;
                        cin >> optinalChoice;
                        if (optinalChoice == 1)
                        {
                            cout << "\n ###############" << endl
                                 << "Your proccess reseting..." << endl
                                 << "please input 2 for economy class next time" << endl
                                 << "##############" << endl;
                            break;
                        }
                        else
                        {
                            cout << "--Next flight leaves in 3 hours.--" << endl;
                            break;
                        }
                    }
                }
            }
        }
        // -------------------------------------------------------------------------------------------------------------------------------------
        else if (cutomerChoice == 2) // cutomerChoice== economy class
        {
            for (int i = 5; i < 10; i++)
            {
                if (planeSeatArray[i] == 0)
                {
                    planeSeatArray[i] = 1;
                    bookedSeatCount++;
                    cout << "--Thanks For Booking economy Class Seat number " << i - 4 << "--\n"
                         << endl;
                    break; //to take new customer
                }
                else
                {

                    if (i == 9) // if not availabe economy class seats
                    {
                        int optinalChoice;
                        cout << "--There no seat in first class--\n"
                             << endl;
                        cout << "would you like to book book first class seat then press 1" << endl;
                        cin >> optinalChoice;
                        if (optinalChoice == 1)
                        {
                            cout << "\n ###############" << endl
                                 << "Your proccess reseting..." << endl
                                 << "please input 2 for economy class next time" << endl
                                 << "##############" << endl;
                            break;
                        }
                        else
                        {
                            cout << "Next flight leaves in 3 hours." << endl;
                            break;
                        }
                    }
                }
            }
        }
        // -------------------------------------------------------------------------------------------------------------------------------------

        //  to terminate programme
        if (bookedSeatCount == 10)
        {
            cout << endl
                 << "######" << endl
                 << "All Seat Booked Program terminates" << endl
                 << "######" << endl;
            break;
        }
    }
}