#include <iostream>
#include "Circuit.h"

using namespace std;

int main()
{
    int userInput;

    cout << "Please enter the number of resistors in your circuit." << endl;
    cin >> userInput;

    Circuit myCircuit(userInput);


}
