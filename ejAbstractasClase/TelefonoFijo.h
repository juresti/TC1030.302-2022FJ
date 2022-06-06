//Ejemplo en clase
#ifndef TF_h
#define TF_h

#include "Telefono.h"
class TelefonoFijo : public Telefono{
private:
    int numLineas;
public:
    TelefonoFijo(int nl);
    bool comunicar();
};

#endif
