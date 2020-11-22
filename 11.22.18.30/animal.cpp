#include <iostream>

#include "animal.hpp"
#include "funcionario.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"
#include "nivelSeguranca.hpp"


Animal::Animal(){}

Animal::Animal(Veterinario &vet,Tratador &tratador, 
                string nutricao, bool permissao_ibama, bool licenca_transporte, 
                string risco_extincao, string periculosidade):
                Veterinario(vet), Tratador(tratador),
                nutricao(nutricao), permissao_ibama(permissao_ibama),
                licenca_transporte(licenca_transporte), risco_extincao(risco_extincao),
                periculosidade(periculosidade){}
        
Animal::~Animal(){}

void Animal::setNome(string nome){
    this->nome = nome;
}
string Animal::getNome(){
    return this->nome;
}

void Animal::setId(string id){
    this->id = id;
}
string Animal::getId(){
    return this->id;
}

string Animal::getNutricao(){
    return this -> nutricao;
}
void Animal::setNutricao(string nutricao){
    this -> nutricao = nutricao;
}

bool Animal::getPermissao_ibama(){
    return this -> permissao_ibama;
}
void Animal::setPermissao_ibama(bool permissao_ibama){
    this -> permissao_ibama = permissao_ibama;
}

bool Animal::getLicenca_transporte(){
    return this -> licenca_transporte;
}
void Animal::setLicenca_transporte(bool licenca_transporte){
    this -> licenca_transporte = licenca_transporte;
}

string Animal::getRisco_extincao(){
    return this -> risco_extincao;
}
void Animal::setRisco_extincao(string risco_extincao){
    this -> risco_extincao = risco_extincao;
}
string Animal::getPericulosidade(){
    return this-> periculosidade;
}
void Animal::setPericulosidade(string periculosidade){
    this -> periculosidade = periculosidade;
}
Veterinario Animal::getVeterinario(){
    return this-> vet;
}
void Animal::setVeterinario(Veterinario &vet){
    this-> vet = vet;
}
Tratador Animal::getTratador(){
    return this -> tratador;
}
void Animal::setTratador(Tratador &tratador){
    this -> tratador = tratador;
}
