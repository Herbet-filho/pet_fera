#ifndef _SILVESTRE_
#define _SILVESTRE_

#include <iostream>
#include "animal.hpp"
#include "anfibio.hpp"
#include "ave.hpp"
#include "mamifero.hpp"
#include "reptil.hpp"

class Silvestre: public Anfibio, public Ave, public Mamifero, public Reptil {
    private:
        Anfibio* anfi;
        Ave* av;
        Mamifero* mam;
        Reptil* rept;
        bool permissao_ibama;
        bool licenca_transporte;
    public:
        Silvestre();

        Silvestre(Anfibio &anfi, bool permissao_ibama,bool licenca_transporte);
        Silvestre(Ave &av, bool permissao_ibama,bool licenca_transporte);
        Silvestre(Mamifero &mam, bool permissao_ibama,bool licenca_transporte);
        Silvestre(Reptil &rept, bool permissao_ibama,bool licenca_transporte);

        ~Silvestre();

        bool getPermissao_ibama();
        void setPermissao_ibama(bool permissao_ibama);

        bool getLicenca_transporte();
        void setLicenca_transporte(bool licenca_transporte); 


};

#endif
