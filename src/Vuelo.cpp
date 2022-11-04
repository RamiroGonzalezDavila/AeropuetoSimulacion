#include "Vuelo.h"
#include <string>
#include "Aeropuerto.h"
#include <iostream>
using namespace std;

Vuelo::Vuelo()
{
    modeloavion="";
    hora="";
    precio=0;
    tripulacion="";
    destino="";

}

Vuelo::~Vuelo()
{
    //dtor
}
string Vuelo::getFecha(){
    return fecha;
}

void Vuelo::setFecha(string fech){
    fecha=fech;
}

string Vuelo::getHora(){
    return hora;
}

void Vuelo::setHora(string hor){
    hora=hor;
}

float Vuelo::getPrecio(){
    return precio;
}

void Vuelo::setPrecio(float prec){
    precio=prec;
}

string Vuelo::getModeloAvion(){
    return modeloavion;
}

void Vuelo::setModeloAvion(string modelo){
    modeloavion=modelo;
}

string Vuelo::getEmbarque(){
    return embarque;
}

void Vuelo::setEmabarque(string emba){
    embarque=emba;
}

string Vuelo::getDestino(){
    return destino;
}

void Vuelo::setDestino(string desti){
        destino=desti;
}
string Vuelo::getFromTo(){
    return fromTo;
}

void Vuelo::setFromTo(string emba, string desti){
    fromTo=emba,desti;
}

float Vuelo::getDistancia(){
    return distancia;
}

void Vuelo::setDistancia(float dista){
    distancia=dista;
}

string Vuelo::getTripulacion(){
    return tripulacion;
}

void Vuelo::setTripulacion(string tripu){
    tripulacion=tripu;
}

float Vuelo::getCombustible(){
    return combustible;
}

void Vuelo::setCombustible(float combus){
    combustible=combus;
}

float Vuelo::calculaCombustible(){
//tomando en cuenta el rendimiento de un avion comercial que es de 21.62 litros por kilometro, tomaremos nuestro consumo como 20 litos por kilometro.
        combustible= distancia*20;
        cout<<"El combustible requerido para viajar a "<<destino<<" es de "<<combustible<<" litros"<<endl;
        return combustible;

}
void Vuelo::comprarPasaje(){
    int ac,af,tele,d,vend=0;
    string nom;
    do{
        cout<<"Que asiento quiere?"<<endl;
        cout<<"Ingrese la columna de su asiento:"<<endl;
        cin>>ac;
        cout<<"Ingrese la fila de su asiento:"<<endl;
        cin>>af;
        if (ac>1 or af>1){
            cout<<"Ingrese un asiento valido";
            cout<<"Ingrese la columna de su asiento:"<<endl;
            cin>>ac;
            cout<<"Ingrese la fila de su asiento:"<<endl;
            cin>>af;
        }
        else if(asiento[ac][af].getNombre()==""){
            cout<<"Asiento disponible"<<endl;
            cout<<"Introdusca su Nombre:"<<endl;
            cin>>nom;
            asiento[ac][af].setNombre(nom);
            cout<<"Introdusca su Telefono:"<<endl;
            cin>>tele;
            asiento[ac][af].setTelefono(tele);
        }
        else if(asiento[ac][af].getNombre()!=""){
           cout<<"Asiento Ocupado"<<endl;
        }
        cout<<"Quiere comprar otro boleto? si=1, no=0"<<endl;
        cin>>d;
    } while(d!=0);

}

void Vuelo::imprimirVuelo(){
    cout<<"Fecha: "<<fecha<<" Hora: "<<hora<<" Ciudad de embarque: "<<embarque<<" Ciudad destino: "<<destino<<" Precio: "<<precio<<" Modelo: "<<modeloavion<<" Tripulacion: "<<tripulacion<<endl;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            asiento[i][j].imprimePasa();
            cout<<"   ";
        }
        cout<<endl;
    }
}
int Vuelo::ocupados(){
    int ocu=0;
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            if (asiento[i][j].getNombre()!=""){
             ocu=ocu+1;
            }
            else{

            }
        }
    }
    return ocu;
}
