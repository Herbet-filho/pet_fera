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
    string nomePetShop;
    
    cout << "Digite o nome do petshop:" << endl;
    cin >> nomePetShop;
    
    PetShop petfera(nomePetShop);

    Veterinario* vet = new Veterinario("veterinarium","ifsfvf", 4777, "iml23345234");
    Tratador* tratador = new Tratador("metrdg", "juhu45", 4222, 0);
    Animal* animal = new Animal(*vet, *tratador, "salada", "alta", "enorme", "traquila123", "ex", "f", "interna");
    //cout << animal->getLicenca_transporte() << endl;
    cout << animal->getNomeVeterinario() << endl;

    //animal.setVeterinario(*vet);

    //animal.setTratador(*tratador);
    cout << animal->getNomeTratador() << endl;
    cout << "ta tudo ok!" << endl;
    cout << petfera.getNome() << endl;
    petfera.addAnimal(animal);
    cout<<"lista de animais:"<<endl;
    petfera.listarAnimais();
    petfera.addVeterinario(vet);
    petfera.addTratador(tratador);
    cout<<"lista de veterinarios"<<endl;
    petfera.listarVeterinarios();
    cout<<"lista de tratadores"<<endl;
    petfera.listarTratadores();
    return 0;
}