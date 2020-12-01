#include "reptil.hpp"

Reptil::Reptil(){}

Reptil::Reptil(Animal &animal, string locomocao, string periodoDMuda){
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
