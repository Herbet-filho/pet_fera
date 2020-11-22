#ifndef _ANIMAL_
#define _ANIMAL_

#include <iostream>

#include "funcionario.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"
#include "nivelSeguranca.hpp"


class Animal : public Veterinario, public Tratador {
    private:
        string nome;
        string id;
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
        Animal(Veterinario &vet,Tratador &tratador, 
                string nutricao, bool permissao_ibama, bool licenca_transporte, 
                string risco_extincao, string periculosidade);
        ~Animal();

        void setNome(string nome);
        string getNome();

        void setId(string id);
        string getId();

        string getNutricao();
        void setNutricao(string nutricao);

        bool getPermissao_ibama();
        void setPermissao_ibama(bool permissao_ibama);

        bool getLicenca_transporte();
        void setLicenca_transporte(bool licenca_transporte);

        string getRisco_extincao();
        void setRisco_extincao(string risco_extincao);

        string getPericulosidade();
        void setPericulosidade(string periculosidade);

        Veterinario getVeterinario();
        void setVeterinario(Veterinario &vet);

        void setTratador(Tratador &tratador);
        Tratador getTratador();
};

#endif
