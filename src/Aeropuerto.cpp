#include "Aeropuerto.h"
#include <string>
#include <iostream>
using namespace std;

Aeropuerto::Aeropuerto(){
    string fech;
    cout<<"Ingrese fecha:"<<endl;
    cin>>fech;
    iniciarOperaciones(fech);
}

Aeropuerto::~Aeropuerto()
{
    //dtor
}

string Aeropuerto::getId(){
    return id;
}

void Aeropuerto::setId(string ide){
    id=ide;
}

string Aeropuerto::getFecha(){
    return fecha;
}

void Aeropuerto::setFecha(string fech){
    fecha=fech;
}

string Aeropuerto::getCiudad(){
    return ciudad;
}

void Aeropuerto::setCiudad(string ciud){
    ciudad=ciud;
}

string Aeropuerto::getEstado(){
    return estado;
}

void Aeropuerto::setEstado(string est){
    estado=est;
}

void Aeropuerto::iniciarOperaciones(string fech){
    fecha=fech;
    cout<<"Ingrese id aeropuerto:"<<endl;
    cin>>id;
    cout<<"Ingrese ciudad aeropuerto:"<<endl;
    cin>>ciudad;
    cout<<"Ingrese pais aeropuerto:"<<endl;
    cin>>estado;
    for (int i=0;i<AER;i++){
        aerolineas[i].setCiudadAbordaje(ciudad);
        aerolineas[i].pasaFecha(fech);
        }

    }


void Aeropuerto::printAllFlights(){
    for (int i=0;i<Vuel;i++){
        cout<<"Los vuelos programados para hoy "<<fecha<<" son: "<<endl;
        aerolineas[i].imprimirAero();
    }

}
void Aeropuerto::programarVuelo(){
    int d;
    if (aerolineas[0].getNombreAerolinea()==""){
        aerolineas[0].updateArline();
        do{
            aerolineas[0].programaVuelo();
            cout<<"Desea programar otro vuelo en esta aerolinea? si=1, no=0"<<endl;
            cin>>d;
        } while(d!=0);
        aerolineas[0].currentIncomes();
    }
    else{
        aerolineas[1].updateArline();
        do{
            aerolineas[1].programaVuelo();
            cout<<"Desea programar otro vuelo en esta aerolinea? si=1, no=0"<<endl;
            cin>>d;
        } while(d!=0);
        aerolineas[1].currentIncomes();
    }
}

void Aeropuerto::cerrarOperaciones(){
    float clo, clo1;
    for(int i=0;i<AER;i++){
        clo= aerolineas[i].cerrarOperaciones();
        clo1= clo+clo1;
    }
    cout<<"El ingreso total del dia fue: "<<clo1<<endl;

}
