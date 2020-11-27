#include "ave.hpp"

Ave::Ave(){
    this->classe = "Ave";
}
Ave::Ave(Animal &animal, bool voa, string cor, string tipo){
    this->classe = "Ave";
    this->animal = &animal;
    this->voa = voa;
    this->cor = cor;
    this->tipo = tipo;
    //capacidade_ave = capacidade_ave + 1;
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

/*void
Ave::setCapacidade_ave(int capacidade_ave){
    this->capacidade_ave = capacidade_ave;
}

int Ave::getCapacidade_ave(){
    return this->capacidade_ave;
}*/