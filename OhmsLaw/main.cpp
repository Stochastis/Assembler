#include <iostream>

using namespace std;

int main()
{
    string userInput;
    int amperage, resistance, voltage;

    cout << "Would you like to calculate amperage, resistance, or voltage?" << endl;
    cout << "Enter 1) for amperage, 2) for resistance, or 3) for voltage." << endl;

    cin >> userInput;

    while ((userInput != "1") && (userInput != "2") && userInput != "3"){
        cout << "Please enter 1), 2), or 3)." << endl;
        cin >> userInput;
    }

    if (userInput == "1") {
        cout << "Please enter the resistance of the circuit." << endl;
        cin >> resistance;
        cout << "Please enter the voltage of the circuit." << endl;
        cin >> voltage;
        amperage = voltage / resistance;
        cout << "The amperage of your circuit is " << amperage << "." << endl;
    } else if (userInput == "2") {
        cout << "Please enter the amperage of the circuit." << endl;
        cin >> amperage;
        cout << "Please enter the voltage of the circuit." << endl;
        cin >> voltage;
        resistance = voltage / amperage;
        cout << "The resistance of your circuit is " << resistance << "." << endl;
    } else if (userInput == "3"){
        cout << "Please enter the amperage of the circuit." << endl;
        cin >> amperage;
        cout << "Please enter the resistance of the circuit." << endl;
        cin >> resistance;
        voltage = amperage * resistance;
        cout << "The voltage of your circuit is " << voltage << "." << endl;
    }

}
