#ifndef _TRATADOR_
#define _TRATADOR_

#include <iostream>
#include "funcionario.hpp"


using namespace std;


class Tratador : public Funcionario{
    private:
        Funcionario* tratador;
        int nivel_d_seguranca;

    public:
        Tratador();
        Tratador(string nome, string id, float salario, int nivel_d_seguranca);
        ~Tratador();

        void setNivelSeguranca(int n);
        int getNivelSeguranca();
        string getNivelSegurancaCor();
        
        friend ostream& operator<< (ostream &o, Tratador tratador);


};

#endif
