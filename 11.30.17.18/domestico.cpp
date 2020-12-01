#include "domestico.hpp"

Domestico::Domestico(){}


Domestico::Domestico(Anfibio &anfi, bool pedigree){
    this->anfi = &anfi;
    this->pedigree = pedigree;
}

Domestico::Domestico(Ave &av, bool pedigree){
    this->av = &av;
    this->pedigree = pedigree;
}

Domestico::Domestico(Mamifero &mam, bool pedigree){
    this->mam = &mam;
    this->pedigree = pedigree;
}

Domestico::Domestico(Reptil &rept, bool pedigree){
    this->rept = &rept;
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