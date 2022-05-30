//Ejemplo de polimorfismo en clase

#include "Licuadora.h"
#include <iostream>
#include <string>
using namespace std;

Licuadora::Licuadora() : Electrodomestico{},numVelocidades{4},pulsarActivo{false} {}
Licuadora::Licuadora(int nv) : 
        Electrodomestico{false,"Licuar"},numVelocidades{nv},pulsarActivo{false} {}
Licuadora::Licuadora(bool enc,string fa,int nv,bool pa) :
        Electrodomestico{enc,fa},numVelocidades{nv},pulsarActivo{pa} {}

void Licuadora::licuar(){
    string salida {""};
    salida = isEncendido() ? "Licuando tu comida..." : "Enciende la licuadora";
    cout << salida << endl;
}
    
string Licuadora::dimeFuncionActual(){
    return "Estas usando una licuadora con la funcion " + funcionActual;
}

void Licuadora::cambiaFuncionActual(string fa){
    cout << "Estas en cambia funcion de la licuadora" << endl;
    funcionActual = fa;
}

string Licuadora::toString(){
    string salida {};
    return "Licuadora(" + to_string(isEncendido()) + "," + funcionActual + "," +
        to_string(numVelocidades) + "," + to_string(pulsarActivo) + ")";
}
