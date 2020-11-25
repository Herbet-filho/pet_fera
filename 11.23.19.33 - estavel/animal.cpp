#include <iostream>

#include "animal.hpp"
#include "funcionario.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"
#include "nivelSeguranca.hpp"

using std::cout;

Animal::Animal(){}

/*Animal::Animal(Veterinario &vet,Tratador &tratador, 
                string nutricao, bool permissao_ibama, bool licenca_transporte, 
                string risco_extincao, string periculosidade):
                Veterinario(vet), Tratador(tratador),
                nutricao(nutricao), permissao_ibama(permissao_ibama),
                licenca_transporte(licenca_transporte), risco_extincao(risco_extincao),
                periculosidade(periculosidade){
                    cout << this-> getVeterinario() << endl;
                }*/

Animal::Animal(Veterinario &vet,Tratador &tratador, 
                string nutricao, bool permissao_ibama, bool licenca_transporte, 
                string risco_extincao, string periculosidade){
                    this-> vet = &vet;
                    this-> tratador = &tratador;
                    this-> nutricao = nutricao;
                    this-> permissao_ibama = permissao_ibama;
                    this-> licenca_transporte = licenca_transporte;
                    this-> risco_extincao = risco_extincao;
                    this-> periculosidade = periculosidade;
                }
        
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

string
Animal::getEspecie(){
    return this -> especie;
}

void
Animal::setEspecie(string especie){
    this -> especie = especie;
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
string Animal::getVeterinario(){
    //cout << vet -> getNome() << endl;
    return vet -> getCrmv();
}
void Animal::setVeterinario(Veterinario &vet){
    this-> vet = &vet;
}
string Animal::getTratador(){
    cout << tratador->getId()<< endl;
    return tratador->getNome();
}
void Animal::setTratador(Tratador &tratador){
    this-> tratador = &tratador;
}
