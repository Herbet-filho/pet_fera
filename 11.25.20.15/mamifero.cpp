#include "mamifero.hpp"

Mamifero::Mamifero(){
    this->classe = "Mamifero";
}

Mamifero::Mamifero(Animal &animal, string pelagem, string deslocamento){
    this->classe = "Mamifero";
    this->animal = &animal;
    this->pelagem = pelagem;
    this->deslocamento = deslocamento;
    //capacidade_mamifero = capacidade_mamifero + 1;
}

Mamifero::~Mamifero(){}

void Mamifero::setPelagem(string pelagem){
    this->pelagem = pelagem;
}

string Mamifero::getPelagem(){
    return this->pelagem;
}

void Mamifero::setDeslocamento(string deslocamento){
    this->deslocamento = deslocamento;
}

string Mamifero::getDeslocamento(){
    return this->deslocamento;
}

/*void
Mamifero::setCapacidade_mamifero(int capacidade_mamifero){
    this->capacidade_mamifero = capacidade_mamifero;
}

int
Mamifero::getCapacidade_mamifero(){
    return this->capacidade_mamifero;
}*/