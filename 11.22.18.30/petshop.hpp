#ifndef _PETSHOP_
#define _PETSHOP_

#include <iostream>
#include "animal.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"
#define CAPACIDADE_MAX_ANIMAL 100
#define CAPACIDADE_MAX_VETERINARIO 10 
#define CAPACIDADE_MAX_TRATADOR 10

class petShop {
    string nome;
    Animal* animais[CAPACIDADE_MAX_ANIMAL];
    int capacidade_animal = 0;
    Veterinario* vets[CAPACIDADE_MAX_VETERINARIO];
    int capacidade_veterinario = 0;
    Tratador* trat[CAPACIDADE_MAX_TRATADOR];
    int capacidade_tratador = 0;

public:
    
    petShop();
    petShop(string nome);
    ~petShop();

    string getNome();
    void setNome(string nome);
    
    int getCapacidade_animal();   
    int getCapacidade_veterinario();   
    int getCapacidade_tratador();

    void listarAnimais();
    void listarVeterinarios();
    void listarTratadores();

    void addAnimal(Animal* animal_inserido);
    void addVeterinario(Veterinario* veterinario_inserido);
    void addTratador(Tratador* tratador_inserido);

    void removerAnimal(string id_Animal);
    void removerVeterinario(string id_Veterinario);
    void removerTratador(string id_Tratador);

    void consultarAnimal(string id_Animal);
    void consultarVeterinario(string id_Veterinario);
    void consultarTratador(string id_Tratador);
}









#endif