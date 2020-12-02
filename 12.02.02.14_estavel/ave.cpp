#include "ave.hpp"

Ave::Ave(){
}
Ave::Ave(string nutricao, string risco_extincao, bool periculosidade, 
                string id, string especie, string sexo, string fecundacao, 
                bool voa, string cor, string tipo): Animal(nutricao, risco_extincao, periculosidade, id,
                especie, sexo,fecundacao), voa(voa), cor(cor), tipo(tipo){}

Ave::~Ave(){}

void Ave::setVoa(bool voa){
    this->voa = voa;
}
bool Ave::getVoa(){
    return this->voa;
}

void Ave::setCor(string cor){
    this->cor = cor;
}
string Ave::getCor(){
    return this->cor;
}

void Ave::setTipo(string tipo){
    this->tipo = tipo;
}
string Ave::getTipo(){
    return this->tipo;
}
