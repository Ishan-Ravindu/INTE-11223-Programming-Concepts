#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#define ADMINPASSWORD 123;

int selectAdminOrCustomer(void); //if user customer return 0 , if user admin return 1
int getCoinInputAndCalculateTotal(void);
void calculateBalance(int, int coinBucketCount[4]); //from assignment 1

int main()
{
    int numberOfItems = 5;
    int itemArray[numberOfItems] = {1, 2, 3, 4, 5};
    int priceArray[numberOfItems] = {12, 15, 25, 35, 16};
    // const int allSuportedCoin[4] = {1, 2, 5, 10};
    int coinBucketCount[4] = {100, 100, 100, 100};
    int customerChoice;
    int customerSelectedItemPrice;
    int customerInputCoinTotal;
    int balance;
    while (true)
    {
        int selectedOption = selectAdminOrCustomer();
        if (selectedOption == 0)
        {
            cout << "Welcome Custermer" << endl;
            cout << "-------select your Item-------" << endl;
            for (int i = 1; i <= numberOfItems; i++)
            {
                cout << "for item " << i << " (price Rs:" << priceArray[i - 1] << ")"
                     << " Enter number " << i << endl;
            }
            while (true)
            {
                cout << "Now Enter your choice =: ";
                cin >> customerChoice;
                if (customerChoice > 0 && customerChoice <= numberOfItems)
                    customerSelectedItemPrice = priceArray[customerChoice - 1];
                break;
                cout << "Enter Valid Number" << endl;
            }
            cout << "Now Input Your Coin " << endl;

            customerInputCoinTotal = getCoinInputAndCalculateTotal();
            balance = customerInputCoinTotal - customerSelectedItemPrice;

            calculateBalance(balance, coinBucketCount);
            cout << coinBucketCount[0] << endl;
            cout << coinBucketCount[1] << endl;
            cout << coinBucketCount[2] << endl;
            cout << coinBucketCount[3] << endl;
        }
        else if (selectedOption == 1)
        {
            cout << "Welcome Admin" << endl;
        }

        break;
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

void calculateBalance(int balance, int coinBucketCount[4])
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
                cout << "--------Number Of Coin --------" << endl;
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
        cout << "All Done There Is No Balance" << endl;
    }
}