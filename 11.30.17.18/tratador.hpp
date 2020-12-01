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
        int nivel_d_seguranca;
        //int quantidadeT;

    public:
        Tratador();
        Tratador(string nome, string id, float salario, int nivel_d_seguranca);
        //Tratador(Funcionario &tratador, NivelSeguranca nivel_d_seguranca);
        ~Tratador();

        void setNivelSeguranca(int n);
        int getNivelSeguranca();
        string getNivelSegurancaCor();
        
        //void listarAnimais();
        //int getCapacidadeA();
        //void addAnimal(Animal* novo);/////////////////////
        //void removerAnimalId(string idAnimal);//////////////////////
        friend ostream& operator<< (ostream &o, Tratador tratador);


};

#endif
