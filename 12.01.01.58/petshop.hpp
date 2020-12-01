#ifndef _PETSHOP_
#define _PETSHOP_

#include <iostream>
#include "animal.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"
#include "anfibio.hpp"
#include "ave.hpp"
#include "mamifero.hpp"
#include "reptil.hpp"
#include "silvestre.hpp"

#define CAPACIDADE_MAX_ANIMAL 100
#define CAPACIDADE_MAX_ANFIBIO 100
#define CAPACIDADE_MAX_AVE 100
#define CAPACIDADE_MAX_MAMIFERO 100
#define CAPACIDADE_MAX_REPTIL 100
#define CAPACIDADE_MAX_VETERINARIO 10 
#define CAPACIDADE_MAX_TRATADOR 10

using std::cout;
using std::cin;
using std::endl;

class PetShop: public Anfibio, public Reptil, public Ave, public Mamifero/*, public Animal*/ { 
    string nome;
    Animal* animais[CAPACIDADE_MAX_ANIMAL];
    int capacidade_animal = 0;
    Veterinario* vets[CAPACIDADE_MAX_VETERINARIO];
    int capacidade_veterinario = 0;
    Tratador* trat[CAPACIDADE_MAX_TRATADOR];
    int capacidade_tratador = 0;
    Ave* ave[CAPACIDADE_MAX_AVE];
    int capacidade_ave = 0;
    Anfibio* anfibio[CAPACIDADE_MAX_ANFIBIO];
    int capacidade_anfibio = 0;
    Mamifero* mamifero[CAPACIDADE_MAX_MAMIFERO];
    int capacidade_mamifero = 0;
    Reptil* reptil[CAPACIDADE_MAX_REPTIL];
    int capacidade_reptil = 0;

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
    int getCapacidade_ave();
    int getCapacidade_anfibio();
    int getCapacidade_mamifero();
    int getCapacidade_reptil();

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
    void determinarclasse(Animal* animal_inserido);

    void addAnimal(Animal* animal_inserido);
    void addVeterinario(Veterinario* veterinario_inserido);
    void addTratador(Tratador* tratador_inserido);
    void addAnfibio(Anfibio* anfibio_inserido);
    void addAve(Ave* ave_inserido);
    void addMamifero(Mamifero* mamifero_inserido);
    void addReptil(Reptil* reptil_inserido);

    /*Funcionario& informeDadosFuncionario();
    Veterinario* informeDadosVeterinario();
    void inserirVeterinario();
    Tratador* informeDadosTratador();
    void inserirTratador();*/

    void removerAnimal(string id_Animal);
    void removerVeterinario(string id_Veterinario);
    void removerTratador(string id_Tratador);

    void consultarAnimal(string id_Animal);
    void consultarVeterinario(string id_Veterinario);
    void consultarTratador(string id_Tratador);
    //bool consultarExistenciaTratador(string id_Tratador, int &n);

    void removerAnimal_lista_tratador(string id_Animal, string id_Tratador);
    

    void CadastrarVeterinario();
    void CadastrarTratador();
    void CadastrarAnimal();
    void Funcionamento();
    
    void alterar_dados_animal();
    void alterar_dados_veterinario();
    void alterar_dados_tratador();
};
#endif