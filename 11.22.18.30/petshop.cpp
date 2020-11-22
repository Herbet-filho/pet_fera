#include <iostream>
#include "petshop.hpp"

petShop::petShop (){
    this -> nome = "Indefinido"
}

petShop::petShop(string nome):nome(nome){}

petShop::~petShop(){}

string petShop::getNome(){
    return this -> nome;
}

void
petShop::setNome(string nome){
    this -> nome = nome;
}

int
petSop::getCapacidade_animal(){
    return this -> capacidade_animal
}

int
petShop::getCapacidade_veterinario(){
    return this -> capacidade_veterinario
}

int
petShop::getCapacidade_tratador(){
    return this -> capacidade_tratador
}

void
petShop::listarAnimais(){
    for(int i = 0; i < this->capacidade_animal; i++){
        cout << animais[i]->getNome() << endl;
    }
}

void
petShop::listarVeterinarios(){
    for(int i = 0; i < this->capacidade_veterinario; i++){
        cout << vets[i]->getNome() << endl;
    }
}

void
petShop::listarTratadores(){
    for(int i = 0; i < this->capacidade_tratador; i++){
        cout << trat[i]->getNome() << endl;
    }
}

void
petShop::addAnimal(Animal* animal_inserido){
    if (capacidade_animal < CAPACIDADE_MAX_ANIMAL){
        animais[capacidade_animal++] = animal_inserido;
    }
}

void
petShop::addVeterinario(Veterinario* veterinario_inserido){
    if (capacidade_veterinario < CAPACIDADE_MAX_VETERINARIO){
        vets[capacidade_veterinario++] = veterinario_inserido;
    }
}

void
petShop::addTratador(Tratador* tratador_inserido){
    if (capacidade_tratador < CAPACIDADE_MAX_TRATADOR){
        trat[capacidade_tratador++] = tratador_inserido;
    }
}

void
petShop::removerAnimal(string id_Animal){
    bool encontrado = false;
    int i;
    for (i = 0; i < this -> capacidade_animal; i++){
        if (this -> animais[i] -> getId() == id_Animal){
            Animal* aux = animais[i];
            animais[i] = animais[i+1];
            animais[i+1] = aux;
            encontrado = true;
        }
    }
    if (encontrado = true){
        delete animais[this -> capacidade_animal];
    }
}
void
petShop::removerVeterinario(string cpf_Veterinario){
    bool encontrado = false;
    int i;
    for (i = 0; i < this -> capacidade_veterinario; i++){
        if (this -> vets[i] -> getId() == id_Veterinario){
            Veterinario* aux = vets[i];
            vets[i] = vets[i+1];
            vets[i+1] = aux;
            encontrado = true;
        }
    }
    if (encontrado = true){
        delete vets[this -> capacidade_animal];
    }
}
    void removerTratador(string cpf_Tratador);







