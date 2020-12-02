#ifndef _ANIMAL_
#define _ANIMAL_

#include <iostream>

#include "funcionario.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"


using std::string;
using std::ostream;


class Animal : public Veterinario, public Tratador {
    protected:
        string id;
        Veterinario* vet;
        Tratador* tratador;
        string nutricao;//Carnivoro, herbivoro, onivoro,...
        string risco_extincao;
        bool periculosidade;
        string especie;
        string sexo;
        string fecundacao;//interna ou externa
        bool permissao_ibama;
        bool licenca_transporte; 
        //inserir especie e classe
    public:
        Animal();
        Animal(Veterinario &vet,Tratador &tratador, 
                string nutricao, string risco_extincao, bool periculosidade,string id,
                 string especie, string sexo, string fecundacao);  
        
        Animal(string nutricao, string risco_extincao, bool periculosidade, 
                string id, string especie, string sexo, string fecundacao);
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

        bool getPericulosidade();
        string getPericulosidadeNivel();
        void setPericulosidade(bool periculosidade);

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


       friend ostream& operator<< (ostream &o, Animal animal);
};

#endif
