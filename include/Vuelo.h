#ifndef VUELO_H
#define VUELO_H
#include "Pasajero.h"
#include <string>

using namespace std;

class Vuelo
{
    public:
        Vuelo();
        string getFecha();
        void setFecha(string fech);
        string getHora();
        void setHora(string hor);
        float getPrecio();
        void setPrecio(float prec);
        string getModeloAvion();
        void setModeloAvion(string modelo);
        string getEmbarque();
        void setEmabarque(string emba);
        string getDestino();
        void setDestino(string desti);
        string getFromTo();
        void setFromTo(string emba, string desti);
        float getDistancia();
        void setDistancia(float dista);
        string getTripulacion();
        void setTripulacion(string tripu);
        float getCombustible();
        void setCombustible(float combus);
        float calculaCombustible();
        void imprimirVuelo();
        void comprarPasaje();
        int ocupados();

        virtual ~Vuelo();

    protected:

    private:
        string hora, fecha, modeloavion,embarque,destino, tripulacion,fromTo;
        float  precio,distancia, combustible;
        Pasajero asiento[2][2];

};

#endif // VUELO_H
