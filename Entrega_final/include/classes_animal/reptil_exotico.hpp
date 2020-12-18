#ifndef _REPTIL_EXOTICO_
#define _REPTIL_EXOTICO_

#include <iostream>
#include "reptil.hpp"
#include "exotico.hpp"

class ReptilExotico: public Reptil, public Exotico{
    private:
        ostream& print(ostream &o);

    public:
        ReptilExotico();

        ReptilExotico(string nutricao, string risco_extincao, bool periculosidade, 
                        string id, string especie, string sexo, string fecundacao,
                        string locomocao, string periodoDMuda, string regiao);

        ~ReptilExotico();

};
#endif