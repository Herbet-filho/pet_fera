#ifndef _ANFIBIO_NATIVO_
#define _ANFIBIO_NATIVO_

#include "anfibio.hpp"
#include "nativo.hpp"

#include <iostream>

class AnfibioNativo : public Anfibio, public Nativo{
    private:
        ostream& print(ostream &o);
    public:
        AnfibioNativo();

        AnfibioNativo(string nutricao, string risco_extincao, bool periculosidade, 
                        string id, string especie, string sexo, string fecundacao, 
                        string temperatura_ambiente,string umidade, string muda,
                        string respiracao, bool licenca_transporte);

        ~AnfibioNativo();
};

#endif