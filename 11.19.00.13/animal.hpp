#ifndef _ANIMAL_
#define _ANIMAL_

#include "tratador.hpp"
#include "veterinario.hpp"

class Animal{
    private:
        Veterinario vet;
        Tratador tratador;
        string nutricao;
        string classificacao_s_d;
        bool permissao_ibama;
        bool licenca_transporte;
        string risco_extincao;

    public:
        void setVeterinario(Veterinario vet);
        Veterinario getVeterinario();
};

#endif
