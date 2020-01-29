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

}

double Circuit::ParallelResistance(){

}

double Circuit::TotalResistance(){

}
