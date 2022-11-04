#ifndef AEROPUERTO_H
#define AEROPUERTO_H
#include <string>
#include "Aerolinea.h"

const int AER=2;
using namespace std;

class Aeropuerto
{
    public:
        Aeropuerto();
        Aeropuerto(string fech);
        string getId();
        void setId(string ide);
        string getFecha();
        void setFecha(string fech);
        string getCiudad();
        void setCiudad(string ciud);
        string getEstado();
        void setEstado(string est);
        void iniciarOperaciones(string fech);
        void printAllFlights();
        void cerrarOperaciones();
        void programarVuelo();
        virtual ~Aeropuerto();

    protected:

    private:
        string id,fecha, ciudad,estado;
        float trasnacciontotal, ingresodiario;
        Aerolinea aerolineas[AER];
};

#endif // AEROPUERTO_H
