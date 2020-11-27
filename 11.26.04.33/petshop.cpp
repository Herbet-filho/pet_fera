#include <iostream>
#include "petshop.hpp"
using namespace std;

PetShop::PetShop (){
    this -> nome = "Indefinido";
}

PetShop::PetShop(string nome):nome(nome){}

PetShop::~PetShop(){
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
	}
}

string PetShop::getNome(){
    return this -> nome;
}

void
PetShop::setNome(string nome){
    this -> nome = nome;
}

int
PetShop::getCapacidade_animal(){
    return this -> capacidade_animal;
}

int
PetShop::getCapacidade_veterinario(){
    return this -> capacidade_veterinario;
}

int
PetShop::getCapacidade_tratador(){
    return this -> capacidade_tratador;
}

int
PetShop::getCapacidade_anfibio(){
    return this -> capacidade_anfibio;
}

int
PetShop::getCapacidade_ave(){
    return this -> capacidade_ave;
}

int
PetShop::getCapacidade_mamifero(){
    return this -> capacidade_mamifero;
}

int
PetShop::getCapacidade_reptil(){
    return this -> capacidade_reptil;
}

void
PetShop::listarAnimais(){
    for(int i = 0; i < this->capacidade_animal; i++){
        cout << animais[i]->getId() << "\t" << animais[i]->getEspecie() << endl;
    }
}
void
PetShop::listarAnfibios(){
    for(int i = 0; i < this->capacidade_anfibio; i++){
        cout << anfibio[i]->getId() << "\t" << anfibio[i]->getEspecie() << endl;
    }
}
void
PetShop::listarAves(){
    for(int i = 0; i < this->capacidade_ave; i++){
        cout << ave[i]->getId() << "\t" << ave[i]->getEspecie() << endl;
    }
}
void
PetShop::listarMamiferos(){
    for(int i = 0; i < this->capacidade_mamifero; i++){
        cout << mamifero[i]->getId() << "\t" << mamifero[i]->getEspecie() << endl;
    }
}

void
PetShop::listarRepteis(){
    for(int i = 0; i < this->capacidade_reptil; i++){
        cout << reptil[i]->getId() << "\t" << reptil[i]->getEspecie() << endl;
    }
}

void
PetShop::listarVeterinarios(){
    for(int i = 0; i < this->capacidade_veterinario; i++){
        cout << vets[i]->getNome() << "\t" << vets[i]->getId() << endl;
    }
}

void
PetShop::listarTratadores(){
    for(int i = 0; i < this->capacidade_tratador; i++){
        cout << trat[i]->getNome() << "\t" << trat[i]->getId() << endl;
    }
}

/*void PetShop::pegarTratador(Animal* animal_inserido, int nivel){
    int* n;
    string idTrat;
    bool str5 = false;
    do{
        cout << "ID do tratador: " << endl;
        cin >> idTrat;
        str5 = consultarExistenciaTratador(idTrat, *n);
        if (str5){
            Tratador* tratador = this->trat[*n];
            if (animal_inserido->getPericulosidade() == 1){
                nivel = 2;
            }
            if (tratador->getNivel() == nivel){
                animal_inserido->setTratador(*tratador);
            }
            else{
                str5 = false;
            }
        }
    } while (str5 == false);
}*/

void
PetShop::determinarclasse(Animal* animal_inserido){
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
            cout << "Periodo de muda: " << endl;
            cin >> str3;
            cout << "Tipo de respiração:";
            cin >> str4; 
            //pegarTratador(animal_inserido, 0);
            Anfibio anfibio(*animal_inserido, str1, str2,  str3, str4);
            break;
        }
        case 2:
        {    
            cout<< "locomoçao: " << endl;
            cin >> str1;
            cout<< "Periodo de muda: " << endl;
            cin >>str2;
            //pegarTratador(animal_inserido, 1);
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
            //pegarTratador(animal_inserido, 1);
            Ave ave(*animal_inserido, str5, str1, str2);
            break;
        }
        case 4:
        {
            cout << "Pelagem: " << endl;
            cin >> str1;
            cout << "Tipo de deslocamento: " << endl;
            cin >> str2;
            //pegarTratador(animal_inserido, 1);
            Mamifero mamifero(*animal_inserido, str1, str2);
            break;
        }    
    }
}//função da inicialização das classes de cada animal inserido

//Funções que adicionam animais a listas de classes:

void
PetShop::addAnfibio(Anfibio* anfibio_inserido){
    if (capacidade_anfibio < CAPACIDADE_MAX_ANFIBIO){
        anfibio[capacidade_anfibio++] = anfibio_inserido;
    }
}

