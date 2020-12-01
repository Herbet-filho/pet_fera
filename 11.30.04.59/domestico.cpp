#include "domestico.hpp"

Domestico::Domestico(){}

Domestico::Domestico(Animal &animal, bool pedigree){
    this->animal = &animal;
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