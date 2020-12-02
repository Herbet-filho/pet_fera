#ifndef _MAMIFERO_
#define _MAMIFERO_

#include <iostream>
#include "animal.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"


class Mamifero: public Animal {
    private:
        Animal* animal;
        string pelagem;
        string deslocamento;

    public:
        Mamifero();
        Mamifero(Animal &animal, string pelagem, string deslocamento);
        ~Mamifero();

        void setPelagem(string pelagem);
        string getPelagem();

        void setDeslocamento(string deslocamento);
        string getDeslocamento();

};

#endif