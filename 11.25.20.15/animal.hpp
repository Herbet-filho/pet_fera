#ifndef _ANIMAL_
#define _ANIMAL_

#include <iostream>

#include "funcionario.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"
#include "nivelSeguranca.hpp"

using std::string;

class Animal : public Veterinario, public Tratador {
    private:
        string id;
        Veterinario* vet;
        Tratador* tratador;
        string nutricao;
        //string classificacao_s_d;
        bool permissao_ibama;
        bool licenca_transporte;
        string risco_extincao;
        string periculosidade;
        string especie;
        string sexo;
        string fecundacao;      //interna ou externa
        //inserir especie e classe
    public:
        Animal();
        Animal(Veterinario &vet,Tratador &tratador, 
                string nutricao, bool permissao_ibama, bool licenca_transporte, 
                string risco_extincao, string periculosidade,string id,
                 string especie, string sexo, string fecundacao);  

        ~Animal();

        void setId(string id);
        string getId();

        string getNutricao();
        void setNutricao(string nutricao);

        string getEspecie();
        void setEspecie(string especie);

        bool getPermissao_ibama();
        void setPermissao_ibama(bool permissao_ibama);

        bool getLicenca_transporte();
        void setLicenca_transporte(bool licenca_transporte);

        string getRisco_extincao();
        void setRisco_extincao(string risco_extincao);

        string getPericulosidade();
        void setPericulosidade(string periculosidade);

        void setSexo(string sexo);
        string getSexo();

        void setFecundacao(string fecundacao);
        string getFecundacao();

        string getNomeVeterinario();
        string getIdVeterinario();
        void setVeterinario(Veterinario &vet);

        void setTratador(Tratador &tratador);
        string getNomeTratador();
        string getIdTratador();

        //inserir get e set de classe e especie
};
#endif
