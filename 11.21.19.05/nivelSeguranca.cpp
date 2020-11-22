#include "nivelSeguranca.hpp"

using std::cout;
using std::cin;
using std::endl;

NivelSeguranca::NivelSeguranca(){}

NivelSeguranca::NivelSeguranca(int n){
    do{
        if(n >= 0 && n <= 2){
            this->nivel = n;
            break;
        }
        else{
            cout << "Nivel de segurança incompativel." << endl;
        }

        cout << "Informe o nivel de segurança do tratador: " << endl;
        cin >> n;

    }while(n < 0 || n > 2);
}
NivelSeguranca::~NivelSeguranca(){}

int NivelSeguranca::getNivel(){
    return this-> nivel;
}