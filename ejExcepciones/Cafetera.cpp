//Ejemplo sobrecarga en clase

#include "Cafetera.h"

Cafetera::Cafetera(string nom, float cap, int tazas) : 
            nombre{nom},capacidad{cap},tazasXmin{tazas} {}

string Cafetera::toString(){
    return "Cafetera(" + to_string(capacidad) + "," + 
                    to_string(tazasXmin) + "," + nombre + ")";
}

int operator +(Cafetera &c1,Cafetera &c2){
    return c1.tazasXmin + c2.tazasXmin;
}

int operator +(int tazas,Cafetera &c1){
    return tazas + c1.tazasXmin;
}
