#include <iostream>
#include "Circuit.h"

using namespace std;

int main()
{
    string userChoice;
    double userInput, output;
    Circuit myCircuit;

    cout << "Would you like to calculate amperage, resistance, or voltage?" << endl;
    cout << "Enter 1) for amperage, 2) for resistance, or 3) for voltage." << endl;

    cin >> userChoice;

    while ((userChoi ce != "1") && (userChoice != "2") && userChoice != "3"){
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
        cin >> userInput;
        myCircuit.setAmperage(userInput);
        cout << "Please enter the voltage of the circuit." << endl;
        cin >> userInput;
        myCircuit.setVoltage(userInput);
        myCircuit.calculateResistance();
        cout << "The resistance of your circuit is " << myCircuit.getResistance() << "." << endl;
    } else if (userChoice == "3"){
        cout << "Please enter the amperage of the circuit." << endl;
        cin >> userInput;
        myCircuit.setAmperage(userInput);
        cout << "Please enter the resistance of the circuit." << endl;
        cin >> userInput;
        myCircuit.setResistance(userInput);
        myCircuit.calculateVoltage();
        cout << "The voltage of your circuit is " << myCircuit.getVoltage() << "." << endl;
    }
}