void
PetShop::addAve(Ave* ave_inserido){
    if (capacidade_ave < CAPACIDADE_MAX_AVE){
        ave[capacidade_ave++] = ave_inserido;
    }
}
    
void
PetShop::addMamifero(Mamifero* mamifero_inserido){
    if (capacidade_mamifero < CAPACIDADE_MAX_MAMIFERO){
        mamifero[capacidade_mamifero++] = mamifero_inserido;
    }
}

void
PetShop::addReptil(Reptil* reptil_inserido){
    if (capacidade_reptil < CAPACIDADE_MAX_REPTIL){
        reptil[capacidade_reptil++] = reptil_inserido;
    }
}



void
PetShop::addAnimal(Animal* animal_inserido){
    if (capacidade_animal < CAPACIDADE_MAX_ANIMAL){
        animais[capacidade_animal++] = animal_inserido;
    }
}

void
PetShop::addVeterinario(Veterinario* veterinario_inserido){
    if (capacidade_veterinario < CAPACIDADE_MAX_VETERINARIO){
        vets[capacidade_veterinario++] = veterinario_inserido;
    }
}

void
PetShop::addTratador(Tratador* tratador_inserido){
    if (capacidade_tratador < CAPACIDADE_MAX_TRATADOR){
        trat[capacidade_tratador++] = tratador_inserido;
    }
}

/*Funcionario& PetShop::informeDadosFuncionario(){
    string nome, id;
    float salario;
    cout << "Informe os dados do veterinario: " << endl;
    cout << "Nome: " << endl;
    cin >> nome;
    cout << "Id: " << endl;
    cin >> id;
    cout << "Salario: " << endl;
    cin >> salario;

    Funcionario funcionario(nome,id,salario);

    return funcionario;
}

Veterinario* PetShop::informeDadosVeterinario(){
    string crmv;
    Funcionario funcionario = informeDadosFuncionario();
    
    cout << "CRMV: " << endl;
    cin >> crmv;

    Veterinario vet(funcionario, crmv);
    
    return &vet;
}
void PetShop::inserirVeterinario(){
    if (this->capacidade_veterinario < CAPACIDADE_MAX_VETERINARIO){
        Veterinario* vet = informeDadosVeterinario();
        addVeterinario(vet);
    }
}

Tratador* PetShop::informeDadosTratador(){
    int n;
    Funcionario funcionario = informeDadosFuncionario();
    cout << "Nivel de segurnça: " << endl;
    cin >> n;
    NivelSeguranca nivel(n);

    Tratador tratador(funcionario, nivel);

    return &tratador;
}
void PetShop::inserirTratador(){
    if (this->capacidade_tratador < CAPACIDADE_MAX_TRATADOR){
        Tratador* tratador = informeDadosTratador();
        addTratador(tratador);
    }
}*/

void
PetShop::removerAnimal(string id_Animal){
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
PetShop::removerVeterinario(string id_Veterinario){
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
PetShop::removerTratador(string id_Tratador){
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
PetShop::consultarAnimal(string id_Animal){
    bool achou = false;
    for(int i = 0; i < this->capacidade_animal; i++){
        if (this -> animais[i] -> getId() == id_Animal){
            cout<<"Espécie:"<< animais[i] -> getEspecie() << endl
            <<"Nutrição:"<< animais[i] -> getNutricao() << endl
            <<"Periculosidade:"<< animais[i] -> getPericulosidade() << endl
            <<"Risco de extinção:"<< animais[i] -> getRisco_extincao() << endl
            //<<"Permissão do ibama para comércio:"<< animais[i] -> getPermissao_ibama()<< endl 
            //<<"Permissão do Ibama para transporte:"<<animais[i] -> getLicenca_transporte()<< endl
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
PetShop::consultarVeterinario(string id_Veterinario){
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
PetShop::listaAnimais_Tratador(string id_Tratador){
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
PetShop::removerAnimal_lista_tratador(string id_Animal, string id_Tratador){
    bool achou = false;
    for(int i = 0; i < this->capacidade_animal;){

    }
}*/
    
void
PetShop::consultarTratador(string id_Tratador){
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

/*bool
PetShop::consultarExistenciaTratador(string id_Tratador, int &n){
    bool achou = false;
    for(int i = 0; i < this->capacidade_tratador; i++){
        if (this -> trat[i] -> getId() == id_Tratador){
            achou = true;
            n = i;
        }
    }
    if (achou == false){
        cout<< "Tratador não encontrado" << endl;
    }

    return achou;
}
*/