#ifndef _AVE_
#define _AVE_

#include <iostream>
#include "animal.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"


class Ave : public Animal{
    private:
        Animal* animal;
        bool voa; 
        string cor;
        string tipo;

    public:
        Ave();
        Ave(Animal &animal, bool voa, string cor, string tipo);
        ~Ave();

        void setVoa(bool voa);
        bool getVoa();

        void setCor(string cor);
        string getCor();

        void setTipo(string tipo);
        string getTipo();


};

#endif