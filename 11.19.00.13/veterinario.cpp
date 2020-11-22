#include "veterinario.hpp"

Veterinario::Veterinario(){}

Veterinario::Veterinario(Funcionario vet, string crmv): 
                        vet(vet), crmv(crmv){}

Veterinario::~Veterinario(){}

void Veterinario::setCrmv(string crmv){
    this->crmv = crmv;
}
string Veterinario::getCrmv(){
    return this->crmv;
}