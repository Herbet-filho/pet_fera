#ifndef _EXOTICO_
#define _EXOTICO_  

#include <iostream>

using std::string;

class Exotico{
    private:
        string regiao;
    public:    
        Exotico();
        Exotico(string regiao);
        virtual ~Exotico();

        string getRegiao();
        void setRegiao(string regiao);
};


#endif