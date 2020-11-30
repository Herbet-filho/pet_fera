#include <iostream>
#include "tratador.hpp"
//#include "nivelSeguranca.hpp"

using std::cout;
using std::ostream;

//using std::cin;
using std::endl;

Tratador::Tratador(){}

Tratador::Tratador(string nome, string id, float salario, int nivel_d_seguranca): 
                Funcionario(nome, id, salario), nivel_d_seguranca(nivel_d_seguranca){}

/*Tratador::Tratador(Funcionario &tratador, NivelSeguranca nivel_d_seguranca){
    this->tratador = &tratador; 
    this->nivel_d_seguranca  = &nivel_d_seguranca;
}*/

Tratador::~Tratador(){}

void Tratador::setNivelSeguranca(int n){
    do{
        if(n >= 0 && n <= 2){
            break;
        }
        else{
            cout << "Nivel de segurança incompativel." << endl;
        }

        cout << "Informe o nivel de segurança do tratador: " << endl;
        cin >> n;

    }while(n < 0 || n > 2);

    this->nivel = n;
}
string Tratador::getNivelSegurancaCor(){
    switch (this-> nivel_d_seguranca){
        case 0:
        {
            return "Verde";
        }
        case 1:
        {
            return "Azul";
        }
    }
    return "Vermelho";
}

int Tratador::getNivelSeguranca(){
    return this -> nivel_d_seguranca;
}

ostream& operator<< (ostream &o, Tratador tratador){
    o << "Nome: " << tratador.getNome() << endl
        << "ID: " << tratador.getId() << endl
        << "Salario: " << tratador.getSalario() << endl
        << "Nivel de segurança: " << tratador.getNivelSegurancaCor();
    
    return o;
}

/*void Tratador::listarAnimais(){////////////////////////////
    for(int i; i > this->capacidadeA; i++){
        cout << lista_animais[i]->getId() << "\t" << lista_animais[i]->getNome() << endl;
    }
}*/

/*int Tratador::getCapacidadeA(){
    return this-> capacidadeA;
}*/

/*void Tratador::addAnimal(Animal* novo){//////////////////////
    if (capacidadeA < CAPACIDADE_MAX_ANIMAIS){
        lista_animais[capacidadeA++] = novo;
    }
}*/

/*void Tratador::removerAnimalId(string idAnimal){///////////////////////////////
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
