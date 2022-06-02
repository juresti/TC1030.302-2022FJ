//Ejemplo de abstractas en clase
#ifndef SC_H
#define SC_H

#include <string>
using namespace std;

class SistemaComunicacion{
private:
    bool comunicando;
protected:
    string tipoComunicacion;
    SistemaComunicacion(string tipo);
public:
    virtual bool comunicar() = 0; //Metodo abstracto
    bool isComunicando();
    void setComunicando(bool val);
};

#endif
