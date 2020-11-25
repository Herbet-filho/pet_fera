#include <iostream>

#include "animal.hpp"
#include "funcionario.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"

using namespace std;

int main(){
    Veterinario* vet = new Veterinario("veterinarium","ifsfvf", 4777, "iml23345234");
    Tratador* tratador = new Tratador("metrdg", "juhu45", 4222, 0);
    Animal animal(*vet, *tratador, "hhhhh", true, true, "jjjj", "vvv");

    cout << vet->getNome() << endl;
    cout << vet->getId() << endl;
    cout << vet->getCrmv() << endl;

    cout << animal.getLicenca_transporte() << endl;
    //cout << animal.getVeterinario() << endl;

    animal.setVeterinario(*vet);

    cout << animal.getLicenca_transporte() << endl;
    cout << animal.getVeterinario() << endl;

    return 0;
}