#include "mamifero.hpp"

Mamifero::Mamifero(){}

Mamifero::Mamifero(string nutricao, string risco_extincao, bool periculosidade, 
                string id, string especie, string sexo, string fecundacao,
                string pelagem, string deslocamento): Animal(nutricao, risco_extincao, periculosidade, id, 
                especie, sexo, fecundacao), pelagem(pelagem), deslocamento(deslocamento){}

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
