#include <iostream>
#include "tratador.hpp"

using namespace std;

int main(){
    Tratador tratador();
    Tratador trat1("fucrecio", "tratei123", 2780, 2);

    cout << trat1.getNivelSeguranca() << endl;

    return 0;
}