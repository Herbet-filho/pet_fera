#include "exotico.hpp"

Exotico::Exotico(){}

Exotico::Exotico(string regiao): regiao(regiao){}

Exotico::~Exotico(){}

string Exotico::getRegiao(){
    return this->regiao;
}

void Exotico::setRegiao(string regiao){
    this->regiao = regiao;
}

