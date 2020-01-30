#ifndef CIRCUIT_H
#define CIRCUIT_H


class Circuit
{
    public:
        Circuit(int);
        virtual ~Circuit();
        unsigned int CircuitType;
        double* Resistances;
        double TotalResistance();
        int NumberOfResistors;

    protected:

    private:
        double SeriesResistance();
        double ParallelResistance();
};

#endif // CIRCUIT_H
