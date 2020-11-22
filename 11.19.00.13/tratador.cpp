#include "tratador.hpp"

Tratador::Tratador(){}

void Tratador::setNivelSeguranca(string nivel_d_seguranca){
    this->nivel_d_seguranca = nivel_d_seguranca;
}

string Tratador::getNivelSeguranca(){
    return this -> nivel_d_seguranca;
}

//void Tratador::setAnimal(Animal animal){}