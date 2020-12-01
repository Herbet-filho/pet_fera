#include "nivelSeguranca.hpp"

using std::cout;
using std::cin;
using std::endl;

void NivelSeguranca::setNivel(int n){
    

    this->nivel = n;
}
int NivelSeguranca::getNivel(){
    return this-> nivel;
}

NivelSeguranca::NivelSeguranca(){}

NivelSeguranca::NivelSeguranca(int n){
    setNivel(n);
}
NivelSeguranca::~NivelSeguranca(){}

NivelSeguranca& NivelSeguranca::operator=(NivelSeguranca &ns){
    nivel = ns.nivel;
    return *this;
}