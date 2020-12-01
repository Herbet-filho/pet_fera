#ifndef _DOMESTICO_
#define _DOMESTICO_

#include <iostream>
#include "animal.hpp"
#include "anfibio.hpp"
#include "ave.hpp"
#include "mamifero.hpp"
#include "reptil.hpp"

class Domestico: public Anfibio, public Ave, public Mamifero, public Reptil {
    private:
        Anfibio* anfi;
        Ave* av;
        Mamifero* mam;
        Reptil* rept;
        bool pedigree;
    public:
        Domestico();
        Domestico(Anfibio &anfi, bool pedigree);
        Domestico(Ave &av, bool pedigree);
        Domestico(Mamifero &mam, bool pedigree);
        Domestico(Reptil &rept, bool pedigree);
        ~Domestico();
        
        void setPedigree(bool pedigree);
        bool getPedigree();

};
#endif