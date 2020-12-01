#include <iostream>


#include "funcionario.hpp"
#include "nivelSeguranca.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"
#include "silvestre.hpp"
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

#define CAPACIDADE_MAX_ANIMAL 100
#define CAPACIDADE_MAX_ANFIBIO 100
#define CAPACIDADE_MAX_AVE 100
#define CAPACIDADE_MAX_MAMIFERO 100
#define CAPACIDADE_MAX_REPTIL 100
#define CAPACIDADE_MAX_VETERINARIO 10 
#define CAPACIDADE_MAX_TRATADOR 10

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