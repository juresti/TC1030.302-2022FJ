//Ejemplo en clase

#include "TelefonoFijo.h"
#include <iostream>
using namespace std;

TelefonoFijo::TelefonoFijo(int nl) : Telefono{"456 789"},numLineas{nl} {}

bool TelefonoFijo::comunicar(){
    cout << "Comunicando desde el telefono fijo\n";
}
