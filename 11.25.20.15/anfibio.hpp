#ifndef _ANFIBIO_
#define _ANFIBIO_

#include <iostream>
#include "animal.hpp"
#include "tratador.hpp"
#include "veterinario.hpp"
#include "nivelSeguranca.hpp"

class Anfibio: public Animal {
    private:
        Animal* animal;
        string temperatura_ambiente;
        string umidade;
        string muda;
        string respiracao;
        //int capacidade_anfibio = 0;
        static string classe;

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

        /*void setCapacidade_anfibio(int capacidade_anfibio);
        int getCapacidade_anfibio();*/

        
};

#endif