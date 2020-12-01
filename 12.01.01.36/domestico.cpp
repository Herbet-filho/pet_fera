#include "domestico.hpp"

Domestico::Domestico(){}


Domestico::Domestico(bool pedigree){
    this->pedigree = pedigree;
}


Domestico::~Domestico(){}

void
Domestico::setPedigreedomestico(bool pedigree){
    this->pedigree = pedigree;
}

bool
Domestico::getPedigreedomestico(){
    return this->pedigree;
}