//Ejemplo en clase de Abstractas
#include "SistemaComunicacion.h"

SistemaComunicacion::SistemaComunicacion(string tipo) :
        tipoComunicacion{tipo}, comunicando{false} {}
    
bool SistemaComunicacion::isComunicando() {return comunicando;}
void SistemaComunicacion::setComunicando(bool val) {comunicando = val;}
