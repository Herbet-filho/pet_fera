#ifndef _MAMIFERO_DOMESTICO_
#define _MAMIFERO_DOMESTICO_

#include <iostream>
#include "mamifero.hpp"
#include "domestico.hpp"

class MamiferoDomestico: public Mamifero, public Domestico {
    private:
        ostream& print(ostream &o);

    public:
        MamiferoDomestico();

        MamiferoDomestico(string nutricao, string risco_extincao, bool periculosidade, 
                        string id, string especie, string sexo, string fecundacao,
                        string pelagem, string deslocamento, bool pedigree);

        ~MamiferoDomestico();

};
#endif