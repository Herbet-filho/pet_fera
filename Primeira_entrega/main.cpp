#include <iostream>


#include "funcionario.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"
#include "animal.hpp"
#include "anfibio.hpp"
#include "reptil.hpp"
#include "mamifero.hpp"
#include "ave.hpp"
#include "petshop.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool verifiqueSimNao(char opcao);

int main(){
    char s;
    bool continua = true;
    PetShop petfera("PetFera");
    
    cout << endl;
    cout << "Bem vindo ao " << petfera.getNome() << endl << endl;
    
    do{
        petfera.Funcionamento();
        cout << endl;
        cout << "Deseja encerrar o programa? (S/N)" << endl;
        cin >> s;
        continua = verifiqueSimNao(s);
    }while (!continua); 
    

 return 0;
}

bool verifiqueSimNao(char opcao){
    bool test = true;
    
    do{
        opcao = toupper(opcao); 
        if (opcao == 'S'){   
            return true; 
        }else if ( opcao == 'N'){
            return false; 
        }
        cin >> opcao; 
    }while(test);
  
    return true; 
}