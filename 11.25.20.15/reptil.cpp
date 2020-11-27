#include "reptil.hpp"

Reptil::Reptil(){
    this->classe = "Reptil";
}

Reptil::Reptil(Animal &animal, string locomocao, string periodoDMuda){
    this->classe = "Reptil";
    this->animal = &animal;
    this->locomocao = locomocao;
    this->periodoDMuda = periodoDMuda;
}

Reptil::~Reptil(){}

void Reptil::setLocomocao(string locomocao){
    this->locomocao = locomocao;
}

string Reptil::getLocomocao(){
    return this->locomocao;
}

void Reptil::setPeriodoDMuda(string periodoDMuda){
    this->periodoDMuda = periodoDMuda;
}

string Reptil::getPeriodoDMuda(){
    return this->periodoDMuda;
}

/*void
Reptil::setCapacidade_reptil(int capacidade_reptil){
    this->capacidade_reptil = capacidade_reptil;
}

int
Reptil::getCapacidade_reptil(){
    return this->capacidade_reptil;
}*/