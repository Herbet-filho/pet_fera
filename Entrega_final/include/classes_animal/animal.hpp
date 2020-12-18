#ifndef _ANIMAL_
#define _ANIMAL_

#include <iostream>

#include "funcionario.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"


using std::string;
using std::ostream;

enum Classe{
    ANFIBIO = 1,
    AVE,
    MAMIFERO,
    REPTIL
};

enum Tipo{
    DOMESTICO = 1,
    EXOTICO,
    NATIVO
};


class Animal{
    protected:
        Veterinario* vet;
        Tratador* tratador;
        string nutricao;//Carnivoro, herbivoro, onivoro,...
        string risco_extincao;
        bool periculosidade;
        string id;
        string especie;
        string sexo;
        string fecundacao;//interna ou externa
        bool permissao_ibama;
        Classe clas;
        Tipo tip;

    public:
        Animal();

        
        Animal(string nutricao, string risco_extincao, bool periculosidade, 
                string id, string especie, string sexo, string fecundacao);
        
        virtual ~Animal();

        void setId(string id);
        string getId();

        string getNutricao();
        void setNutricao(string nutricao);

        string getEspecie();
        void setEspecie(string especie);

        bool getPermissao_ibama();
        void setPermissao_ibama(bool permissao_ibama);

        string getRisco_extincao();
        void setRisco_extincao(string risco_extincao);

        bool getPericulosidade();
        string getPericulosidadeNivel();
        void setPericulosidade(bool periculosidade);

        void setSexo(string sexo);
        string getSexo();

        void setFecundacao(string fecundacao);
        string getFecundacao();

        void setClas(Classe clas);
        Classe getClas();

        void setTip(Tipo tip);
        Tipo getTip();

        string getNomeVeterinario();
        string getIdVeterinario();
        void setVeterinario(Veterinario &vet);

        void setTratador(Tratador &tratador);
        string getNomeTratador();
        string getIdTratador();


        string verifiqueSN(bool opcao);

        


       friend ostream& operator<< (ostream &o, Animal &animal); 

    private:
        
        virtual ostream& print(ostream &o);

};

#endif
