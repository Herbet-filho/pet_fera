#ifndef _ANFIBIO_EXOTICO_
#define _ANFIBIO_EXOTICO_

#include "anfibio.hpp"
#include "exotico.hpp"

#include <iostream>

class AnfibioExotico : public Anfibio, public Exotico{
    private:
        ostream& print(ostream &o);
    public:
        AnfibioExotico();

        AnfibioExotico(string nutricao, string risco_extincao, bool periculosidade, 
                        string id, string especie, string sexo, string fecundacao, 
                        string temperatura_ambiente,string umidade, string muda,
                        string respiracao, string regiao);

        ~AnfibioExotico();
};

#endif