#include "ave.hpp"

Ave::Ave(){
}
Ave::Ave(Animal &animal, bool voa, string cor, string tipo){
    this->animal = &animal;
    this->voa = voa;
    this->cor = cor;
    this->tipo = tipo;
}
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
