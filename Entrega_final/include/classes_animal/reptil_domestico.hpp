#ifndef _REPTIL_DOMESTICO_
#define _REPTIL_DOMESTICO_

#include <iostream>
#include "reptil.hpp"
#include "domestico.hpp"

class ReptilDomestico: public Reptil, public Domestico{
    private:
        ostream& print(ostream &o);

    public:
        ReptilDomestico();

        ReptilDomestico(string nutricao, string risco_extincao, bool periculosidade, 
                        string id, string especie, string sexo, string fecundacao,
                        string locomocao, string periodoDMuda, bool pedigree);

        ~ReptilDomestico();

};
#endif