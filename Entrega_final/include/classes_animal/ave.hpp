#ifndef _AVE_
#define _AVE_

#include <iostream>
#include "animal.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"


class Ave : public Animal{
    private:
        bool voa; 
        string cor;
        string tipo;
        

    public:
        Ave();
        Ave(string nutricao, string risco_extincao, bool periculosidade, 
                string id, string especie, string sexo, string fecundacao,
                bool voa, string cor, string tipo);
        virtual ~Ave();

        void setVoa(bool voa);
        bool getVoa();
        string getVoaSN();

        void setCor(string cor);
        string getCor();

        void setTipo(string tipo);
        string getTipo();


};

#endif