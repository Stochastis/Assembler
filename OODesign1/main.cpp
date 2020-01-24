#include <iostream>
#include "Circuit.h"
#include "Circuit.h"

using namespace std;

int main()
{
    Circuit myCircuit;
    double userInput;

    cout << "Please enter voltage" << endl;
    cin >> userInput;
    myCircuit.Setvoltage(userInput);

    cout << myCircuit.Getvoltage() << endl;
}
