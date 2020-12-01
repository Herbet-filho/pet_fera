#ifndef _REPTIL_
#define _REPTIL_

#include <iostream>
#include "animal.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"

class Reptil: public Animal {
    private:
        Animal* animal;
        string locomocao;//rasteja, nada
        string periodoDMuda;

    public:
        Reptil();
        Reptil(Animal &animal, string locomocao, string periodoDMuda);
        ~Reptil();

        void setLocomocao(string locomocao);
        string getLocomocao();

        void setPeriodoDMuda(string periodoDMuda);
        string getPeriodoDMuda();


};

#endif