#include <iostream>
#include "Circuit.h"

using namespace std;

int main()
{
    int userInput;

    cout << "Please enter the number of resistors in your circuit." << endl;
    cin >> userInput;
    Circuit myCircuit(userInput);

    cout << "What kind of circuit is this?" << endl;
    cout << "Please press 1) for Parallel or 2) for Series." << endl;
    while ((userInput != 1) && (userInput != 1)){
        cout << "Please enter 1) or 2)." << endl;
        cin >> userInput;
    } myCircuit.CircuitType = userInput;
}
