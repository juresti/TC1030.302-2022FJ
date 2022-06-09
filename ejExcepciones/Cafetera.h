//Ejemplo sobrecarga operadores

#ifndef CAFETERA_H
#define CAFETERA_H

#include <string>
using namespace std;

class Cafetera{
private:
    float capacidad;
    int tazasXmin;
    string nombre;
public:
    Cafetera(string nom, float cap, int tazas);
    string toString();
    friend int operator +(Cafetera &c1,Cafetera &c2);
    friend int operator +(int tazas,Cafetera &c1);
};
#endif
