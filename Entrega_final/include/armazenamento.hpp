#ifndef _ARMAZENAMENTO_
#define _ARMAZENAMENTO_

#include <iostream>
#include <fstream>
#include "petshop.hpp"
#include "animal.hpp"


using std::string;

class Armazenamento{
    private:
        PetShop* petFera;
        /*Animal* animais[];
        Funcionario* funcionarios[];*/
    public:
        Armazenamento();
        Armazenamento(int i, string nomeArquivo, PetShop &petFera);
        ~Armazenamento();

        void lerArquivoAnimal(string nomeArquivo, PetShop &petFera);
        void lerArquivoTratador(string nomeArquivo, PetShop &petFera);
        void lerArquivoVeterinario(string nomeArquivo, PetShop &petFera);
        void escreverArquivoAnimal(string nomeArquivo, PetShop petFera);
        void escreverArquivoVeterinario(string nomeArquivo, PetShop petFera);
        void escreverArquivoTratador(string nomeArquivo, PetShop petFera);

};

#endif