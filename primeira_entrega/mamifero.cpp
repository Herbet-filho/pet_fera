#include "mamifero.hpp"

Mamifero::Mamifero(){}

Mamifero::Mamifero(Animal &animal, string pelagem, string deslocamento){
    this->animal = &animal;
    this->pelagem = pelagem;
    this->deslocamento = deslocamento;
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
