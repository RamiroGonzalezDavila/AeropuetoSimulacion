#ifndef PASAJERO_H
#define PASAJERO_H
#include <string>

using namespace std;


class Pasajero
{
    public:
        Pasajero();
        string getNombre();
        int getTelefono();
        void setNombre(string nomb);
        void setTelefono(int tele);
        void imprimePasa();
        virtual ~Pasajero();

    protected:

    private:
        string nombre;
        int telefono;
};

#endif // PASAJERO_H
