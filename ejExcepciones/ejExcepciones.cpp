// Ejemplo en clase Excepciones

#include "Cafetera.h"
#include <iostream>
#include <string>
using namespace std;

float pideCapacidad(){
    float cap;
    bool correcto {false};
    while(!correcto){
        cout << "\nDime la capacidad: "; cin >> cap;
        try{
            if (cin.fail()) throw invalid_argument("ERROR!!! La capacidad debe ser float.");
            correcto = true;
        } catch(invalid_argument e){
            cout << e.what() << endl;
            cout << "Vuelve a intentar\n";
            cin.clear();
            cin.ignore(32767,'\n');
        }
    }
    return cap;
}

int pideTazas(){
    int tazas;
    bool correcto {false};
    while(!correcto){
        cout << "\nDime las tazas por minuto: "; cin >> tazas;
        try{
            if (cin.fail()) throw invalid_argument("ERROR!!! Las tazas deben de ser entero.");
            correcto = true;
        } catch(invalid_argument e){
            cout << e.what() << endl;
            cout << "Vuelve a intentar\n";
            cin.clear();
            cin.ignore(32767,'\n');
        }
    }
    return tazas;
}

int main(int argc, char const *argv[])
{
    string nom {};
    cout << "Dime el nombre de la cafetera: "; cin >> nom;
    float cap {0};
    cap = pideCapacidad();
    int tazas {0};
    tazas = pideTazas();

    Cafetera miCafe{nom,cap,tazas};
    cout << miCafe.toString() << endl;

    return 0;
}

