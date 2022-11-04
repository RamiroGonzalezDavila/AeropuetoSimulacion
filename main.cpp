//RAMIRO YOSHUA FRANCISCO GONZALEZ DAVILA. A01422501
#include <iostream>
#include "Aeropuerto.h"

using namespace std;

int main()
{
    Aeropuerto benito;
    benito.printAllFlights();
    int p;
    do{
        cout<<"Quiere programar un vuelo? si=1, no=0"<<endl;
        cin>>p;
        if (p==1){
            benito.programarVuelo();
        }
        else{

        }

    } while (p!=0);
    benito.printAllFlights();
    benito.cerrarOperaciones();
    return 0;
}
