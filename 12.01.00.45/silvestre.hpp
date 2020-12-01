#ifndef _SILVESTRE_
#define _SILVESTRE_

#include <iostream>
#include "animal.hpp"
#include "anfibio.hpp"
#include "ave.hpp"
#include "mamifero.hpp"
#include "reptil.hpp"

class Silvestre {
    protected:
        bool permissao_ibama;
        bool licenca_transporte;
    public:
        Silvestre();
        Silvestre(bool permissao_ibama,bool licenca_transporte);
        ~Silvestre();

        bool getPermissao_ibamasilvestre();
        void setPermissao_ibama(bool permissao_ibama);

        bool getLicenca_transporte();
        void setLicenca_transporte(bool licenca_transporte); 


};

#endif
