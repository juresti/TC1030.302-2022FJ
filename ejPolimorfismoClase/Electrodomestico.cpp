//Ejercio en clase de Polimorfismo

#include "Electrodomestico.h"
#include <string>
using namespace std;

Electrodomestico::Electrodomestico() : encendido{false},funcionActual{"Ninguna"} {}
Electrodomestico::Electrodomestico(bool enc,string fa) : 
                    encendido{enc},funcionActual{fa} {}
                    
bool Electrodomestico::isEncendido() {return encendido;}
void Electrodomestico::encender() {encendido = true;}
void Electrodomestico::apagar() {encendido = false;}

string Electrodomestico::dimeFuncionActual() 
        {return "La funcion actual es " + funcionActual;}
void Electrodomestico::cambiaFuncionActual(string fa) {funcionActual = fa;}
    
string Electrodomestico::toString(){
    string salida {""};
    salida = isEncendido() ? "Encendido" : "Apagado";
    return "Electrodomestico(" + salida + "," + funcionActual + ")";
}
