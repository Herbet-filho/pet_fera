#ifndef _AVE_DOMESTICA_
#define _AVE_DOMESTICA_

#include "ave.hpp"
#include "domestico.hpp"

#include <iostream>

class AveDomestica : public Ave, public Domestico{
    private:
        ostream& print(ostream &o);
    
    public:
        AveDomestica();

        AveDomestica(string nutricao, string risco_extincao, bool periculosidade, 
                    string id, string especie, string sexo, string fecundacao,
                    bool voa, string cor, string tipo, bool pedigree);

        ~AveDomestica();
};

#endif