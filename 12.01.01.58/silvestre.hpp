#ifndef _SILVESTRE_
#define _SILVESTRE_

#include <iostream>


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

        bool getLicenca_transportesilvestre();
        void setLicenca_transporte(bool licenca_transporte); 


};

#endif
