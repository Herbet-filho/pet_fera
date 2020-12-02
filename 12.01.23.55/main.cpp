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


int main(){
    char s;
    PetShop petfera("PetFera");
    
    cout << endl;
    cout << "Bem vindo ao " << petfera.getNome() << endl << endl;
    
    do{
        petfera.Funcionamento();
        cout << endl;
        cout << "Deseja encerrar o programa? (S/N)" << endl;
        cin >> s;
        s = tolower(s);
    }while ( s != 's'); 
    

 return 0;
}