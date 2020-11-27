#ifndef _VETERINARIO_
#define _VETERINARIO_

#include <iostream>
#include "funcionario.hpp"

using std::string;

class Veterinario : public Funcionario{
    private:
        Funcionario* vet;
        string crmv;

    public:
        Veterinario();

        Veterinario(string nome, string id, float salario, string crmv);

        //Veterinario(Funcionario &vet, string crmv);

        ~Veterinario();

        void setCrmv(string crmv);
        string getCrmv();

};

#endif