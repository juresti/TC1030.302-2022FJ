//Ejemplo en clase sobre Herencia
#ifndef ELECTRODOMESTICO_H
#define ELECTRODOMESTICO_H

#include <string>
using namespace std;

class Electrodomestico{
private:
    bool encendido;
public:
    Electrodomestico();
    bool isEncendido();
    void setEncendido(bool val);
    string toString();
};

#endif
