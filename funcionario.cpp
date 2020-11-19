#include "funcionario.hpp"

Funcionario::Funcionario(){}

void Funcionario::setNome(string nome){
    this->nome = nome;
}
string Funcionario::getNome(){
    return nome;
}

void Funcionario::setId(string id){
    this->id = id;
}
string Funcionario::getId(){
    return id;
}

void Funcionario::setSalario(float salario){
    this->salario = salario;
}
float Funcionario::getSalario(){
    return salario;
}