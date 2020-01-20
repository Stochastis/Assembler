#include <iostream>

using namespace std;

int main()
{
    double Voltage;
    double Resistance;
    double Amperage;
    int UserChoice;

    cout << "What would you like to calculate1? Press 1) for Voltage, 2) for Amperage, or 3} for resistance." << endl;
    cin >> UserChoice;

    if (UserChoice == 1){
        cout << "Please enter the resistance" << endl;
        cin >> Resistance;
        cout << "Please enter the amperage" << endl;
        cin >> Amperage;
        Voltage = Amperage * Resistance;
        cout << "The voltage is " << Voltage << endl;
    } else if (UserChoice == 2){
        cout << "Please enter the resistance" << endl;
        cin >> Resistance;
        cout << "Please enter the voltage" << endl;
        cin >> Voltage;
        Amperage = Voltage / Resistance;
        cout << "The amperage is " << Amperage << endl;
    } else if (UserChoice == 3){
        cout << "Please enter the voltage" << endl;
        cin >> Voltage;
        cout << "Please enter the amperage" << endl;
        cin >> Amperage;
        Resistance = Voltage / Amperage;
        cout << "The resistance is " << Resistance << endl;
    } else {
        cout << "What is this nonsense?";
    }
}
