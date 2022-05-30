//Ejemplo de polimorfismo en clase
#ifndef LICUADORA_H
#define LICUADORA_H

#include "Electrodomestico.h"

class Licuadora : public Electrodomestico{
private:
    int numVelocidades;
    bool pulsarActivo;
public:
    Licuadora();
    Licuadora(int nv);
    Licuadora(bool enc,string fa,int nv,bool pa);
    void licuar();
    virtual string dimeFuncionActual();
    virtual void cambiaFuncionActual(string fa);
    string toString();
};

#endif
