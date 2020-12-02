#include <iostream>
#include "tratador.hpp"

using std::cout;
using std::ostream;

using std::endl;

Tratador::Tratador(){}

Tratador::Tratador(string nome, string id, float salario, int nivel_d_seguranca): 
                Funcionario(nome, id, salario), nivel_d_seguranca(nivel_d_seguranca){}


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

    this->nivel_d_seguranca = n;
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
