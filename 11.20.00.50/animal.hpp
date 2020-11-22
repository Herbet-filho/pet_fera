#ifndef _ANIMAL_
#define _ANIMAL_

#include <iostream>

#include "funcionario.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"

class Animal{
    private:
        Veterinario vet;
        Tratador tratador;
        string nutricao;
        //string classificacao_s_d;
        bool permissao_ibama;
        bool licenca_transporte;
        string risco_extincao;
        string periculosidade;

    public:
        Animal();
        Animal(string nome_vet, string id_vet, float salario_vet, string crmv_vet,string nome_trat,
                string id_trat, float salario_trat, string nivel_d_seguranca_trat, string nutricao,
                bool permissao_ibama, bool licenca_transporte, string risco_extincao, string periculosidade);
        ~Animal();

        

        void setVeterinario(Veterinario vet);
        Veterinario getVeterinario();
};

#endif
