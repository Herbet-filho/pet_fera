#ifndef _MAMIFERO_NATIVO_
#define _MAMIFERO_NATIVO_

#include <iostream>
#include "mamifero.hpp"
#include "nativo.hpp"

class MamiferoNativo: public Mamifero, public Nativo {
    private:
        ostream& print(ostream &o);

    public:
        MamiferoNativo();

        MamiferoNativo(string nutricao, string risco_extincao, bool periculosidade, 
                        string id, string especie, string sexo, string fecundacao,
                        string pelagem, string deslocamento, bool licenca_transporte);

        ~MamiferoNativo();

};
#endif