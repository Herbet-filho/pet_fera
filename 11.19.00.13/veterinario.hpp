#ifndef _VETERINARIO_
#define _VETERINARIO_

#include <iostream>
#include "funcionario.hpp"
using std::string;

class Veterinario{
    private:
        Funcionario vet;
        string crmv;

    public:
        Veterinario();

        Veterinario(Funcionario vet, string crmv);

        ~Veterinario();

        void setCrmv(string crmv);
        string getCrmv();
};

#endif