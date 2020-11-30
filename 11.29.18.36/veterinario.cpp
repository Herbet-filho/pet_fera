#include "veterinario.hpp"
#include "funcionario.hpp"

Veterinario::Veterinario(){}

Veterinario::Veterinario(string nome, string id, float salario, string crmv): 
                        Funcionario(nome, id, salario), crmv(crmv){}

/*Veterinario::Veterinario(Funcionario &vet, string crmv): 
                        vet(&vet), crmv(crmv){}*/

Veterinario::~Veterinario(){}

void Veterinario::setCrmv(string crmv){
    this->crmv = crmv;
}
string Veterinario::getCrmv(){
    return this->crmv;
}