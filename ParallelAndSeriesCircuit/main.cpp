#include <iostream>
#include "Circuit.h"

using namespace std;

int main()
{
    int userInput = 0;

    cout << "Please enter the number of resistors in your circuit." << endl;
    cin >> userInput;
    Circuit myCircuit(userInput);

    cout << "What kind of circuit is this?" << endl;
    cout << "Please press 1) for Parallel or 2) for Series." << endl;
    cin >> userInput;
    while ((userInput != 1) && (userInput != 2)){
        cout << "Please enter 1) or 2)." << endl;
        cin >> userInput;
    }
    myCircuit.CircuitType = userInput;

    for (int i = 0; i < myCircuit.NumberOfResistors; i++){
        cout << "Please enter the resistance for resistor " << i+1 << endl;
        cin >> userInput;
        myCircuit.Resistances[i] = userInput;
    }

    cout << "Your circuit has a resistance of " << myCircuit.TotalResistance() << " ohms." << endl;
}
