#include "tratador.hpp"

using std::cout;
using std::cin;
using std::endl;

Tratador::Tratador(){}

Tratador::Tratador(string nome, string id, float salario, nivelDSeguranca nivel_d_seguranca): 
                Funcionario(nome, id, salario),nivel_d_seguranca(nivel_d_seguranca){}

Tratador::~Tratador(){}

void Tratador::setNivelSeguranca(nivelDSeguranca nivel_d_seguranca){
    if(nivel_d_seguranca >= 0 && nivel_d_seguranca <= 2){
        this->nivel_d_seguranca = nivel_d_seguranca;
    }
    else{
        cout << "Nivel de segurança incompativel." << endl;
    }
}
do{
        cout << "Informe o nivel de segurança do tratador: " << endl;
        cin >> nivel;
        setNivelSeguranca(nivel);
    }while(nivel_d_seguranca < 0 || nivel_d_seguranca > 2);

void Tratador::informarNivelSeguranca(){
    nivelDSeguranca nivel;
    do{
        cout << "Informe o nivel de segurança do tratador: " << endl;
        cin >> nivel;
        setNivelSeguranca(nivel);
    }while(nivel_d_seguranca < 0 || nivel_d_seguranca > 2);
}

int Tratador::getNivelSeguranca(){
    return this -> nivel_d_seguranca;
}

//void Tratador::setAnimal(Animal animal){}