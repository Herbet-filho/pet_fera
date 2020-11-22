#ifndef _TRATADOR_
#define _TRATADOR_

#include <iostream>
#include "funcionario.hpp"
//#include "animais.hpp"

using std::string;


class Tratador : public Funcionario{
    private:
        //Animal lista_animais;
        enum nivelDSeguranca {verde = 0, azul, vermelho};
        nivelDSeguranca nivel_d_seguranca;

    public:
        Tratador();
        Tratador(string nome, string id, float salario, nivelDSeguranca nivel_d_seguranca);
        ~Tratador();

        void setNivelSeguranca(nivelDSeguranca nivel_d_seguranca);
        int getNivelSeguranca();
        void informarNivelSeguranca();

        //void setAnimal(Animal animal);

};

#endif
