#ifndef _REPTIL_
#define _REPTIL_

#include <iostream>
#include "animal.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"
#include "nivelSeguranca.hpp"

class Reptil: public Animal {
    private:
        Animal* animal;
        string locomocao;
        string periodoDMuda;
       // static string classe;

    public:
        Reptil();
        Reptil(Animal &animal, string locomocao, string periodoDMuda);
        ~Reptil();

        void setLocomocao(string locomocao);
        string getLocomocao();

        void setPeriodoDMuda(string periodoDMuda);
        string getPeriodoDMuda();

        /*void setCapacidade_reptil(int capacidade_reptil);
        int getCapacidade_reptil();
*/
};

#endif