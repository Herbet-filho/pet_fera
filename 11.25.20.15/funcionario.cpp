#include "funcionario.hpp"

Funcionario::Funcionario(){}

Funcionario::Funcionario(string nome, string id, float salario):
                        nome(nome),id(id),salario(salario){}

Funcionario::~Funcionario(){ //ei aqui tem q deletar so 1 funcionario ñ???
    /*for(int i=0; i < Funcionario.getQuantidade();i++){
        delete this -> Funcionario[i];
    }*/
}

void Funcionario::setNome(string nome){
    this->nome = nome;
}
string Funcionario::getNome(){
    return this -> nome;
}

void Funcionario::setId(string id){
    this->id = id;
}
string Funcionario::getId(){
    return this -> id;
}

void Funcionario::setSalario(float salario){
    this->salario = salario;
}
float Funcionario::getSalario(){
    return this -> salario;
}

int Funcionario::getQuantidade(){
    return this -> quantidade;
}
void Funcionario::setQuantidade(int quantidade){
    this -> quantidade = quantidade;
}