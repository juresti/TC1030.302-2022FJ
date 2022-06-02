//Ejemplo en clase de abstractas
#include "Telefono.h"
#include <iostream>
using namespace std;
Telefono::Telefono(string num) : 
        SistemaComunicacion{"Voz"},encendido{false},numero{num} {}

void Telefono::encender() {encendido = true;}
void Telefono::apagar() {encendido = false;}
string Telefono::getNumero() {return numero;}
bool Telefono::marcar(string num){
    if(encendido) {cout << "Marcando el numero " + numero << endl; }
    else {cout << "Enciende primero el telefono";}
}