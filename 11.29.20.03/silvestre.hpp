#ifndef _SILVESTRE_
#define _SILVESTRE_

#include <iostream>
#include "animal.hpp"

class Silvestre: public Animal {
    private:
        Animal* animal;
        bool permissao_ibama;
        bool licenca_transporte;
    public:
        Silvestre();

        Silvestre(Animal &animal, bool permissao_ibama,bool licenca_transporte);

        ~Silvestre();

        bool getPermissao_ibama();
        void setPermissao_ibama(bool permissao_ibama);

        bool getLicenca_transporte();
        void setLicenca_transporte(bool licenca_transporte); 


};

#endif
