#ifndef _REPTIL_NATIVO_
#define _REPTIL_NATIVO_

#include <iostream>
#include "reptil.hpp"
#include "nativo.hpp"

class ReptilNativo: public Reptil, public Nativo{
    private:
        ostream& print(ostream &o);

    public:
        ReptilNativo();

        ReptilNativo(string nutricao, string risco_extincao, bool periculosidade, 
                        string id, string especie, string sexo, string fecundacao,
                        string locomocao, string periodoDMuda, bool licenca_transporte);

        ~ReptilNativo();

};
#endif