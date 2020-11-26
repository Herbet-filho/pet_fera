#include <iostream>
#include "petshop.hpp"
using namespace std;

petShop::petShop (){
    this -> nome = "Indefinido";
}

petShop::petShop(string nome):nome(nome){}

petShop::~petShop(){
    /*for (int i = 0; i < this->capacidade_animal; i++)
	{
		delete this->animais;
	}
    for (int i = 0; i < this->capacidade_tratador; ++i)
	{
		delete this->trat[i];
	}
    for (int i = 0; i < this->capacidade_veterinario; ++i)
	{
		delete this->vets[i];
	}
    for (int i = 0; i < this->capacidade_anfibio; ++i)
	{
		delete this->anfibio[i];
	}
    for (int i = 0; i < this->capacidade_ave; ++i)
	{
		delete this->ave[i];
	}
    for (int i = 0; i < this->capacidade_mamifero; ++i)
	{
		delete this->mamifero[i];
	}
    for (int i = 0; i < this->capacidade_reptil; ++i)
	{
		delete this->reptil[i];
	}*/
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

int
petShop::getCapacidade_anfibio(){
    return this -> capacidade_anfibio;
}

int
petShop::getCapacidade_ave(){
    return this -> capacidade_ave;
}

int
petShop::getCapacidade_mamifero(){
    return this -> capacidade_mamifero;
}

int
petShop::getCapacidade_reptil(){
    return this -> capacidade_reptil;
}

void
petShop::listarAnimais(){
    for(int i = 0; i < this->capacidade_animal; i++){
        cout << animais[i]->getId() << "\t" << animais[i]->getEspecie() << endl;
    }
}
void
petShop::listarAnfibios(){
    for(int i = 0; i < this->capacidade_anfibio; i++){
        cout << anfibio[i]->getId() << "\t" << anfibio[i]->getEspecie() << endl;
    }
}
void
petShop::listarAves(){
    for(int i = 0; i < this->capacidade_ave; i++){
        cout << ave[i]->getId() << "\t" << ave[i]->getEspecie() << endl;
    }
}
void
petShop::listarMamiferos(){
    for(int i = 0; i < this->capacidade_mamifero; i++){
        cout << mamifero[i]->getId() << "\t" << mamifero[i]->getEspecie() << endl;
    }
}

void
petShop::listarRepteis(){
    for(int i = 0; i < this->capacidade_reptil; i++){
        cout << reptil[i]->getId() << "\t" << reptil[i]->getEspecie() << endl;
    }
}

void
petShop::listarVeterinarios(){
    for(int i = 0; i < this->capacidade_veterinario; i++){
        cout << vets[i]->getNome() << "\t" << vets[i]->getId() << endl;
    }
}

void
petShop::listarTratadores(){
    for(int i = 0; i < this->capacidade_tratador; i++){
        cout << trat[i]->getNome() << "\t" << trat[i]->getId() << endl;
    }
}

void
petShop::determinarclasse(Animal* animal_inserido){
    int escolha;
    string str1, str2, str3, str4;
    bool str5;
    cout << "Determine a classe do animal:"<<endl
        << "\t1 - Anfibio" << endl
        << "\t2 - Reptil" << endl
        << "\t3 - Ave" << endl
        << "\t4 - Mamifero" << endl;
    cin >> escolha;

    switch (escolha){
        case 1:
        {
            cout << "Temperatura ambiente: " << endl;
            cin >> str1;
            cout << "Umidade do ambiente: " << endl;
            cin >> str2;
            cout<< "Periodo de muda: " << endl;
            cin >> str3;
            cout<< "Tipo de respiração:";
            cin >> str4; 
            Anfibio anfibio(*animal_inserido, str1, str2,  str3, str4);
            break;
        }
        case 2:
        {    
            cout<< "locomoçao: " << endl;
            cin >> str1;
            cout<< "Periodo de muda: " << endl;
            cin >>str2;
            Reptil reptil(*animal_inserido,str1,str2);
            break;
        }
        case 3:
        {
            cout << "Informe se voa: " << endl;
            cin >> str5;
            cout << "Cor:" << endl;
            cin >> str1;
            cout << "Tipo:" << endl;
            cin >> str2;
            Ave ave(*animal_inserido, str5, str1, str2);
            break;
        }
        case 4:
        {
            cout << "Pelagem: " << endl;
            cin >> str1;
            cout << "Tipo de deslocamento: " << endl;
            cin >> str2;
            Mamifero mamifero(*animal_inserido, str1, str2);
            break;
        }    
    }
}//função da inicialização das classes de cada animal inserido

//Funções que adicionam animais a listas de classes:

void
petShop::addAnfibio(Anfibio* anfibio_inserido){
    if (capacidade_anfibio < CAPACIDADE_MAX_ANFIBIO){
        anfibio[capacidade_anfibio++] = anfibio_inserido;
    }
}

void
petShop::addAve(Ave* ave_inserido){
    if (capacidade_ave < CAPACIDADE_MAX_AVE){
        ave[capacidade_ave++] = ave_inserido;
    }
}
    
void
petShop::addMamifero(Mamifero* mamifero_inserido){
    if (capacidade_mamifero < CAPACIDADE_MAX_MAMIFERO){
        mamifero[capacidade_mamifero++] = mamifero_inserido;
    }
}

void
petShop::addReptil(Reptil* reptil_inserido){
    if (capacidade_reptil < CAPACIDADE_MAX_REPTIL){
        reptil[capacidade_reptil++] = reptil_inserido;
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
    if (encontrado == true){
        delete animais[this -> capacidade_animal--];
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
    if (encontrado == true){
        delete vets[this -> capacidade_veterinario--];
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
    if (encontrado == true){
        delete trat[this -> capacidade_tratador--];
    }
}

void
petShop::consultarAnimal(string id_Animal){
    bool achou = false;
    for(int i = 0; i < this->capacidade_animal; i++){
        if (this -> animais[i] -> getId() == id_Animal){
            cout<<"Espécie:"<< animais[i] -> getEspecie() << endl
            <<"Nutrição:"<< animais[i] -> getNutricao() << endl
            <<"Periculosidade:"<< animais[i] -> getPericulosidade() << endl
            <<"Risco de extinção:"<< animais[i] -> getRisco_extincao() << endl
            <<"Permissão do ibama para comércio:"<< animais[i] -> getPermissao_ibama()<< endl 
            <<"Permissão do Ibama para transporte:"<<animais[i] -> getLicenca_transporte()<< endl
            <<"Tratador responsável:" << animais[i] -> getNomeTratador()<< endl
            <<"Veterinário responsável:"<< animais[i] -> getNomeVeterinario()<<endl;
            achou = true;
            break;
        }   
    }
    if (achou == false){
        cout << "Animal não encontrado" << endl;
    }
}

void
petShop::consultarVeterinario(string id_Veterinario){
    bool achou = false;
    for(int i = 0; i < this->capacidade_veterinario; i++){
        if (this -> vets[i] -> getId() == id_Veterinario){
            cout<<"Nome:"<< vets[i] -> getNome() << endl
            <<"id:"<< vets[i] -> getId() << endl
            <<"Salário:"<< vets[i] -> getSalario()<< endl
            <<"crmv:" << vets[i] -> getCrmv()<< endl;

            achou = true;
            break;
        }
    }
    if (achou == false){
        cout<< "Veterinario não encontrado" << endl;
    }
}
void
petShop::listaAnimais_Tratador(string id_Tratador){
    bool achou = false;
    for(int i = 0; i < this->capacidade_animal; i++){
        if(animais[i]->getIdTratador() == id_Tratador){
            cout << "\t" << animais[i]->getId() << "\t" << animais[i]->getEspecie() << endl;
            achou = true;
        }
    }
    if (achou == false){
        cout<< "Tratador não possui animais ao qual é responsável" << endl;
    }
}

/*void 
petShop::removerAnimal_lista_tratador(string id_Animal, string id_Tratador){
    bool achou = false;
    for(int i = 0; i < this->capacidade_animal;){

    }
}*/
    
void
petShop::consultarTratador(string id_Tratador){
    bool achou = false;
    for(int i = 0; i < this->capacidade_tratador; i++){
        if (this -> trat[i] -> getId() == id_Tratador){
            cout<<"Nome:"<< trat[i] -> getNome() << endl
            <<"id:"<< trat[i] -> getId() << endl
            <<"Salário:"<< trat[i] -> getSalario()<< endl
            <<"Lista de animais responsável:" << endl;

            this-> listaAnimais_Tratador(id_Tratador);
            break;
            achou = true;
        }
    }
    if (achou == false){
        cout<< "Tratador não encontrado" << endl;
    }
}
