//Ejemplo en clase de Abstractas
#include "SistemaComunicacion.h"

SistemaComunicacion::SistemaComunicacion(string tipo) :
        tipoComunicacion{tipo}, comunicando{false} {}
    
bool SistemaComunicacion::isComunicando() {return isComunicando;}
void SistemaComunicacion::setComunicando(bool val) {comunicando = val;}
