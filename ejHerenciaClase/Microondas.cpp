//Ejemplo de herencia

#include "Microondas.h"
#include <string>
using namespace std;

Microondas::Microondas() : Electrodomestico(),capacidad{3},color{"Blanco"} {}
Microondas::Microondas(float cap,string col) : Electrodomestico(),capacidad{cap},color{col} {}

string Microondas::calentadoRapido(){
    if (isEncendido()) {return "Calentando tu comida por 30 segundos...";}
    else {return "Primero enciende el microondas!";}
}

void Microondas::encender(){setEncendido(true);}
void Microondas::apagar() {setEncendido(false);}

string Microondas::toString(){
    string salida = "";
    salida = isEncendido() ? "Verdadero" : "Falso";
    return "Microondas(" + salida + "," + to_string(capacidad) + "," + color + ")";
}
