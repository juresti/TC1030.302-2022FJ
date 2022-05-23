// Programa de aplicacion para el ejemplo de Herencia

#include "Electrodomestico.h"
#include "Microondas.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "\n**** Pruebas de la clase Electrodomestico ****\n";
    Electrodomestico elec{};
    cout << elec.toString()  << endl;
    elec.setEncendido(true);
    cout << elec.isEncendido() << endl;

    cout << "\n***** Pruebas de Microondas *****\n";
    Microondas micro1{};
    Microondas micro2{7.5,"Fucsia"};
    cout << micro1.toString() << endl;
    cout << micro2.toString() << endl;
    cout << micro1.calentadoRapido() << endl;
    micro2.encender();
    cout << micro2.calentadoRapido() << endl;
    micro2.apagar();
    cout << micro2.isEncendido() << endl;
    return 0;
}
