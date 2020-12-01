#ifndef _MAMIFERO_
#define _MAMIFERO_

#include <iostream>
#include "animal.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"
#include "nivelSeguranca.hpp"


class Mamifero: public Animal {
    private:
        Animal* animal;
        string pelagem;
        string deslocamento;
        //static string classe;
        //int capacidade_mamifero = 0;

    public:
        Mamifero();
        Mamifero(Animal &animal, string pelagem, string deslocamento);
        ~Mamifero();

        void setPelagem(string pelagem);
        string getPelagem();

        void setDeslocamento(string deslocamento);
        string getDeslocamento();

        /*void setCapacidade_mamifero(int capacidade_mamifero);
        int getCapacidade_mamifero();
      */
};

#endif