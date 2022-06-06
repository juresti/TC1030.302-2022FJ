//Ejemplo en clase
#include "Cafetera.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    Cafetera caf1{"Sumbeam",1.5,1};
    Cafetera nes1{"Nespressso",5,3};
    Cafetera caf2{"Dolce Gusto",2,2};
    
    cout << caf1.toString() << endl;
    cout << nes1.toString() << endl;
    cout << caf2.toString() << endl;

    cout << "Entre todas puedo hacer " + to_string(caf1 + nes1 + caf2) + " tazas" << endl;
    return 0;
}
