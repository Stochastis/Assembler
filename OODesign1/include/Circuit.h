#ifndef CIRCUIT_H
#define CIRCUIT_H

class Circuit
{
    public:
        Circuit();
        virtual ~Circuit();

        double Getvoltage() { return voltage; }
        void Setvoltage( double val) { voltage = val; }
        double Getresistance() { return resistance; }
        void Setresistance( double val) { resistance = val; }
        double Getamperage() { return amperage; }
        void Setamperage( double val) { amperage = val; }

    protected:

    private:
         double voltage;
         double resistance;
         double amperage;
};

#endif
