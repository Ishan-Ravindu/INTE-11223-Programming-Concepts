# include <iostream>

using namespace std;

struct Timer {
    int hours;
    int minutes;
};

int main() {
    Timer* ptrTime = new Timer();
    (*ptrTime).hours = 10;
    (*ptrTime).minutes = 20;
    cout << "hours " << (*ptrTime).hours << endl;
    cout << "minutes " << (*ptrTime).minutes << endl;
    delete ptrTime;

}