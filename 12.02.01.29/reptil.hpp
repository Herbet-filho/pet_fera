#ifndef _REPTIL_
#define _REPTIL_

#include <iostream>
#include "animal.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"

class Reptil: public Animal {
    private:
        //Animal* animal;
        string locomocao;//rasteja, nada
        string periodoDMuda;

    public:
        Reptil();
        Reptil(string nutricao, string risco_extincao, bool periculosidade, 
                string id, string especie, string sexo, string fecundacao,
                 string locomocao, string periodoDMuda);
        ~Reptil();

        void setLocomocao(string locomocao);
        string getLocomocao();

        void setPeriodoDMuda(string periodoDMuda);
        string getPeriodoDMuda();


};

#endif