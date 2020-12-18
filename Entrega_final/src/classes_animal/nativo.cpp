#include "nativo.hpp"


Nativo::Nativo(){}

Nativo::Nativo(bool licenca_transporte): licenca_transporte(licenca_transporte){}

Nativo::~Nativo(){}

bool
Nativo::getLicenca_transporte(){
    return this -> licenca_transporte;
}

string Nativo::getLicenca_transporteSN(){
    return verifiqueSN(this->getLicenca_transporte());
}

void
Nativo::setLicenca_transporte(bool licenca_transporte){
    this -> licenca_transporte = licenca_transporte;
}

string Nativo::verifiqueSN(bool opcao){
    if(opcao){
        return "Sim";
    }
    return "Não";
}