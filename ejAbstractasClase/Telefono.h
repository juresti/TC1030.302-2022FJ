// Ejemplo de abstractas en clase
#ifndef TELEFONO_H
#define TELEFONO_H

#include "SistemaComunicacion.h"
#include <string>
using namespace std;

class Telefono : public SistemaComunicacion{
private:
    bool encendido;
    string numero;
protected:
    Telefono(string num);
public:
    void encender();
    void apagar();
    string getNumero();
    bool marcar(string num);
};

#endif
