#ifndef _DOMESTICO_
#define _DOMESTICO_

#include <iostream>

using std::string;

class Domestico {
    private:
        bool pedigree;
    
    public:
        Domestico();

        Domestico(bool pedigree);

        virtual ~Domestico();

        bool getPedigree();
        string getPedigreeSN();
        void setPedigree(bool pedigree);
};


#endif