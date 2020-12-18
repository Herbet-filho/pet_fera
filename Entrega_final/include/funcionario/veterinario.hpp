#ifndef _VETERINARIO_
#define _VETERINARIO_

#include <iostream>
#include "funcionario.hpp"

using std::string;
using std::ostream;
using std::endl;

class Veterinario : public Funcionario{
    private:
        ostream& print(ostream &o);
        string crmv;

    public:
        Veterinario();

        Veterinario(string nome, string id, float salario, string crmv);


        ~Veterinario();

        void setCrmv(string crmv);
        string getCrmv();


};

#endif