#include "silvestre.hpp"

Silvestre::Silvestre(){}
        
Silvestre::Silvestre(Anfibio &anfi, bool permissao_ibama,bool licenca_transporte){
    this->anfi = &anfi;
    this->permissao_ibama = permissao_ibama;
    this->licenca_transporte = licenca_transporte;
}

Silvestre::Silvestre(Ave &av, bool permissao_ibama,bool licenca_transporte){
    this->av = &av;
    this->permissao_ibama = permissao_ibama;
    this->licenca_transporte = licenca_transporte;
}

Silvestre::Silvestre(Mamifero &mam, bool permissao_ibama,bool licenca_transporte){
    this->mam = &mam;
    this->permissao_ibama = permissao_ibama;
    this->licenca_transporte = licenca_transporte;
}

Silvestre::Silvestre(Reptil &rept, bool permissao_ibama,bool licenca_transporte){
    this->rept = &rept;
    this->permissao_ibama = permissao_ibama;
    this->licenca_transporte = licenca_transporte;
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

