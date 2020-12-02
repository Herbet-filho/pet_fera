#ifndef _ANFIBIO_
#define _ANFIBIO_

#include <iostream>
#include "animal.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"

class Anfibio: public Animal {
    private:
        Animal* animal;
        string temperatura_ambiente;//Na qual deve ser mantido
        string umidade; 
        string muda; //periodo da muda
        string respiracao; //tipo de respiraçao pela fase de vida
        

    public:
        Anfibio();
        Anfibio(Animal &animal, string temperatura_ambiente,string umidade, string muda,
                 string respiracao);
        ~Anfibio();

        void setTemperatura_ambiente(string temperatura_ambiente);
        string getTemperatura_ambiente();

        void setUmidade(string umidade);
        string getUmidade();

        void setMuda(string muda);
        string getMuda();

        void setRespiracao(string respiracao);
        string getRespiracao();

        
};

#endif