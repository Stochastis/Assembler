#ifndef CIRCUIT_H
#define CIRCUIT_H

class Circuit
{
    public:
        Circuit();
        virtual ~Circuit();

        double getVoltage() { return voltage; }
        void setVoltage( double val) { voltage = val; }
        double getResistance() { return resistance; }
        void setResistance( double val) { resistance = val; }
        double getAmperage() { return amperage; }
        void setAmperage( double val) { amperage = val; }

        void calculateVoltage(){voltage = resistance * amperage}
        void calculateAmperage(){amperage = voltage / resistance}
        void calculateResistance(){resistance = voltage / amperage}

    protected:

    private:
         double voltage;
         double resistance;
         double amperage;
};

#endif
