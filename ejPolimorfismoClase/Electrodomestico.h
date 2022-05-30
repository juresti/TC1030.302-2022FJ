//Ejercicio en clase polimorfismo
#ifndef ELECTRODOMESTICO_H
#define ELECTRODOMESTICO_H

#include <string>
using namespace std;

class Electrodomestico{
private:
    bool encendido;
protected:
    string funcionActual;
public:
    Electrodomestico(); //constructor default
    Electrodomestico(bool enc,string fa); //Constructor completo
    bool isEncendido();
    void encender();
    void apagar();
    virtual string dimeFuncionActual();
    virtual void cambiaFuncionActual(string fa);
    string toString();
};

#endif
