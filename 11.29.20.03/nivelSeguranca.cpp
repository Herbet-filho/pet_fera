#include "nivelSeguranca.hpp"

using std::cout;
using std::cin;
using std::endl;

void NivelSeguranca::setNivel(int n){
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
int NivelSeguranca::getNivel(){
    return this-> nivel;
}

NivelSeguranca::NivelSeguranca(){}

NivelSeguranca::NivelSeguranca(int n){
    setNivel(n);
}
NivelSeguranca::~NivelSeguranca(){}

NivelSeguranca& NivelSeguranca::operator=(NivelSeguranca &ns){
    nivel = ns.nivel;
    return *this;
}