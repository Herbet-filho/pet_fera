#ifndef _PETSHOP_
#define _PETSHOP_

#include <iostream>
#include <fstream>
#include <vector>
#include <string>


#include "animal.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"

#include "anfibio_domestico.hpp"
#include "anfibio_exotico.hpp"
#include "anfibio_nativo.hpp"
#include "ave_domestica.hpp"
#include "ave_exotica.hpp"
#include "ave_nativa.hpp"
#include "mamifero_domestico.hpp"
#include "mamifero_exotico.hpp"
#include "mamifero_nativo.hpp"
#include "reptil_domestico.hpp"
#include "reptil_exotico.hpp"
#include "reptil_nativo.hpp"


using std::cout;
using std::cin;
using std::endl;

class PetShop { 
    private:
        string nome;

        vector<Animal*> animais;
        vector<Veterinario*> vets;
        vector<Tratador*> trat;
    
        bool verifiqueSimNao(char opcao);

    public:
        
        PetShop();
        PetShop(string nome);
        ~PetShop();

        string getNome();
        void setNome(string nome);
        
        int getCapacidade_animal();   
        int getCapacidade_veterinario();   
        int getCapacidade_tratador();
        
        Animal* getAnimais(int i);
        Veterinario* getVeterinarios(int i);
        Tratador* getTratadores(int i);

        void listarAnimais();
        void listarAnfibios();
        void listarAves();
        void listarMamiferos();
        void listarRepteis();
        void listarVeterinarios();
        void listarTratadores();
        void listaAnimais_Veterinario(string id_Veterinario);
        void listaAnimais_Tratador(string id_Tratador);

        int pegarTratador(Animal &animal_inserido, int n);

        void addAnimal(Animal* animal_inserido);
        void addVeterinario(Veterinario* veterinario_inserido);
        void addTratador(Tratador* tratador_inserido);

        void removerAnimal(string id_Animal);
        void removerVeterinario(string id_Veterinario);
        void removerTratador(string id_Tratador);

        Tratador* procurarTratador(string id_Tratador);
        Veterinario* procurarVeterinarioId(string id_Vet);
        void setTratadorId(Animal* bicho, string id);
        void setVeterinarioId(Animal* bicho, string id);

        void consultarAnimal(string id_Animal);
        void consultarVeterinario(string id_Veterinario);
        void consultarTratador(string id_Tratador);

        void removerAnimal_lista_tratador(string id_Animal, string id_Tratador);
        
        void CadastrarVeterinario();
        void CadastrarTratador();
        void CadastrarAnimal();
        void Funcionamento();
        void controleFuncionamento();
        
        void alterar_dados_animal();
        void alterar_dados_veterinario();
        void alterar_dados_tratador();

        int getsizeanimais();
        int getSizeVeterinarios();
        int getSizeTratadores();

	
};


#endif