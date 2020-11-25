#include <iostream>
#include "petshop.hpp"

petShop::petShop (){
    this -> nome = "Indefinido";
}

petShop::petShop(string nome):nome(nome){}

petShop::~petShop(){
    for (int i = 0; i < this->capacidade_animal; ++i)
	{
		delete this->animais[i];
	}
    for (int i = 0; i < this->capacidade_tratador; ++i)
	{
		delete this->trat[i];
	}
    for (int i = 0; i < this->capacidade_veterinario; ++i)
	{
		delete this->vets[i];
	}
}

string petShop::getNome(){
    return this -> nome;
}

void
petShop::setNome(string nome){
    this -> nome = nome;
}

int
petShop::getCapacidade_animal(){
    return this -> capacidade_animal;
}

int
petShop::getCapacidade_veterinario(){
    return this -> capacidade_veterinario;
}

int
petShop::getCapacidade_tratador(){
    return this -> capacidade_tratador;
}

void
petShop::listarAnimais(){
    for(int i = 0; i < this->capacidade_animal; i++){
        cout << animais[i]->getId() << "\t" << animais[i]->getEspecie();
    }
}

void
petShop::listarVeterinarios(){
    for(int i = 0; i < this->capacidade_veterinario; i++){
        cout << vets[i]->getNome() << endl;
    }
}

void
petShop::listarTratadores(){
    for(int i = 0; i < this->capacidade_tratador; i++){
        cout << trat[i]->getNome() << endl;
    }
}

void
petShop::addAnimal(Animal* animal_inserido){
    if (capacidade_animal < CAPACIDADE_MAX_ANIMAL){
        animais[capacidade_animal++] = animal_inserido;
    }
}

void
petShop::addVeterinario(Veterinario* veterinario_inserido){
    if (capacidade_veterinario < CAPACIDADE_MAX_VETERINARIO){
        vets[capacidade_veterinario++] = veterinario_inserido;
    }
}

void
petShop::addTratador(Tratador* tratador_inserido){
    if (capacidade_tratador < CAPACIDADE_MAX_TRATADOR){
        trat[capacidade_tratador++] = tratador_inserido;
    }
}

void
petShop::removerAnimal(string id_Animal){
    bool encontrado = false;
    int i;
    for (i = 0; i < this -> capacidade_animal; i++){
        if (this -> animais[i] -> getId() == id_Animal){
            Animal* aux = animais[i];
            animais[i] = animais[i+1];
            animais[i+1] = aux;
            encontrado = true;
        }
    }
    if (encontrado = true){
        delete animais[this -> capacidade_animal];
    }
}

void
petShop::removerVeterinario(string id_Veterinario){
    bool encontrado = false;
    int i;
    for (i = 0; i < this -> capacidade_veterinario; i++){
        if (this -> vets[i] -> getId() == id_Veterinario){
            Veterinario* aux = vets[i];
            vets[i] = vets[i+1];
            vets[i+1] = aux;
            encontrado = true;
        }
    }
    if (encontrado = true){
        delete vets[this -> capacidade_veterinario];
    }
}

void 
petShop::removerTratador(string id_Tratador){
    bool encontrado = false;
    int i;
    for (i = 0; i < this -> capacidade_tratador; i++){
        if (this -> trat[i] -> getId() == id_Tratador){
            Tratador* aux = trat[i];
            trat[i] = trat[i+1];
            trat[i+1] = aux;
            encontrado = true;
        }
    }
    if (encontrado = true){
        delete trat[this -> capacidade_tratador];
    }
}

void
petShop::consultarAnimal(string id_Animal){
    for(int i = 0; i < this->capacidade_animal; i++){
        if (this -> animais[i] -> getId() == id_Animal){
            cout<<"Espécie:"<< animais[i] -> getEspecie() << endl
            <<"Nutrição:"<< animais[i] -> getNutricao() << endl
            <<"Periculosidade:"<< animais[i] -> getPericulosidade() << endl
            <<"Risco de extinção:"<< animais[i] -> getRisco_extincao() << endl
            <<"Permissão do ibama para comércio:"<< animais[i] -> getPermissao_ibama()<< endl 
            <<"Permissão do Ibama para transporte:"<<animais[i] -> getLicenca_transporte()<< endl
            <<"Tratador responsável:" << animais[i] -> getTratador()<< endl
            <<"Veterinário responsável:"<< animais[i] -> getVeterinario()<<endl;
            break;
        }   
    }
    cout << "Animal não encontrado" << endl;
}

void
petShop::consultarVeterinario(string id_Veterinario){
    for(int i = 0; i < this->capacidade_veterinario; i++){
        if (this -> vets[i] -> getId() == id_Veterinario){
            cout<<"Nome:"<< vets[i] -> getNome() << endl
            <<"id:"<< vets[i] -> getId() << endl
            <<"Salário:"<< vets[i] -> getSalario()<< endl
            <<"crmv:" << vets[i] -> getCrmv()<< endl;
            break;
        }
    }
    cout<< "Veterinario não encontrado" << endl;
}
    
void
petShop::consultarTratador(string id_Tratador){
    for(int i = 0; i < this->capacidade_tratador; i++){
        if (this -> trat[i] -> getId() == id_Tratador){
            cout<<"Nome:"<< trat[i] -> getNome() << endl
            <<"id:"<< trat[i] -> getId() << endl
            <<"Salário:"<< trat[i] -> getSalario()<< endl
            <<"Lista de animais responsável:" << endl;
            trat[i] -> listarAnimais();
            break;
        }
    }
    cout<< "Tratador não encontrado" << endl;
}



//Tratador getTratador();
//Veterinario getVeterinario();
//getPericulosidade();
//getRisco_extincao();
//getLicenca_transporte();
//getPermissao_ibama();
//getNutricao();
//getNome();
//getClasse()

//veterinario e tratador
//string nome;
//string id;
//float salario;

//veterinario
//string crmv

//tratador
//listar animais
//nivelsegurança




