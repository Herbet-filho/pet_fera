#include "funcionario.hpp"
#include <iostream>

Funcionario::Funcionario(){}

Funcionario::Funcionario(string nome, string id, float salario):
                        nome(nome),id(id),salario(salario){}

Funcionario::~Funcionario(){}

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


ostream& operator<< (ostream &o, Funcionario &funcionario) {
	return funcionario.print(o);
}