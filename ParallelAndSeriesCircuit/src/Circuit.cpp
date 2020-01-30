#include "Circuit.h"

Circuit::Circuit(int pNumberOfResistors)
{
    NumberOfResistors = pNumberOfResistors; //Save the value for internal use. Nice for looping.
    Resistances = new double[NumberOfResistors]; //Create a pointer--dynamic array size.
}

Circuit::~Circuit()
{
    delete(Resistances); //Since we manually allocated Resistances with the new keyword, we should manually free up memory.
}

double Circuit::SeriesResistance(){
    double runningTotal = 0;
    for (int i = 0; i < NumberOfResistors; i++){
        runningTotal += Resistances[i];
    }
    return runningTotal;
}

double Circuit::ParallelResistance(){
    double runningTotal = 0;
    for (int i = 0; i < NumberOfResistors; i++){
        runningTotal += (1 / Resistances[i]);
    }
    runningTotal = 1 / runningTotal;
    return runningTotal;
}

double Circuit::TotalResistance(){
    if (CircuitType == 1) {return ParallelResistance();}
    else {return SeriesResistance();}
}
