#include "silvestre.hpp"

Silvestre::Silvestre(){}
        
Silvestre::Silvestre(bool permissao_ibama,bool licenca_transporte,tipos natiExo){
    this->permissao_ibama = permissao_ibama;
    this->licenca_transporte = licenca_transporte;
    this->natiExo = natiExo;
}
        
Silvestre::~Silvestre(){}

bool Silvestre::getPermissao_ibama(){
    return this-> permissao_ibama;
}
void Silvestre::setPermissao_ibama(bool permissao_ibama){
    this-> permissao_ibama = permissao_ibama;
}

bool Silvestre::getLicenca_transporte(){
    return this -> licenca_transporte;
}
void Silvestre::setLicenca_transporte(bool licenca_transporte){
    this -> licenca_transporte = licenca_transporte;
}

