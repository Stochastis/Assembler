#include <iostream>
#include "Circuit.h"

using namespace std;

int main()
{
    string userChoice;
    double userInput;
    double output;
    Circuit myCircuit = new Circuit();

    cout << "Would you like to calculate amperage, resistance, or voltage?" << endl;
    cout << "Enter 1) for amperage, 2) for resistance, or 3) for voltage." << endl;

    cin >> userChoice;

    while ((userChoice != "1") && (userChoice != "2") && userChoice != "3"){
        cout << "Please enter 1), 2), or 3)." << endl;
        cin >> userChoice;
    }

    if (userChoice == "1") {
        cout << "Please enter the resistance of the circuit." << endl;
        cin >> userInput;
        myCircuit.setResistance(userInput);
        cout << "Please enter the voltage of the circuit." << endl;
        cin >> userInput;
        myCircuit.setVoltage(userInput);
        myCircuit.calculateAmperage();
        cout << "The amperage of your circuit is " << myCircuit.getAmperage() << "." << endl;
    } else if (userChoice == "2") {
        cout << "Please enter the amperage of the circuit." << endl;
        cin >> amperage;
        cout << "Please enter the voltage of the circuit." << endl;
        cin >> voltage;
        resistance = voltage / amperage;
        cout << "The resistance of your circuit is " << resistance << "." << endl;
    } else if (userChoice == "3"){
        cout << "Please enter the amperage of the circuit." << endl;
        cin >> amperage;
        cout << "Please enter the resistance of the circuit." << endl;
        cin >> resistance;
        voltage = amperage * resistance;
        cout << "The voltage of your circuit is " << voltage << "." << endl;
    }
}
