#ifndef AEROLINEA_H
#define AEROLINEA_H
#include <string>
#include "Vuelo.h"
using namespace std;

const int Vuel=2;

class Aerolinea
{
    public:
        Aerolinea();
        string getCiudadAbordaje();
        void setCiudadAbordaje(string ciudad);
        string getNombreAerolinea();
        void setNombreAerolinea(string aero);
        float getIncomes();
        float setIncomes(Vuelo precio, Vuelo asiento);
        void updateArline();
        void programaVuelo();
        void currentIncomes();
        float cerrarOperaciones();
        void pasaFecha(string);
        void imprimirAero();
        virtual ~Aerolinea();

    protected:

    private:
        string ciudadabordaje,nombreaerolinea;
        float incomes, incomes1;
        int v;
        Vuelo vuelos[Vuel];
};

#endif // AEROLINEA_H
