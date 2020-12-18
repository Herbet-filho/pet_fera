#include "domestico.hpp"


Domestico::Domestico(){}

Domestico::Domestico(bool pedigree): pedigree(pedigree){}

Domestico::~Domestico(){}

bool
Domestico::getPedigree(){
    return this->pedigree;
}

string Domestico::getPedigreeSN(){
    if(this->getPedigree()){
        return "Sim";
    }
    return "Não";
}

void
Domestico::setPedigree(bool pedigree){
    this->pedigree = pedigree;
}