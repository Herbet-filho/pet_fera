#ifndef _AVE_
#define _AVE_

#include <iostream>
#include "animal.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"
#include "nivelSeguranca.hpp"

class Ave : public Animal{
    private:
        Animal* animal;
        bool voa;
        string cor;
        string tipo;
        static string classe;
        //int capacidade_ave = 0;

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

       /* void setCapacidade_ave(int capacidade_ave);
        int getCapacidade_ave();*/

};

#endif