#ifndef _NATIVO_
#define _NATIVO_

#include <iostream>
using std::string;

class Nativo{
    private:
        bool licenca_transporte;
    public:
        Nativo();

        Nativo(bool licenca_transporte);

        virtual ~Nativo();

        bool getLicenca_transporte();
        string getLicenca_transporteSN();
        void setLicenca_transporte(bool licenca_transporte);

        string verifiqueSN(bool opcao);

};

#endif