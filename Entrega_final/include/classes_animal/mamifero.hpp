#ifndef _MAMIFERO_
#define _MAMIFERO_

#include <iostream>
#include "animal.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"


class Mamifero: public Animal {
    private:
    
        string pelagem;
        string deslocamento;


    public:
        Mamifero();
        Mamifero(string nutricao, string risco_extincao, bool periculosidade, 
                string id, string especie, string sexo, string fecundacao,
                string pelagem, string deslocamento);
        virtual ~Mamifero();

        void setPelagem(string pelagem);
        string getPelagem();

        void setDeslocamento(string deslocamento);
        string getDeslocamento();

};

#endif