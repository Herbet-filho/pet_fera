#ifndef _AVE_EXOTICA_
#define _AVE_EXOTICA_

#include "ave.hpp"
#include "exotico.hpp"

#include <iostream>

class AveExotica : public Ave, public Exotico{
    private:
        ostream& print(ostream &o);

    public:
        AveExotica();

        AveExotica(string nutricao, string risco_extincao, bool periculosidade, 
                    string id, string especie, string sexo, string fecundacao,
                    bool voa, string cor, string tipo, string regiao);

        ~AveExotica();
};

#endif