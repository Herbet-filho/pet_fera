#ifndef _TRATADOR_
#define _TRATADOR_

#include <iostream>
//#include "animais.hpp"

using std::string;

class Tratador{
    private:
        string nivel_d_seguranca;
        //Animal lista_animais;

    public:
        Tratador();

        void setNivelSeguranca(string nivel_d_seguranca);
        string getNivelSeguranca();

        //void setAnimal(Animal animal);

};

#endif
