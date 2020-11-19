#ifndef _ANIMAIS_
#define _ANIMAIS_

#include "tratador.hpp"

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
