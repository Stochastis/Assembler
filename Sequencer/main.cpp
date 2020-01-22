#include <iostream>

using namespace std;

int main()
{
    int userInputLow;
    int userInputHigh;
    int runningTotal = 0;

//   do {
//			cout << "What number would you like the low number to be?" << endl;
//			cin >> userInputLow;
//		} while (!(typeid(userInputLow).name() == "int"));


    cout << "What number would you like the low number to be?" << endl;
    cin >> userInputLow;

    cout << "What number would you like the high number to be?" << endl;
    cin >> userInputHigh;
    while (!(userInputHigh > userInputLow)) {
        cout << "Please enter a number that is higher than the first one you entered." << endl;
        cin >> userInputHigh;
    }

    for (int i = userInputLow; i <= userInputHigh; i++){
        runningTotal += i;
    }

    cout << "Your numbers, " << userInputLow << " and " << userInputHigh << " , sequenced, equals " << runningTotal << endl;
}
