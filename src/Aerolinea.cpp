#include "Aerolinea.h"
#include <string>
#include "Vuelo.h"
#include "Aeropuerto.h"
#include <iostream>
using namespace std;

Aerolinea::Aerolinea()
{
 nombreaerolinea="";
}

Aerolinea::~Aerolinea()
{
    //dtor
}

string Aerolinea::getCiudadAbordaje(){
    return ciudadabordaje;
}

void Aerolinea::setCiudadAbordaje(string ciudad){
    ciudadabordaje=ciudad;
}

string Aerolinea::getNombreAerolinea(){
    return nombreaerolinea;
}

void Aerolinea::setNombreAerolinea(string aero){
    nombreaerolinea=aero;
}

float Aerolinea::getIncomes(){
    return incomes;
}

float Aerolinea::setIncomes(Vuelo precio, Vuelo asiento){
    incomes;
}

void Aerolinea::updateArline(){
    cout<<"Ingrese las iniciales de la aerolinea: "<<endl;
    cin>>nombreaerolinea;
}

void Aerolinea::programaVuelo(){
    string desti, aero, modelo, tripu, hora;
    float dist,costo;
    cout<<"Ingrese un numero de vuelo (0,1): "<<endl;
    cin>>v;
    do {
        if (v>=Vuel){
            cout<<"Ingrese un vuelo valido: "<<endl;
            cin>>v;
        }
        else{
        break;
        }
    } while(v>=Vuel);
    cout<<"Ingrese el tipo de avion: "<<endl;
    cin>>modelo;
    vuelos[v].setModeloAvion(modelo);
    cout<<"Ingrese su ciudad destino: "<<endl;
    cin>>desti;
    vuelos[v].setDestino(desti);
    cout<<"Ingrese la distancia del viaje: "<<endl;
    cin>>dist;
    vuelos[v].setDistancia(dist);
    vuelos[v].calculaCombustible();
    cout<<"Ingrese la clave de tripulacion: "<<endl;
    cin>>tripu;
    vuelos[v].setTripulacion(tripu);
    cout<<"Ingrese la hora del viaje: "<<endl;
    cin>>hora;
    vuelos[v].setHora(hora);
    cout<<"Ingrese el costo del voleto: "<<endl;
    cin>>costo;
    vuelos[v].setPrecio(costo);
    //______________________
    int c;
    do{
        cout<<"Quiere comprar boletos en este avion? si=1,no=0 "<<endl;
        cin>>c;
        if (c==1){
            vuelos[v].comprarPasaje();
        }
        else{

        }
    } while(c!=0);

}

void Aerolinea::currentIncomes(){
    for (int i=0;i<Vuel;i++){
        incomes= vuelos[i].getPrecio()*vuelos[i].ocupados();
        incomes1=incomes1+incomes;
    }
    cout<<"Ingresos de la linea:"<<incomes1<<endl;

}

float Aerolinea::cerrarOperaciones(){
    return incomes1;
}
void Aerolinea::pasaFecha(string fech){
     for (int i=0;i<Vuel;i++){
      vuelos[i].setFecha(fech);
      vuelos[i].setEmabarque(ciudadabordaje);
     }
}
void Aerolinea::imprimirAero(){
    for (int i=0;i<Vuel;i++){
        cout<<"Nombre aerolinea: "<<nombreaerolinea<<endl;
        cout<<" Vuelos: "<<endl;
        vuelos[i].imprimirVuelo();
    }
}
