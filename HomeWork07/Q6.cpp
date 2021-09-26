#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int getInputAndSelectCity(string *);

int main() {
  /*      kandy   colombo   Dabulla   Galle   Jaffan

kandy   |     0  | 223    |  167   |   229   |  399

Colombo |   223  |   0    |  170   |   129   |  395

Dabulla |   114  |  167   |   0    |   224   |   217

Galle   |  134   |  124   |  111   |    0    | 228

Jaffan  |  294    |  234  |  129   |    239   |    0

    */
  int cityDistanceArray[5][5] = {{0, 223, 167, 229, 399},
                                 {223, 0, 170, 129, 395},
                                 {114, 167, 0, 224, 217},
                                 {134, 124, 111, 0, 228},
                                 {294, 234, 129, 239, 0}};
  string cityNameArray[5] = {"Kandy", "Colombo", "Dabulla", "Galle", "Jaffna"};
  int previosCityIndexNumber;
  int currentCityIndexNumber;
  int totalDistance = 0;

  // ask for start city
  cout << "First select your 'start city'\n" << endl;
  previosCityIndexNumber = getInputAndSelectCity(cityNameArray);

  while (true) {
    int terminateKeyInput;  // for end program

    currentCityIndexNumber = previosCityIndexNumber;
    cout << "\nselect your next city\n" << endl;
    currentCityIndexNumber = getInputAndSelectCity(cityNameArray);
    totalDistance =
        totalDistance +
        cityDistanceArray[previosCityIndexNumber][currentCityIndexNumber];
    cout << "\n(Enter '0' for end trip )or (enter any number to continue)=: ";

    cin >> terminateKeyInput;
    if (terminateKeyInput == 0) break;
  }
  cout << "Total distance is " << totalDistance << endl;
}

int getInputAndSelectCity(string *cityNameArray) {
  int cityNameArrayLength = cityNameArray->length();
  int userSelectionIndex;
  cout << "Select Your City using correct numbers \n" << endl;
  for (int i = 0; i < cityNameArrayLength; i++) {
    cout << "Enter " << i + 1 << " For => " << cityNameArray[i] << endl;
  }
  while (true) {
    cout << "\nEnter your choice now =: ";
    cin >> userSelectionIndex;
    if (userSelectionIndex > 0 && userSelectionIndex <= cityNameArrayLength)
      break;
    cout << "\n(Enter valid input) \n" << endl;
  }

  return userSelectionIndex - 1;
}
