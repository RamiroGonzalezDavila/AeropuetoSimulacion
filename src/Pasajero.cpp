#include "Pasajero.h"
#include <string>
#include <iostream>
using namespace std;

Pasajero::Pasajero()
{
    nombre="";
    telefono=0;
}

Pasajero::~Pasajero()
{
    //dtor
}
string Pasajero::getNombre(){
    return nombre;
}

int Pasajero::getTelefono(){
    return telefono;
}

void Pasajero::setNombre(string nomb){
    nombre=nomb;
}
void Pasajero::setTelefono(int tele){
    telefono=tele;
}
void Pasajero::imprimePasa(){
    cout<<"Pasajero: "<<nombre<<" Telefono: "<<telefono;
}
