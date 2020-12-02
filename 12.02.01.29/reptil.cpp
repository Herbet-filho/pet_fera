#include "reptil.hpp"

Reptil::Reptil(){}

Reptil::Reptil(string nutricao, string risco_extincao, bool periculosidade, 
                string id, string especie, string sexo, string fecundacao,
                string locomocao, string periodoDMuda): Animal(nutricao, risco_extincao, periculosidade, 
                id, especie, sexo, fecundacao), locomocao(locomocao), periodoDMuda(periodoDMuda){}

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
