#include <iostream>


#include "animal.hpp"
#include "funcionario.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostream;

Animal::Animal(){}


Animal::Animal(string nutricao, string risco_extincao, bool periculosidade, 
                string id, string especie, string sexo, string fecundacao):
                nutricao(nutricao), risco_extincao(risco_extincao),
                periculosidade(periculosidade), id(id), especie(especie), sexo(sexo),
                fecundacao(fecundacao) {}
        
Animal::~Animal(){}


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

string Animal::getEspecie(){
    return this -> especie;
}

void Animal::setEspecie(string especie){
    this-> especie = especie;
}


bool Animal::getPermissao_ibama(){
    return this-> permissao_ibama;
}
void Animal::setPermissao_ibama(bool permissao_ibama){
    this-> permissao_ibama = permissao_ibama;
}


string Animal::getRisco_extincao(){
    return this-> risco_extincao;
}
void Animal::setRisco_extincao(string risco_extincao){
    this-> risco_extincao = risco_extincao;
}
bool Animal::getPericulosidade(){
    return this-> periculosidade;
}
string Animal::getPericulosidadeNivel(){
    if (this->periculosidade == false){
        return "Não representa perigo/Nivel baixo de periculosidade";
    }

    return "Animal perigoso";
}
void Animal::setPericulosidade(bool periculosidade){
    this -> periculosidade = periculosidade;
}

void Animal::setSexo(string sexo){
    this->sexo = sexo;
}
string Animal::getSexo(){
    return this->sexo;
}

void Animal::setFecundacao(string fecundacao){
    this->fecundacao = fecundacao;
}
string Animal::getFecundacao(){
    return this->fecundacao;
}

void Animal::setClas(Classe clas){
    this-> clas = clas;
}

Classe Animal::getClas(){
    return this->clas;
}

void
Animal::setTip(Tipo tip){
    this-> tip = tip;
}

Tipo
Animal::getTip(){
    return this->tip;
}

string Animal::getNomeVeterinario(){
    return vet-> getNome();
}
string Animal::getIdVeterinario(){
    return vet->getId();
}
void Animal::setVeterinario(Veterinario &vet){
    this-> vet = &vet;
}

string Animal::getNomeTratador(){
    return tratador->getNome();
}
string Animal::getIdTratador(){
    return tratador->getId();
}

void Animal::setTratador(Tratador &tratador){
    this-> tratador = &tratador;
}


string Animal::verifiqueSN(bool opcao){
    if(opcao){
        return "Sim";
    }
    return "Não";
}

ostream& Animal::print(ostream &o){
    o << "Espécie: "<< this->getEspecie() << endl
        << "ID: " << this->getId() << endl
        <<"Nutrição: "<< this->getNutricao() << endl
        <<"Periculosidade: "<< this->getPericulosidadeNivel() << endl
        <<"Risco de extinção: "<< this->getRisco_extincao() << endl
        <<"Tratador responsável: " << this->getNomeTratador()<< endl
        <<"Veterinário responsável: "<< this->getNomeVeterinario() << endl;  
            
    return o;
}

ostream& operator<< (ostream &o, Animal &animal) {
    return animal.print(o);
}

