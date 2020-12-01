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

#define CAPACIDADE_MAX_ANIMAL 100
#define CAPACIDADE_MAX_ANFIBIO 100
#define CAPACIDADE_MAX_AVE 100
#define CAPACIDADE_MAX_MAMIFERO 100
#define CAPACIDADE_MAX_REPTIL 100
#define CAPACIDADE_MAX_VETERINARIO 10 
#define CAPACIDADE_MAX_TRATADOR 10

int main(){
    string nomePetShop;
    //char s;
    
    cout << "Digite o nome do petshop:" << endl;
    cin >> nomePetShop;
    PetShop petfera(nomePetShop);

    /*do{
        petfera.Funcionamento();
        cout << "parar?" << endl;
        cin >> s;
    }while ( s != 's'); */
    
    Veterinario* vet = new Veterinario("Maria","vet0001", 4777.0, "crmv23345234");
    Tratador* tratador = new Tratador("Joao", "trat0001", 4222, 0);
    Animal* animal = new Animal(*vet, *tratador, "Herbivoro", "Alto", true, "Animal0001", "Rinoceronte", "Femea", "Interna");
    Animal* animal2 = new Animal(*vet, *tratador, "carnivoro", "baixo", false, "Animal58962", "Tartaruga", "Macho", "Externo"  );
    cout << vet->getNome() << endl << vet->getId() << endl << vet->getSalario() << endl << vet->getCrmv() << endl << endl;
    cout << tratador->getNome() << endl << tratador->getId() << endl << tratador->getSalario() << endl << tratador->getNivelSeguranca() << endl << tratador->getNivelSegurancaCor() << endl << endl;
    
    
    cout << animal->getNomeVeterinario() << endl
            << animal->getIdVeterinario() << endl;
    
    cout << animal2->getId() << endl;
    
    cout << animal->getNomeTratador() << endl;
    cout << animal->getIdTratador() << endl;

    

    cout << petfera.getNome() << endl;
    petfera.addAnimal(animal);
    petfera.addAnimal(animal2);
    cout<<"lista de animais:"<<endl;
    petfera.listarAnimais();
    petfera.addVeterinario(vet);
    petfera.addTratador(tratador);
    cout<<"lista de veterinarios"<<endl;
    petfera.listarVeterinarios();
    cout<<"lista de tratadores"<<endl;
    petfera.listarTratadores();
    
    cout << "\n\n\n" << *animal2 << endl << endl; 

    cout << "\n\n\n" << *vet << endl << endl;
    cout << "\n\n\n" << *tratador << endl << endl;

    petfera.consultarAnimal(animal2->getId());

    return 0;
}