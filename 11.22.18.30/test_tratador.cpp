#include <iostream>
#include "animal.hpp"
#include "funcionario.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"
#include "nivelSeguranca.hpp"

using namespace std;

int main(){
    Tratador tratador();
    Tratador trat1("fucrecio", "tratei123", 2780, 2);

    cout << trat1.getNome() << endl;
    cout << trat1.getId() << endl;
    cout << trat1.getSalario() << endl;
    cout << trat1.getNivelSeguranca() << endl;



    return 0;
}