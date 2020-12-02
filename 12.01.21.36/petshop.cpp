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
    if (this->capacidade_animal == 0){
        cout << "Nenhum animal foi inserido" << endl;
    }else{
        for(int i = 0; i < this->capacidade_animal; i++){
            cout << i << "\t" << animais[i]->getId() << "\t" << animais[i]->getEspecie() << endl;
    }
    }
}
void
PetShop::listarAnfibios(){
    if (this->capacidade_anfibio == 0){
        cout << "Nenhum animal da classe foi inserido ainda" << endl;
    }else{
        for(int i = 0; i < this->capacidade_anfibio; i++){
            cout << i << "\t" << anfibio[i]->getId() << "\t" << anfibio[i]->getEspecie() << endl;
        }
    }
}
void
PetShop::listarAves(){
    if (this->capacidade_ave == 0){
        cout << "Nenhum animal da classe foi inserido ainda" << endl;
    }else{
        for(int i = 0; i < this->capacidade_ave; i++){
            cout << i << "\t" << ave[i]->getId() << "\t" << ave[i]->getEspecie() << endl;
        }
    }
}
void
PetShop::listarMamiferos(){
    if (this->capacidade_mamifero == 0){
        cout << "Nenhum animal da classe foi inserido ainda" << endl;
    }else{
        for(int i = 0; i < this->capacidade_mamifero; i++){
            cout << i << "\t" << mamifero[i]->getId() << "\t" << mamifero[i]->getEspecie() << endl;
        }
    }
}

void
PetShop::listarRepteis(){
    if (this->capacidade_reptil == 0){
        cout << "Nenhum animal da classe foi inserido ainda" << endl;
    }else{
        for(int i = 0; i < this->capacidade_reptil; i++){
            cout << i << "\t" << reptil[i]->getId() << "\t" << reptil[i]->getEspecie() << endl;
        }
    }
}

void
PetShop::listarVeterinarios(){
    if (this->capacidade_veterinario == 0){
        cout << "Nenhum veterinário foi inserido ainda" << endl;
    }else{
        for(int i = 0; i < this->capacidade_veterinario; i++){
            cout << i << "\t" << vets[i]->getId() << "\t" << vets[i]->getNome() << endl;
        }
    }
}

void
PetShop::listarTratadores(){
    if (this->capacidade_tratador == 0){
        cout << "Nenhum tratador foi inserido ainda" << endl;
    }else{
        for(int i = 0; i < this->capacidade_tratador; i++){
            cout << i << "\t" << trat[i]->getId() << "\t" << trat[i]->getNivelSeguranca() << "\t" << trat[i]->getNome() << endl;
        }
    }
}

int PetShop::pegarTratador(Animal &animal_inserido, int n){
    int escolhido;
    bool achou;
    char opcao;

    do{
        achou = false;

        cout << "Segue abaixo uma lista disponivel de tratadores para cuidar do animal, escolha:" << endl;
        this->listarTratadores();
        cin >> escolhido;
        if (animal_inserido.getPericulosidade() == 0){
            if (this->trat[escolhido]->getNivelSeguranca() == n){
                break;
            }
        }
        else{
            if (this->trat[escolhido]->getNivelSeguranca() == 2){
                break;
            }
        }
        achou = true;
        cout << "Tratador não atende aos requisitos de segurança." << endl
            << "Escolha outro tratador('E') ou pressione 'S' para sair." << endl;
        cin >> opcao;
        opcao = toupper(opcao);
        if (opcao == 'E'){
            achou = true;
        }
        else
        {
            achou = false;
            escolhido = -1;
        }
        
    }while(achou);
    
    return escolhido;
}

