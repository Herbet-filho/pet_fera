#ifndef _ANFIBIO_DOMESTICO_
#define _ANFIBIO_DOMESTICO_

#include "anfibio.hpp"
#include "domestico.hpp"

#include <iostream>

class AnfibioDomestico : public Anfibio, public Domestico{
    private:
        ostream& print(ostream &o);
    public:
        AnfibioDomestico();

        AnfibioDomestico(string nutricao, string risco_extincao, bool periculosidade, 
                        string id, string especie, string sexo, string fecundacao, 
                        string temperatura_ambiente,string umidade, string muda,
                        string respiracao, bool pedigree);

        ~AnfibioDomestico();
};

#endif