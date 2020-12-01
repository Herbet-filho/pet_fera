#ifndef _NIVELSEGURANCA_
#define _NIVELSEGURANCA_

#include <iostream>

class NivelSeguranca{
    protected:
        int nivel;
    public:
        NivelSeguranca();
        NivelSeguranca(int n);
        ~NivelSeguranca();

        void setNivel(int n);
        int getNivel();

        NivelSeguranca& operator=(NivelSeguranca &ns);
};


#endif