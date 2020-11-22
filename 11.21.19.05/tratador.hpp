#ifndef _TRATADOR_
#define _TRATADOR_

#include <iostream>
#include "funcionario.hpp"
#include "nivelSeguranca.hpp"
//#include "animais.hpp"

using std::string;


class Tratador : public Funcionario, NivelSeguranca{
    private:
        //Animal lista_animais;
        //enum nivelDSeguranca {verde = 0, azul, vermelho};
        NivelSeguranca nivel_d_seguranca;

    public:
        Tratador();
        Tratador(string nome, string id, float salario, NivelSeguranca nivel_d_seguranca);
        ~Tratador();

        //void setNivelSeguranca(nivelDSeguranca nivel_d_seguranca);
        int getNivelSeguranca();
        //void informarNivelSeguranca();

       /* friend std::istream& operator>> (std::istream &i, Tratador alg);*/

        //void setAnimal(Animal animal);

};

#endif
