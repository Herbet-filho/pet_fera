#ifndef _DOMESTICO_
#define _DOMESTICO_

#include <iostream>
#include "animal.hpp"

class Domestico: public Animal {
    private:
        Animal* animal;
        bool pedigree;
    public:
        Domestico();
        Domestico(Animal &animal, bool pedigree);
        ~Domestico();

        void setPedigree(bool pedigree);
        bool getPedigree();

};
#endif