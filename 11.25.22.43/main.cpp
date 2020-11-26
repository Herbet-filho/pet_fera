#include <iostream>


#include "funcionario.hpp"
#include "nivelSeguranca.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"
#include "silvestre.hpp"
#include "animal.hpp"
#include "anfibio.hpp"
#include "reptil.hpp"
#include "mamifero.hpp"
#include "ave.hpp"
#include "petshop.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){

    Veterinario* vet = new Veterinario("veterinarium","ifsfvf", 4777, "iml23345234");
    Tratador* tratador = new Tratador("metrdg", "juhu45", 4222, 0);
    Animal animal(*vet, *tratador, "salada", true, true, "alta", "enorme", "traquila123", "ex", "f", "interna");
    petShop petfera("PetFera");
    cout << animal.getLicenca_transporte() << endl;
    cout << animal.getNomeVeterinario() << endl;

    //animal.setVeterinario(*vet);

    //animal.setTratador(*tratador);
    cout << animal.getNomeTratador() << endl;
    cout << "ta tudo ok!" << endl;
    cout << petfera.getNome() << endl;
    petfera.addAnimal(&animal);
    petfera.listarAnimais();

    return 0;
}