#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/*     IM/2019/020
        ishan ravindu
        https://github.com/ishan27596/INTE-11223-Programming-Concepts.git
*/

#define ADMINPASSWORD 123;

int selectAdminOrCustomer(void); //if user customer return 0 , if user admin return 1
int getCoinInputAndCalculateTotal(void);
int calculateBalance(int, int coinBucketCount[4]); //from assignment 1

int main()
{
    int numberOfItems = 5;
    int itemArray[numberOfItems] = {1, 2, 3, 4, 5};
    int priceArray[numberOfItems] = {12, 15, 25, 35, 16};
    int coinBucketCount[4] = {100, 100, 100, 100};
    int customerChoice;
    int adminChoice;
    int customerSelectedItemPrice;
    int customerInputCoinTotal;
    int balance;
    while (true)
    {
        int selectedOption = selectAdminOrCustomer(); //select customer or admin

        // ----------------------------------------------------------cutomer section---------------------------------------------------
        if (selectedOption == 0)
        {
            cout << "\n Welcome Custermer \n"
                 << endl;
            cout << "-------select your Item-------" << endl;
            for (int i = 1; i <= numberOfItems; i++)
            {
                cout << "for item " << i << " (price Rs:" << priceArray[i - 1] << ")"
                     << " Enter number " << i << endl;
            }
            // #####################validate customer choice###################
            while (true)
            {
                cout << "\n Now Enter your choice =: ";
                cin >> customerChoice;
                if (customerChoice > 0 && customerChoice <= numberOfItems)
                {
                    customerSelectedItemPrice = priceArray[customerChoice - 1];
                    break;
                }
                cout << "\n --Enter Valid Number--" << endl;
            }
            // #####################end of validate customer choice###################

            cout << "\n --Now Input Your Coin-- \n"
                 << endl;
            customerInputCoinTotal = getCoinInputAndCalculateTotal();
            if (customerInputCoinTotal < customerSelectedItemPrice)
            {
                cout << "\n need more RS: " << customerSelectedItemPrice - customerInputCoinTotal << endl;
                customerInputCoinTotal += getCoinInputAndCalculateTotal();
            }
            balance = customerInputCoinTotal - customerSelectedItemPrice;

            int transcationStatus = calculateBalance(balance, coinBucketCount);
            if (transcationStatus == 0)
            {
                cout << "if your admin please refill coin bucket" << endl;
                break;
            }
        }
        // --------------------------------------------------------end of cutomer section---------------------------------------------------

        // --------------------------------------------------------admin section--------------------------------------------------------
        else if (selectedOption == 1)
        {
            // ####################validate admin choice#####################
            while (true)
            {
                cout << "\n Welcome Admin \n"
                     << endl;
                cout << "Press 1 for bucket balance" << endl;
                cout << "Press 2 for refill bucket" << endl;
                cout << "press 3 for terminate programme" << endl;
                cout << "\n Now Enter Your Choice =: ";
                cin >> adminChoice;
                if (adminChoice == 1 || adminChoice == 2 || adminChoice == 3)
                    break;
                cout << "\n --Enter Valid input--" << endl;
            }
            // ###################end of validate admin choice###################
            if (adminChoice == 1)
            {
                cout << "\n--------------Bucket Balance------------------------\n"
                     << endl;
                cout << "Rs 1 coin " << coinBucketCount[0] << endl;
                cout << "Rs 2 coin " << coinBucketCount[1] << endl;
                cout << "Rs 5 coin " << coinBucketCount[2] << endl;
                cout << "Rs 10 coin " << coinBucketCount[3] << endl;
                cout << "\n-----------------------------------------------------\n"
                     << endl;
            }
            else if (adminChoice == 2)
            {
                coinBucketCount[0] = 100;
                coinBucketCount[2] = 100;
                coinBucketCount[3] = 100;
                coinBucketCount[4] = 100;
                cout << "\n ------bucked filled------ \n"
                     << endl;
            }
            else if (adminChoice == 3)
            {
                break;
            }
        }

        // ----------------------------------------------------- end of admin section--------------------------------------------------------
    }
}

int selectAdminOrCustomer(void)
{
    int selectedOption;
    int adminPassword = ADMINPASSWORD;
    while (true)
    {
        cout << "If Your Are Custermer press 0 (Admin Enter Password) =: ";
        cin >> selectedOption;
        if (selectedOption == adminPassword)
            return 1;
        else if (selectedOption == 0)
            return 0;

        cout << "Enter Valid Input" << endl;
    }
}

int getCoinInputAndCalculateTotal()
{
    const int allAvailableCoin[4] = {1, 2, 5, 10};
    const int maxIndexOfCoinArray = sizeof(allAvailableCoin) / sizeof(allAvailableCoin[0]) - 1;
    int total = 0;

    for (int i = 0; i <= maxIndexOfCoinArray; i++)
    {
        int coinCount = 0;
        cout << "input how many " << allAvailableCoin[i] << " coins := ";
        while (true)
        {
            cin >> coinCount;
            if (coinCount >= 0)
                break;
            cout << "(wrong input) input againg how many " << allAvailableCoin[i] << " coins := ";
        }
        total = total + allAvailableCoin[i] * coinCount;
    }
    return total;
}

int calculateBalance(int balance, int coinBucketCount[4])
{
    const int allAvailbaleCoinAndNote[4] = {1, 2, 5, 10};
    int coinAndNoteCount[4] = {0, 0, 0, 0};
    const int maxIndexOfCoinAndNoteArray = sizeof(allAvailbaleCoinAndNote) / sizeof(allAvailbaleCoinAndNote[0]) - 1;

    int count = maxIndexOfCoinAndNoteArray;
    if (balance != 0)
    {
        while (true)
        {
            if (balance == 0)
            {
                for (int i = 0; i < 4; i++)
                {
                    if (coinBucketCount[i] <= 0)
                    {

                        cout << "\n transcation faild take your coin back \n"
                             << endl;
                        return 0;
                    }
                }

                cout << "--------get your balance Coin --------" << endl;
                cout << endl;
                for (int i = 0; i <= maxIndexOfCoinAndNoteArray; i++)
                {
                    if (coinAndNoteCount[i] == 0)
                    {
                        continue;
                    }
                    cout << "Rs:" << allAvailbaleCoinAndNote[i] << "*";
                    cout << coinAndNoteCount[i] << endl;
                }
                cout << endl;
                cout << "----------------------------------------" << endl;

                break;
            }
            else
            {
                if (balance < allAvailbaleCoinAndNote[count])
                {
                    count--;
                    continue;
                }
                else
                {
                    coinAndNoteCount[count]++;
                    coinBucketCount[count]--;
                    balance -= allAvailbaleCoinAndNote[count];
                }
            }
        }
    }
    else
    {
        cout << "\n --All Done There Is No Balance \n--" << endl;
    }
    return 1;
}