void      //função da inicialização das classes de cada animal inserido
PetShop::determinarclasse(Animal* animal_inserido){
    int escolha, i;
    string str1, str2, str3, str4;
    bool boolean1;
    cout << "Determine a classe do animal:"<<endl
        << "\t1 - Anfibio" << endl
        << "\t2 - Reptil" << endl
        << "\t3 - Ave" << endl
        << "\t4 - Mamifero" << endl;
    cin >> escolha;

    switch (escolha){
        case 1://******  Anfibio ******
        {
            cout << "Temperatura ambiente: " << endl;
            cin >> str1;
            cout << "Umidade do ambiente: " << endl;
            cin >> str2;
            cout << "Periodo de muda: " << endl;
            cin >> str3;
            cout << "Tipo de respiração:";
            cin >> str4; 
            i = pegarTratador(*animal_inserido, 0);
            if (i == -1){
                cout << "A operação não pode ser finalizada.";
                this->removerAnimal(animal_inserido->getId());
                break;
            }
            animal_inserido->setTratador(*trat[i]);
            Anfibio* anfibio= new Anfibio(*animal_inserido, str1, str2,  str3, str4);
            this->addAnfibio(anfibio);
            break;
        }
        case 2://**********  Reptil  ***********
        {    
            cout<< "locomoçao: " << endl;
            cin >> str1;
            cout<< "Periodo de muda: " << endl;
            cin >>str2;
            i = pegarTratador(*animal_inserido, 1);
            if (i == -1){
                cout << "A operação não pode ser finalizada.";
                this->removerAnimal(animal_inserido->getId());
                break;
            }
            animal_inserido->setTratador(*trat[i]);
            Reptil* reptil = new Reptil(*animal_inserido,str1,str2);
            this->addReptil(reptil);
            break;
        }
        case 3://*******  Ave  ************
        {
            char escolha;
            cout << "Informe se voa (S/N): " << endl;
            cin >> escolha;
            boolean1 = verifiqueSimNao(escolha);
            cout << "Cor:" << endl;
            cin >> str1;
            cout << "Tipo:" << endl;
            cin >> str2;
            i = pegarTratador(*animal_inserido, 0);
            if (i == -1){
                cout << "A operação não pode ser finalizada.";
                this->removerAnimal(animal_inserido->getId());
                break;
            }
            animal_inserido->setTratador(*trat[i]);
            Ave* ave = new Ave(*animal_inserido, boolean1, str1, str2);
            this->addAve(ave);
            break;
        }
        case 4://***********  Mamifero  ****************
        {
            cout << "Pelagem: " << endl;
            cin >> str1;
            cout << "Tipo de deslocamento: " << endl;
            cin >> str2;
            i = pegarTratador(*animal_inserido, 1);
            if (i == -1){
                cout << "A operação não pode ser finalizada.";
                this->removerAnimal(animal_inserido->getId());
                break;
            }
            animal_inserido->setTratador(*trat[i]);
            Mamifero* mamifero = new Mamifero(*animal_inserido, str1, str2);
            this->addMamifero(mamifero);
            break;
        }    
    }
}


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
        cout << mamifero[]
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

    encontrado = false;
    for (i = 0; i < this -> capacidade_anfibio; i++){
        if(this -> anfibio[i] -> getId() == id_Animal){
            Anfibio* aux = anfibio[i];
            anfibio[i] = anfibio[i+1];
            anfibio[i+1] = aux;
            encontrado = true;
        }
    } 
    if (encontrado == true){
        delete anfibio[this->capacidade_anfibio--];
    }

    encontrado = false;
    for (i = 0; i < this -> capacidade_ave; i++){
        if(this -> ave[i] -> getId() == id_Animal){
            Ave* aux = ave[i];
            ave[i] = ave[i+1];
            ave[i+1] = aux;
            encontrado = true;
        }
    } 
    if (encontrado == true){
        delete ave[this->capacidade_ave--];
    }

    encontrado = false;
    for (i = 0; i < this -> capacidade_mamifero; i++){
        if(this -> mamifero[i] -> getId() == id_Animal){
            Mamifero* aux = mamifero[i];
            mamifero[i] = mamifero[i+1];
            mamifero[i+1] = aux;
            encontrado = true;
        }
    } 
    if (encontrado == true){
        delete mamifero[this->capacidade_mamifero--];
    }

    encontrado = false;
    for (i = 0; i < this -> capacidade_reptil; i++){
        if(this -> reptil[i] -> getId() == id_Animal){
            Reptil* aux = reptil[i];
            reptil[i] = reptil[i+1];
            reptil[i+1] = aux;
            encontrado = true;
        }
    } 
    if (encontrado == true){
        delete reptil[this->capacidade_reptil--];
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
            cout << *animais[i] << endl;
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
            cout << *vets[i] << endl;
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

void
PetShop::listaAnimais_Veterinario(string id_Veterinario){
    bool achou = false;
    for(int i = 0; i < this->capacidade_animal; i++){
        if(animais[i]->getIdVeterinario() == id_Veterinario){
            cout << "\t" << animais[i]->getId() << "\t" << animais[i]->getEspecie() << endl;
            achou = true;
        }
    }
    if (achou == false){
        cout<< "Tratador não possui animais ao qual é responsável" << endl;
    }
}

void
PetShop::consultarTratador(string id_Tratador){
    bool achou = false;
    for(int i = 0; i < this->capacidade_tratador; i++){
        if (this -> trat[i] -> getId() == id_Tratador){
            cout << *trat[i] << endl
            << "Lista de animais responsável:" << endl;
            this-> listaAnimais_Tratador(id_Tratador);
            achou = true;
            break;
        }
    }
    if (achou == false){
        cout<< "Tratador não encontrado" << endl;
    }
}


void
PetShop::Funcionamento(){
    int primeiraescolha;
    int segundaescolha;
    cout << "Insira a area que deseja navegar dentro do petshop:" << endl;
    cout << "1 - Animal" << endl;
    cout << endl;
    cout << "2 - Veterinário" << endl;
    cout << endl;
    cout << "3 - Tratador" << endl;
    cout << endl;
    cin >> primeiraescolha;
    

    if (primeiraescolha == 1){//*********  ANIMAL  ***************
        cout << "Selecione a opção desejada:" << endl;
        cout << endl;
        cout << "1 - Cadastro de um novo animal" << endl;
        cout << endl;
        cout << "2 - Remoção de registro de animal" << endl;
        cout << endl;
        cout << "3 - Alteração de dados cadastrais de um animal" << endl;
        cout << endl;
        cout << "4 - Listagem dos dados cadastrais de um determinado animal" << endl;
        cout << endl;
        cout << "5 - Listar animais de uma determinada classe" << endl;
        cout << endl;
        cout << "6 - Listar todos os animais do petshop" << endl;
        cout << endl;
        cin >> segundaescolha;

        switch (segundaescolha){

            case 1: //*** Cadastro de um novo animal ****
            {
                this->CadastrarAnimal();
                break;
            }
            case 2://****  Remoção de registro de animal  ******
            {
                string id;
                if (this->capacidade_animal != 0){
                    cout << "Lista de animais:" << endl;
                    this->listarAnimais();
                    cout << "Informe o id do animal a ser removido:" << endl;
                    this->removerAnimal(id);
                }else{
                    cout << "Não existe animal disponivel para a remoção" << endl;
                }
                break;
            }
            case 3: //*****  Alteração de dados cadastrais de um animal  *******
            {
                this->alterar_dados_animal();
                break;
            } 
            case 4://******  Listagem dos dados cadastrais de um determinado animal  *******
            {
                string id;
                if (this->capacidade_animal != 0){
                    cout << "Lista de animais:" << endl;
                    this->listarAnimais();
                    cout << "Informe o id do animal a ser consultado:" << endl;
                    cin >> id;
                    this->consultarAnimal(id);
                }else{
                    cout << "Não existe animal disponivel no momento" << endl;
                }
                break;
            } 
            case 5://*****  Listar animais de uma determinada classe  *******
            {
                int s;
                cout << "Informe a classe de animal que deseja listar:" << endl
                     << "1.Anfibio" << endl
                     << "2.Ave" << endl
                     << "3.Mamifero" << endl
                     << "4.Reptil" << endl;
                cin >> s;
                switch (s) {
                    case 1:
                    {
                        this->listarAnfibios();
                        break;
                    }
                    case 2:
                    {
                        this->listarAves();
                        break;
                    }
                    case 3:
                    {
                        this->listarMamiferos();
                        cout << endl;
                        cout << "oi" << endl;
                        cout << mamifero[0]->getEspecie();
                    }
                    case 4:
                    {
                        this->listarRepteis();
                        break;
                    }
                    default:
                    {
                        cout << "Opção não cadastrada." << endl;
                    }
                }
                break;
            }
            case 6://*******  Listar todos os animais do petshop  *********
            {
                this->listarAnimais();
                break;
            }   
        }
    }else if(primeiraescolha == 2){//***********  VETERINARIO  **************
        cout << "Selecione a opção desejada:" << endl;
        cout << endl;
        cout << "1 - Cadastrar novo veterinário" << endl;
        cout << endl;
        cout << "2 - Remover cadastro de veterinario" << endl;
        cout << endl;
        cout << "3 - Alterar dados de um veterinário" << endl;
        cout << endl;
        cout << "4 - Consultar dados de veterinario" << endl;
        cout << endl;
        cout << "5 - Listar todos os veterinários do petshop" << endl;
        cout << endl;
        cout << "6 - Listar animais sob a responsabilidade de um determinado veterinário" << endl;
        cout << endl;
        cin >> segundaescolha;
        switch (segundaescolha){
            case 1://******  Cadastrar novo veterinário  *********
            {
                this->CadastrarVeterinario();
                break;
            }
            case 2://*******  Remover cadastro de veterinario  ********
            {
                string id;
                if (this->capacidade_veterinario != 0){
                    cout << "Lista de veterinários:" << endl;
                    this->listarVeterinarios();
                    cout << "Informe o id do veterinário a ser removido:" << endl;
                    this->removerVeterinario(id);
                }else{
                    cout << "Não existem veterinarios cadastrados " << endl;
                }
                break;
            }
            case 3://********  Alterar dados de um veterinário  *********
            {
                this->alterar_dados_veterinario();
                break;
            }
            case 4://*******  Consultar dados de veterinario  **********
            {
               string id;
               if (this->capacidade_veterinario != 0){
                    cout << "Lista de veterinários:" << endl;
                    this->listarVeterinarios();
                    cout << "Informe o id do veterinário a ser consultado:" << endl;
                    cin >> id;
                    this->consultarVeterinario(id);
                }else{
                    cout << "Não existem veterinarios cadastrados " << endl;
                }
                break;
            }
            case 5://*******  Listar todos os veterinários do petshop  **********
            {
                this->listarVeterinarios(); 
                break;
            }
            case 6://*******  Listar animais sob a responsabilidade de um determinado veterinário  ******
            {
                string id;
                if (this->capacidade_veterinario != 0){
                    cout << "Lista de veterinários disponiveis para consulta:" << endl;
                    this->listarVeterinarios();
                    cout << "Informe o id do veterinário para a verificação:" << endl;
                    cin >> id;
                    this->listaAnimais_Veterinario(id);
                }else{
                    cout << "Não existem veterinarios cadastrados " << endl;
                }
                break;
            }
        }

    }else if(primeiraescolha == 3){//******  TRATADOR  **********
        cout << "Selecione a opção desejada:" << endl;
        cout << endl;
        cout << "1 - Cadastrar novo tratador ao Petshop" << endl;
        cout << endl;
        cout << "2 - Remover cadastro de tratador" << endl;
        cout << endl;
        cout << "3 - Alterar dados de um determinado tratador" << endl;
        cout << endl;
        cout << "4 - Consultar dados de um tratador" << endl;
        cout << endl; 
        cout << "5 - Listar todos os tratadores do petshop" << endl;
        cout << endl;
        cout << "6 - Listar animais sob a responsabilidade de um determinado tratador" << endl;
        cout << endl;
        cin >> segundaescolha;
        switch (segundaescolha) {
            case 1://******  Cadastrar novo tratador ao Petshop  ********
            {
                this->CadastrarTratador();
                break;
            }
            case 2://*****  Remover cadastro de tratador  ********
            {
                string id;
                if ( this->capacidade_tratador != 0){
                    cout << "Lista de Tratadores:" << endl;
                    this->listarTratadores();
                    cout << "Informe o id do tratador a ser removido:" << endl;
                    cin >> id;
                    this->removerTratador(id);
                }else{
                    cout << "Não existe tratador diponivel para a remoção" << endl;
                }
                break;
            }
            case 3://******  Alterar dados de um determinado tratador  *******
            {
                this->alterar_dados_tratador();
                break;
            }
            case 4://********  Consultar dados de um tratador  *********
            {
               string id;
               if (this->capacidade_tratador != 0){
                    cout << "Lista de Tratadores:" << endl;
                    this->listarTratadores();
                    cout << "Informe o id do tratador a ser consultado:" << endl;
                    cin >> id;
                    this->consultarTratador(id);
                }else{
                    cout << "Não existe nenhum tratador no momento para ser consultado" << endl;
                }
                break;
            }
            case 5://********  Listar todos os tratadores do petshop  **********
            {
                this->listarTratadores();   
                break;
            }
            case 6://******  Listar animais sob a responsabilidade de um determinado tratador  *******
            {
                string id;
                if (this->capacidade_tratador != 0){
                    cout << "Lista de tradores disponiveis para consulta:" << endl;
                    this->listarTratadores();
                    cout << "Informe o id do tratador para a verificação:" << endl;
                    cin >> id;
                    this->listaAnimais_Tratador(id);
                }else{
                    cout << "Não exite nenhum tratador cadastrado no momento" << endl;
                }
                break;
            }
        }
        
    }else{
        cout << "Opção não disponivel." << endl;
    }
}

void
PetShop::CadastrarAnimal(){
    if (this->getCapacidade_veterinario() > 0 && this->getCapacidade_tratador() > 0){
        string nutri;
        string risco_ext;
        char perigoso;
        bool periculosi;
        string ID;
        string Especie;
        string Sexo;
        string Fecundacao;
        int escolha;
        bool pegouVet = true;
        cout << "Especie: " << endl;
        cin >> Especie;
        cout << "ID: " << endl;
        cin >> ID;
        cout << "Sexo: " << endl;
        cin >> Sexo;
        cout << "Fecundação: " << endl;
        cin >> Fecundacao;
        cout << "Nutrição(Carnivoro, Herbivoro, Onivoro): " << endl;
        cin >> nutri;
        cout << "Risco de extinção(Baixo, Médio, Alto): " << endl;
        cin >> risco_ext;
        cout << "Animal perigoso ou venenoso? (s/n) " << endl;
        do{ 
            cin >> perigoso;
            perigoso = toupper(perigoso); 
        }while(perigoso != 'S' && perigoso != 'N'); 
        if (perigoso == 'S'){ 
            periculosi = true;
        }
        else{
            periculosi = false;
        }
        
        Animal* bicho = new Animal(nutri, risco_ext,periculosi, ID, Especie, Sexo, Fecundacao);

        do{
            cout << "Segue abaixo uma lista disponivel de veterinários para cuidar do animal, escolha:" << endl;
            this->listarVeterinarios();
            cin >> escolha;
            if (escolha >= 0 && escolha < capacidade_veterinario){
                bicho->setVeterinario(*vets[escolha]);
                pegouVet = false;
            }
        }while(pegouVet);
        this->addAnimal(bicho);
        this->determinarclasse(bicho);
         
    }else{
        cout << "Animal não pode ser cadastrado pois não tem funcionário suficiente para cuidá-lo" << endl;
    } 
}

void
PetShop::CadastrarVeterinario(){
    string Nome;
    string ID;
    float Salario;
    string CRMV;
    cout << "Informe os dados necessário para o cadastro do veterinário" << endl;
    cout << "nome:" << endl;
    cin >> Nome;
    cout << "Id:" << endl;
    cin >> ID;
    cout << "Salário:" << endl;
    cin >> Salario;
    cout << "Crmv:" << endl;
    cin >> CRMV;

    Veterinario* veterinario = new Veterinario(Nome, ID, Salario, CRMV);
    this->addVeterinario(veterinario);
}

void PetShop::CadastrarTratador(){
    string Nome;
    string ID;
    float Salario;
    int Nivelseguranca;
    cout << "Informe os dados necessário para o cadastro do tratador" << endl;
    cout << "Nome:" << endl;
    cin >> Nome;
    cout << "Id:" << endl;
    cin >> ID;
    cout << "Salário:" << endl;
    cin >> Salario;
    do{
        cout << "Nivel de segurança:" << endl;
        cin >> Nivelseguranca;
        
        if(Nivelseguranca >= 0 && Nivelseguranca <= 2){
            break;
        }
        else{
            cout << "Nivel de segurança incompativel." << endl;
        }

        cout << "Informe o nivel de segurança do tratador novamente: " << endl;
        cin >> Nivelseguranca;

    }while(Nivelseguranca < 0 || Nivelseguranca > 2);
    
    Tratador* trat = new Tratador(Nome, ID, Salario, Nivelseguranca);
    this->addTratador(trat);
}

void
PetShop::alterar_dados_animal(){
    int i;
    bool mudar;
    char escolha;
    if ( this->capacidade_animal != 0){
    
        this->listarAnimais();
    
        cout << "Informe a posição do animal para alteração de seus dados:" << endl;
        cin >> i;
        cout << "Mudar a especie? (S/N)" << endl;
        cin >> escolha;
        mudar = verifiqueSimNao(escolha);
        if(mudar == true){
            string mudarespecie;
            cout << "Insira a nova especie" << endl;
            cin >> mudarespecie;
            animais[i]->setEspecie(mudarespecie);
        }
        cout << "Mudar o Id? (S/N)" << endl;
        cin >> escolha;
        mudar = verifiqueSimNao(escolha);
        if(mudar == true){
            string mudarid;
            cout << "Insira o novo Id" << endl;
            cin >> mudarid;
            animais[i]->setId(mudarid);
        }
        cout << "Mudar o sexo? (S/N)" << endl;
        cin >> escolha;
        mudar = verifiqueSimNao(escolha);
        if(mudar == true){
            string mudarsexo;
            cout << "Insira o novo sexo" << endl;
            cin >> mudarsexo;
            animais[i]->setSexo(mudarsexo);
        }
        cout << "Mudar o tipo de fecundação? (S/N)" << endl;
        cin >> escolha;
        mudar = verifiqueSimNao(escolha);
        if(mudar == true){
            string mudarfecundacao;
            cout << "Insira o novo tipo de fecundação" << endl;
            cin >> mudarfecundacao;
            animais[i]->setFecundacao(mudarfecundacao);
        }
        cout << "Mudar a nutrição? (S/N)" << endl;
        cin >> escolha;
        mudar = verifiqueSimNao(escolha);
        if(mudar == true){
            string mudarnutricao;
            cout << "Insira o novo tipo de nutrição" << endl;
            cin >> mudarnutricao;
            animais[i]->setNutricao(mudarnutricao);
        }
        cout << "Mudar o nivel do risco de extinção? (S/N)" << endl;
        cin >> escolha;
        mudar = verifiqueSimNao(escolha);
        if(mudar == true){
            string mudarextincao;
            cout << "Insira o novo nivel de risco de extinção" << endl;
            cin >> mudarextincao;
            animais[i]->setRisco_extincao(mudarextincao);
        }
        cout << "Mudar se o animal é perigoso? (S/N)" << endl;
        cin >> escolha;
        mudar = verifiqueSimNao(escolha);
        if(mudar == true){
            bool mudarpericulosidade;
            cout << "Insira se o animal é perigoso (S/N)" << endl;
            cin >> escolha;
            mudarpericulosidade = verifiqueSimNao(escolha);
            animais[i]->setPericulosidade(mudarpericulosidade);
        }
        cout << "Mudar o tratador do animal? (S/N)" << endl;
        cin >> escolha;
        mudar = verifiqueSimNao(escolha);
        if(mudar == true){
            int p, classe_animal = -1;
            do{
                cout << "Informe a classe atual do animal: " << endl
                    << "\t0 - Ave ou anfibio " << endl
                    << "\t1 - Mamifero ou reptil " << endl;
                cin >> classe_animal;
            }while(classe_animal < 0 || classe_animal > 1);
            p = pegarTratador(*animais[i], classe_animal);
            if(p != -1){
                animais[i]->setTratador(*trat[p]);
            }else{
                cout << "Não foi possivel realizar a alteração." << endl;
            }
        }
        cout << "Mudar o veterinário do animal? (S/N)" << endl;
        cin >> escolha;
        mudar = verifiqueSimNao(escolha);
        if(mudar == true){
            int s;
            this->listarVeterinarios();
            cout << "Informe a posição do veterinário na lista para que se responsabilize pelo animal" << endl;
            cin >> s;
            animais[i]->setVeterinario(*vets[s]);
        }
    }else{
        cout << "Não existe nenhum animal para ser alterado" << endl;
    }
}

void
PetShop::alterar_dados_veterinario(){
    int i;
    bool mudar;
    char escolha;
    if ( this->capacidade_veterinario != 0){
        
        this->listarVeterinarios();
    
        cout << "Informe a posição do veterinário para alteração de seus dados:" << endl;
        cin >> i;
        cout << "Mudar o nome? (S/N)" << endl;
        cin >> escolha;
        mudar = verifiqueSimNao(escolha);
        if(mudar == true){
            string mudarNome;
            cout << "Insira o novo nome:" << endl;
            cin >> mudarNome;
            vets[i]->setNome(mudarNome);
        }
        cout << "Mudar o id? (S/N)" << endl;
        cin >> escolha;
        mudar = verifiqueSimNao(escolha);
        if(mudar == true){
            string mudarId;
            cout << "Insira o nome id:" << endl;
            cin >> mudarId;
            vets[i]->setId(mudarId);
        }
        cout << "Mudar o salário? (S/N)" << endl;
        cin >> escolha;
        mudar = verifiqueSimNao(escolha);
        if(mudar == true){
            float mudarSalario;
            cout << "Insira o novo salário:" << endl;
            cin >> mudarSalario;
            vets[i]->setSalario(mudarSalario);
        }
        cout << "Mudar o crmv? (S/N)" << endl;
        cin >> escolha;
        mudar = verifiqueSimNao(escolha);
        if(mudar == true){
            string mudarCrmv;
            cout << "Insira o novo crmv:" << endl;
            cin >> mudarCrmv;
            vets[i]->setCrmv(mudarCrmv);
        }
    }else{
        cout << "Não existe nenhum veterinário para ser alterado" << endl;
    }
}

void 
PetShop::alterar_dados_tratador(){
    int i;
    bool mudar;
    char escolha;
    if ( this->capacidade_tratador != 0){
        
        this->listarTratadores();
    
        cout << "Informe a posição do tratador para alteração de seus dados:" << endl;
        cin >> i;
        cout << "Mudar o nome? (S/N)" << endl;
        cin >> escolha;
        mudar = verifiqueSimNao(escolha);
        if(mudar == true){
            string mudarNome;
            cout << "Insira o novo nome:" << endl;
            cin >> mudarNome;
            trat[i]->setNome(mudarNome);
        }
        cout << "Mudar o id? (S/N)" << endl;
        cin >> escolha;
        mudar = verifiqueSimNao(escolha);
        if(mudar == true){
            string mudarId;
            cout << "Insira o nome id:" << endl;
            cin >> mudarId;
            trat[i]->setId(mudarId);
        }
        cout << "Mudar o salário? (S/N)" << endl;
        cin >> escolha;
        mudar = verifiqueSimNao(escolha);
        if(mudar == true){
            float mudarSalario;
            cout << "Insira o novo salário:" << endl;
            cin >> mudarSalario;
            trat[i]->setSalario(mudarSalario);
        }
        cout << "Mudar o nivel de segurança? (S/N)" << endl;
        cin >> escolha;
        mudar = verifiqueSimNao(escolha);
        if(mudar == true){
            int mudarNivelseguranca;
            cout << "Insira o novo nivel de segurança:" << endl;
            cin >> mudarNivelseguranca;
            trat[i]->setNivelSeguranca(mudarNivelseguranca);
        }
    }else{
        cout << "Não existe nenhum tratador para ser alterado" << endl;
    }
}

bool PetShop::verifiqueSimNao(char opcao){
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