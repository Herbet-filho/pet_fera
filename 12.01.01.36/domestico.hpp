#ifndef _DOMESTICO_
#define _DOMESTICO_

#include <iostream>

class Domestico {
    private:
        bool pedigree;
    public:
        Domestico();
        Domestico(bool pedigree);
        ~Domestico();
        
        void setPedigreedomestico(bool pedigree);
        bool getPedigreedomestico();

};
#endif