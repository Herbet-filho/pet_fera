#ifndef _AVE_NATIVA_
#define _AVE_NATIVA_

#include "ave.hpp"
#include "nativo.hpp"

#include <iostream>

class AveNativa : public Ave, public Nativo{
    private:
        ostream& print(ostream &o);

    public:
        AveNativa();

        AveNativa(string nutricao, string risco_extincao, bool periculosidade, 
                    string id, string especie, string sexo, string fecundacao,
                    bool voa, string cor, string tipo, bool licenca_transporte);

        ~AveNativa();
};

#endif