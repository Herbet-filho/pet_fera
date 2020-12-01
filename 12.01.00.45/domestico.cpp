#include "domestico.hpp"

Domestico::Domestico(){}


Domestico::Domestico(bool pedigree){
    this->pedigree = pedigree;
}


Domestico::~Domestico(){}

void
Domestico::setPedigree(bool pedigree){
    this->pedigree = pedigree;
}

bool
Domestico::getPedigree(){
    return this->pedigree;
}