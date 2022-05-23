//Ejemplo de herencia en clase
#include "Electrodomestico.h"

#include <string>
using namespace std;

Electrodomestico::Electrodomestico() : encendido{false} {}
bool Electrodomestico::isEncendido() {return encendido;}
void Electrodomestico::setEncendido(bool val) {encendido = val;}

string Electrodomestico::toString(){
    string salida = "";
    salida = isEncendido() ? "Verdadero" : "Falso";
    return "Electrodomestico(" + salida + ")";
}
