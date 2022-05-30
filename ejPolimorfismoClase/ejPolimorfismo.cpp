//Ejemplo en clase de polimorfismo
#include "Electrodomestico.h"
#include "Licuadora.h"
#include <iostream>
#include <string>
using namespace std;

void reporteElectrodomestico(Electrodomestico &electro){
    cout << electro.toString() + electro.dimeFuncionActual() << endl;
}

int main(int argc, char const *argv[])
{
    cout << "\n*** Pruebas de clase Electrodomestico ***\n";
    Electrodomestico electro{};
    cout << electro.toString() << endl;
    electro.cambiaFuncionActual("Ilumina");
    cout << electro.dimeFuncionActual() << endl;

    cout << "\n***** Pruebas de Licuadora *****\n";
    Licuadora licua1{true,"Picando",13,false};
    cout << licua1.toString() << endl;
    licua1.licuar();
    licua1.encender();
    licua1.licuar();
    cout << licua1.dimeFuncionActual() << endl;
    licua1.cambiaFuncionActual("Triturar");
    licua1.toString();

    cout << "\n***** Pruebas de polimorfismo *****\n";
    reporteElectrodomestico(electro);
    reporteElectrodomestico(licua1);
    return 0;
}
