#ifndef _TRATADOR_
#define _TRATADOR_

#include <iostream>
#include "funcionario.hpp"
#include "nivelSeguranca.hpp"
//#include "animal.hpp"


using namespace std;


class Tratador : public Funcionario, public NivelSeguranca{
    private:
        Funcionario* tratador;
        //Animal* lista_animais[CAPACIDADE_MAX_ANIMAIS];//////////////////////
        //int capacidadeA = 0;
        //enum nivelDSeguranca {verde = 0, azul, vermelho};
        NivelSeguranca* nivel_d_seguranca;
        //int quantidadeT;

    public:
        Tratador();
        Tratador(string nome, string id, float salario, NivelSeguranca nivel_d_seguranca);
        //Tratador(Funcionario &tratador, NivelSeguranca nivel_d_seguranca);
        ~Tratador();

        void setNivelSeguranca(int nivel);
        int getNivelSeguranca();
        
        //void listarAnimais();
        //int getCapacidadeA();
        //void addAnimal(Animal* novo);/////////////////////
        //void removerAnimalId(string idAnimal);//////////////////////
       /* friend std::istream& operator>> (std::istream &i, Tratador alg);*/


};

#endif
