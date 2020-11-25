#include <iostream>
#include "tratador.hpp"
//#include "nivelSeguranca.hpp"

using std::cout;

//using std::cin;
using std::endl;

Tratador::Tratador(){}

Tratador::Tratador(string nome, string id, float salario, NivelSeguranca nivel_d_seguranca): 
                Funcionario(nome, id, salario),NivelSeguranca(nivel_d_seguranca){}

Tratador::~Tratador(){}

void Tratador::setNivelSeguranca(int nivel){
    NivelSeguranca aux(nivel);
    this-> nivel_d_seguranca = &aux;
}
/*int Tratador::getNivelSeguranca(){ ///// deu erro
    return this -> nivel_d_seguranca->getNivel();
}*/

/*void Tratador::listarAnimais(){
    for(int i; i > this->capacidadeA; i++){
        cout << lista_animais[i]->getId() << "\t" << lista_animais[i]->getNome() << endl;
    }
}*/

int Tratador::getCapacidadeA(){
    return this-> capacidadeA;
}

/*void Tratador::addAnimal(Animal* novo){
    if (capacidadeA < CAPACIDADE_MAX_ANIMAIS){
        lista_animais[capacidadeA++] = novo;
    }
}*/

/*void Tratador::removerAnimalId(string idAnimal){
    bool achou = false;
    for(int i = 0; i < this->capacidadeA; i++){
        if(lista_animais[i]->getId() == idAnimal || achou){
            achou = true;
            Animal* aux = lista_animais[i];
            lista_animais[i] = lista_animais[i+1];
            lista_animais[i+1] = aux;
        }
    }

    if (achou == true){
        delete lista_animais[this->capacidadeA--];
        cout << "Animal removido da lista do tratador(a) com sucesso." << endl;
    }
}*/
