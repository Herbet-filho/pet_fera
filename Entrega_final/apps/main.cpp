#include <iostream>


#include "funcionario.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"
#include "animal.hpp"
#include "anfibio.hpp"
#include "reptil.hpp"
#include "mamifero.hpp"
#include "ave.hpp"
#include "petshop.hpp"
#include "armazenamento.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
    
    PetShop petfera("PetFera");
    Armazenamento tratadores_lidos(5,"dados_tratadores.csv", petfera);
    Armazenamento vets_lidos(6,"dados_veterinarios.csv", petfera);
    Armazenamento animais_lidos(4, "dados_animais.csv", petfera);
    
    cout << endl;
    cout << "Bem vindo ao " << petfera.getNome() << endl << endl;
    
    petfera.controleFuncionamento();

    Armazenamento arquivoAnimal(1, "dados_animais.csv", petfera);
    Armazenamento arquivoTratador(2, "dados_tratadores.csv", petfera);
    Armazenamento arquivoVeterinario(3, "dados_veterinarios.csv", petfera);
    

 return 0;
}