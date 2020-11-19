#include "funcionario.hpp"

Funcionario::Funcionario(){}

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
