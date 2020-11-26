#ifndef SILVESTRE
#define SILVESTRE

#include <iostream>
#include "animal.hpp"

enum tipos{
    nativos,
    exoticos
};

class Silvestre{
    private:
        bool permissao_ibama;
        bool licenca_transporte;
        tipos natiExo;
    public:
        Silvestre();

        Silvestre(bool permissao_ibama,bool licenca_transporte,tipos natiExo);

        ~Silvestre();

        bool getPermissao_ibama();
        void setPermissao_ibama(bool permissao_ibama);

        bool getLicenca_transporte();
        void setLicenca_transporte(bool licenca_transporte); 


};

#endif
