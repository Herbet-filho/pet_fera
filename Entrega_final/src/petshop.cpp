#include <iostream>
#include "petshop.hpp"

using namespace std;

PetShop::PetShop (){
    this -> nome = "Indefinido";
}

PetShop::PetShop(string nome):nome(nome){}

PetShop::~PetShop(){}

string PetShop::getNome(){
    return this -> nome;
}

void
PetShop::setNome(string nome){
    this -> nome = nome;
}


Animal* PetShop::getAnimais(int i){
    return this->animais[i];
}
Veterinario* PetShop::getVeterinarios(int i){
    return this->vets[i];
}

Tratador* PetShop::getTratadores(int i){
    return this->trat[i];
}

void
PetShop::listarAnimais(){
    if ( (int)animais.size() == 0){
        cout << "Nenhum animal foi inserido" << endl;
    }else{
        for(int i = 0; i < (int)animais.size(); i++){
            cout << i << "\t" << animais[i]->getId() << "\t" << animais[i]->getEspecie() << endl;
    }
    }
}
void
PetShop::listarAnfibios(){
    bool achou = false;
    for(int i = 0; i < (int)animais.size(); i++){
        if(animais[i]-> getClas() == ANFIBIO){
            cout << "\t" << animais[i]->getId() << "\t" << animais[i]->getEspecie() << endl;
            achou = true;
        }
    }
    if (achou == false){
        cout<< "O petshop não possui nenhum animal dessa classe inserido no momento" << endl;
    }
}
void
PetShop::listarAves(){
    bool achou = false;
    for(int i = 0; i < (int)animais.size(); i++){
        if(animais[i]-> getClas() == AVE){
            cout << "\t" << animais[i]->getId() << "\t" << animais[i]->getEspecie() << endl;
            achou = true;
        }
    }
    if (achou == false){
        cout<< "O petshop não possui nenhum animal dessa classe inserido no momento" << endl;
    }
}
void
PetShop::listarMamiferos(){
    bool achou = false;
    for(int i = 0; i < (int)animais.size(); i++){
        if(animais[i]-> getClas() == MAMIFERO){
            cout << "\t" << animais[i]->getId() << "\t" << animais[i]->getEspecie() << endl;
            achou = true;
        }
    }
    if (achou == false){
        cout<< "O petshop não possui nenhum animal dessa classe inserido no momento" << endl;
    }
}

void
PetShop::listarRepteis(){
    bool achou = false;
    for(int i = 0; i < (int)animais.size(); i++){
        if(animais[i]-> getClas() == REPTIL){
            cout << "\t" << animais[i]->getId() << "\t" << animais[i]->getEspecie() << endl;
            achou = true;
        }
    }
    if (achou == false){
        cout<< "O petshop não possui nenhum animal dessa classe inserido no momento" << endl;
    }
}

void
PetShop::listarVeterinarios(){
    if ((int)vets.size() == 0){
        cout << "Nenhum veterinário foi inserido ainda" << endl;
    }else{
        for(int i = 0; i < (int)vets.size(); i++){
            cout << i << "\t" << vets[i]->getId() << "\t" << vets[i]->getNome() << endl;
        }
    }
}

void
PetShop::listarTratadores(){
    if ((int)trat.size() == 0){
        cout << "Nenhum tratador foi inserido ainda" << endl;
    }else{
        for(int i = 0; i < (int)trat.size(); i++){
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

        cout << "Segue abaixo uma lista disponivel de tratadores para cuidar do animal, escolha pelo indice: " << endl;
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
            << "Deseja escolher outro tratador('S') ou sair ('N')? " << endl;
        cin >> opcao;
        achou = verifiqueSimNao(opcao);
        if (!achou){
            escolhido = -1;
        }
        
    }while(achou);
    
    return escolhido;
}

//Funções que adicionam animais a listas de classes:
void
PetShop::addAnimal(Animal* animal_inserido){
    animais.push_back(animal_inserido);
}

void
PetShop::addVeterinario(Veterinario* veterinario_inserido){
    vets.push_back(veterinario_inserido);
}

void
PetShop::addTratador(Tratador* tratador_inserido){
        trat.push_back(tratador_inserido);
}

void
PetShop::removerAnimal(string id_Animal){
    bool encontrado = false;
    int i;
    if ( (int)animais.size() == 1){
        encontrado = true;
    }
    for (i = 0; i < (int)animais.size(); i++){
        if (this -> animais[i]->getId() == id_Animal && i < (int)animais.size() - 1){
            Animal* aux = animais[i];
            animais[i] = animais[i+1];
            animais[i+1] = aux;
        }
        if (this -> animais[i]->getId() == id_Animal && i == (int)animais.size() - 1){
            encontrado = true;
        }
    }
    if (encontrado == true){
        animais.pop_back();
        cout << "Animal removido com sucesso" << endl;
    }else{
        cout << "Animal não encontrado" << endl;
    }
}

void
PetShop::removerVeterinario(string id_Veterinario){
    bool encontrado = false;
    int i;
    if ( (int)vets.size() == 1){
        encontrado = true;
    }
    for (i = 0; i < (int)vets.size(); i++){
        if (this -> vets[i]->getId() == id_Veterinario && i < (int)vets.size() - 1){
            Veterinario* aux = vets[i];
            vets[i] = vets[i+1];
            vets[i+1] = aux;
        }
        if (this -> vets[i]->getId() == id_Veterinario && i == (int)vets.size() - 1){
            encontrado = true;
        }
    }
    if (encontrado == true){
        vets.pop_back();
        cout << "Veterinário removido com sucesso" << endl;
    }else{
        cout << "Veterinário não encontrado" << endl;
    }
}

void 
PetShop::removerTratador(string id_Tratador){
    bool encontrado = false;
    int i;
    if ( (int)trat.size() == 1){
        encontrado = true;
    }
    for (i = 0; i < (int)trat.size(); i++){
        if (this -> trat[i]->getId() == id_Tratador && i < (int)trat.size() - 1){
            Tratador* aux = trat[i];
            trat[i] = trat[i+1];
            trat[i+1] = aux;
        }
        if (this -> trat[i]->getId() == id_Tratador && i == (int)trat.size() - 1){
            encontrado = true;
        }
    }
    if (encontrado == true){
        trat.pop_back();
        cout << "Tratador removido com sucesso" << endl;
    }else{
        cout << "Tratador não encontrado" << endl;
    }
}

Tratador* PetShop::procurarTratador(string id_Tratador){
    int i, aux;
    for (i = 0; i < (int)trat.size(); i++){
        if (this -> trat[i]->getId() == id_Tratador){
            aux = i;
        }
    }
    return trat[aux];
}

Veterinario* PetShop::procurarVeterinarioId(string id_Vet){
    int i, aux;
    for (i = 0; i < (int)vets.size(); i++){
        if (this -> vets[i]->getId() == id_Vet){
            aux = i;
        }
    }
    return vets[aux];
}

void PetShop::setTratadorId(Animal* bicho, string id){
    Tratador* trat = procurarTratador(id);
    bicho->setTratador(*trat);
}

void PetShop::setVeterinarioId(Animal* bicho, string id){
    Veterinario* vet = procurarVeterinarioId(id);
    bicho->setVeterinario(*vet);
}

void
PetShop::consultarAnimal(string id_Animal){
    bool achou = false;
    for(int i = 0; i < (int)animais.size(); i++){
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
    for(int i = 0; i < (int)vets.size(); i++){
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
PetShop::consultarTratador(string id_Tratador){
    bool achou = false;
    for(int i = 0; i < (int)trat.size(); i++){
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
PetShop::listaAnimais_Tratador(string id_Tratador){
    bool achou = false;
    for(int i = 0; i < (int)animais.size(); i++){
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
    for(int i = 0; i < (int)animais.size(); i++){
        if(animais[i]->getIdVeterinario() == id_Veterinario){
            cout << "\t" << animais[i]->getId() << "\t" << animais[i]->getEspecie() << endl;
            achou = true;
        }
    }
    if (achou == false){
        cout<< "Veterinário não possui animais ao qual é responsável" << endl;
    }
}


void
PetShop::Funcionamento(){
    int primeiraescolha;
    int segundaescolha;
    cout << "Insira a área que deseja navegar dentro do petshop:" << endl;
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
                if ((int)animais.size() != 0){
                    cout << "Lista de animais:" << endl;
                    this->listarAnimais();
                    cout << "Informe o id do animal a ser removido:" << endl;
                    cin >> id;
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
                if ((int)animais.size() != 0){
                    cout << "Lista de animais:" << endl;
                    this->listarAnimais();
                    cout << "Informe o id do animal a ser consultado:" << endl;
                    cin >> id;
                    cout << endl;
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
                        break;
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
                if ((int)vets.size() != 0){
                    cout << "Lista de veterinários:" << endl;
                    this->listarVeterinarios();
                    cout << "Informe o id do veterinário a ser removido:" << endl;
                    cin >> id;
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
               if ((int)vets.size() != 0){
                    cout << "Lista de veterinários:" << endl;
                    this->listarVeterinarios();
                    cout << "Informe o id do veterinário a ser consultado:" << endl;
                    cin >> id;
                    cout << endl;
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
                if ((int)vets.size() != 0){
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
                if ( (int)trat.size() != 0){
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
               if ((int)trat.size() != 0){
                    cout << "Lista de Tratadores:" << endl;
                    this->listarTratadores();
                    cout << "Informe o id do tratador a ser consultado:" << endl;
                    cin >> id;
                    cout << endl;
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
                if ((int)trat.size() != 0){
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

void PetShop::controleFuncionamento(){
    char s;
    bool continua = true;
    do{
        Funcionamento();
        cout << endl;
        cout << "Deseja encerrar o programa? (S/N)" << endl;
        cin >> s;
        continua = verifiqueSimNao(s);
    }while (!continua); 
}

void
PetShop::CadastrarAnimal(){
    if ((int)vets.size() > 0 && (int)trat.size() > 0){
        char tipo;
        string nutri;
        string risco_ext;
        char perigoso;
        bool periculosi;
        string ID;
        string Especie;
        string Sexo;
        string Fecundacao;
        int escolha, escolha2, i;
        bool pegouVet = true;
        bool boolean1;
        string str1, str2, str3, str4;
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
        

        cout << "Determine a classe do animal:"<<endl
        << "\t1 - Anfibio" << endl
        << "\t2 - Ave" << endl
        << "\t3 - Mamifero" << endl
        << "\t4 - Reptil" << endl;
        cin >> escolha2;

        switch(escolha2){
            
            case 1: // ******  Anfibio ****** //
            {
                cout << "Temperatura ambiente: " << endl;
                cin >> str1;
                cout << "Umidade do ambiente: " << endl;
                cin >> str2;
                cout << "Periodo de muda: " << endl;
                cin >> str3;
                cout << "Tipo de respiração:" << endl;
                cin >> str4;
                cout << "Defina o tipo de Anfibio: (D, E, N)" << endl 
                << "\tD - Doméstico" << endl
                << "\tE - Exótico" << endl
                << "\tN - Nativo" << endl;
                do{ 
                    cin >> tipo;
                    tipo = toupper(tipo); 
                }while(tipo != 'D' && tipo != 'E' && tipo != 'N');
                
                if (tipo == 'D'){ ///////////ANFIBIO DOMESTICO//////////////
                    bool str5;
                    char anfibio_pedigree;
                    cout << "Animal tem pedigree? (s/n)" << endl;
                    do{ 
                        cin >> anfibio_pedigree;
                        anfibio_pedigree = toupper(anfibio_pedigree); 
                    }while(anfibio_pedigree != 'S' && anfibio_pedigree != 'N'); 
                    if (anfibio_pedigree == 'S'){ 
                        str5 = true;
                    }
                    else{
                        str5 = false;
                    }
                    Animal* bicho = new AnfibioDomestico(nutri, risco_ext, periculosi, ID, Especie, Sexo,
                    Fecundacao, str1, str2,  str3, str4, str5);
                    
                    i = pegarTratador(*bicho, 0);
                    if (i == -1){
                        cout << "A operação não pode ser finalizada.";
                        this->removerAnimal(bicho->getId());
                        break;
                    }
                    bicho->setTratador(*trat[i]);
                    do{
                        cout << "Segue abaixo uma lista disponivel de veterinários para cuidar do animal, escolha:" << endl;
                        this->listarVeterinarios();
                        cin >> escolha;
                        if (escolha >= 0 && escolha < (int)vets.size()){
                            bicho->setVeterinario(*vets[escolha]);
                            pegouVet = false;
                        }
                    }while(pegouVet);

                    bicho->setClas(ANFIBIO);
                    bicho->setTip(DOMESTICO);

                    this->addAnimal(bicho);
                }
                if (tipo == 'E'){ //////////ANFIBIO EXOTICO/////////
                    string str5;
                    cout << "Informe a região originária do animal:" << endl;
                    cin >> str5;

                    Animal* bicho = new AnfibioExotico(nutri, risco_ext, periculosi, ID, Especie, Sexo,
                    Fecundacao, str1, str2,  str3, str4, str5);

                    i = pegarTratador(*bicho, 0);
                    if (i == -1){
                        cout << "A operação não pode ser finalizada.";
                        this->removerAnimal(bicho->getId());
                        break;
                    }
                    bicho->setTratador(*trat[i]);
                    do{
                        cout << "Segue abaixo uma lista disponivel de veterinários para cuidar do animal, escolha:" << endl;
                        this->listarVeterinarios();
                        cin >> escolha;
                        if (escolha >= 0 && escolha < (int)vets.size()){
                            bicho->setVeterinario(*vets[escolha]);
                            pegouVet = false;
                        }
                    }while(pegouVet);

                    bicho->setClas(ANFIBIO);
                    bicho->setTip(EXOTICO);

                    this->addAnimal(bicho);
                }
                if (tipo == 'N'){ /////////ANFIBIO NATIVO//////////
                    bool str5;
                    char anfibio_permissao;
                    cout << "O animal tem permissão do ibama para manejo? (s/n)" << endl;
                    do{ 
                        cin >> anfibio_permissao;
                        anfibio_permissao = toupper(anfibio_permissao); 
                    }while(anfibio_permissao != 'S' && anfibio_permissao != 'N'); 
                    if (anfibio_permissao == 'S'){ 
                        str5 = true;
                    }
                    else{
                        str5 = false;
                    }

                    if (str5 == false){
                        cout << "O animal n pôde ser cadastrado, pois não possui permissão do ibama para manejo" << endl;
                    }else{
                        Animal* bicho= new AnfibioNativo(nutri, risco_ext, periculosi, ID, Especie, Sexo,
                        Fecundacao, str1, str2,  str3, str4, str5);
                        
                        i = pegarTratador(*bicho, 0);
                        if (i == -1){
                            cout << "A operação não pode ser finalizada.";
                            this->removerAnimal(bicho->getId());
                            break;
                        }
                        bicho->setTratador(*trat[i]);
                        do{
                            cout << "Segue abaixo uma lista disponivel de veterinários para cuidar do animal, escolha:" << endl;
                            this->listarVeterinarios();
                            cin >> escolha;
                            if (escolha >= 0 && escolha < (int)vets.size()){
                                bicho->setVeterinario(*vets[escolha]);
                                pegouVet = false;
                            }
                        }while(pegouVet);

                        bicho->setClas(ANFIBIO);
                        bicho->setTip(NATIVO);

                        this->addAnimal(bicho);
                    }
                }

                break;
            }
            case 2: // *******  Ave  ************ //
            {
                
                char escolha3;
                cout << "Informe se voa (S/N): " << endl;
                cin >> escolha3;
                boolean1 = verifiqueSimNao(escolha3);
                cout << "Cor:" << endl;
                cin >> str1;
                cout << "Tipo:" << endl;
                cin >> str2;
                cout << "Defina o tipo de Ave: (D, E, N)" << endl 
                << "\tD - Doméstica" << endl
                << "\tE - Exótica" << endl
                << "\tN - Nativa" << endl;
                do{ 
                    cin >> tipo;
                    tipo = toupper(tipo); 
                }while(tipo != 'D' && tipo != 'E' && tipo != 'N');

                if (tipo == 'D'){ ///////////AVE DOMESTICA//////////////
                    bool str5;
                    char ave_pedigree;
                    cout << "Animal tem pedigree? (s/n)" << endl;
                    do{ 
                        cin >> ave_pedigree;
                        ave_pedigree = toupper(ave_pedigree); 
                    }while(ave_pedigree != 'S' && ave_pedigree != 'N'); 
                    if (ave_pedigree == 'S'){ 
                        str5 = true;
                    }
                    else{
                        str5 = false;
                    }
                    Animal* bicho =new AveDomestica(nutri, risco_ext, periculosi, ID, Especie, Sexo,
                    Fecundacao, boolean1, str1, str2, str5);
                    
                    i = pegarTratador(*bicho, 0);
                    if (i == -1){
                        cout << "A operação não pode ser finalizada.";
                        this->removerAnimal(bicho->getId());
                        break;
                    }
                    bicho->setTratador(*trat[i]);
                    do{
                        cout << "Segue abaixo uma lista disponivel de veterinários para cuidar do animal, escolha:" << endl;
                        this->listarVeterinarios();
                        cin >> escolha;
                        if (escolha >= 0 && escolha < (int)vets.size()){
                            bicho->setVeterinario(*vets[escolha]);
                            pegouVet = false;
                        }
                    }while(pegouVet);

                    bicho->setClas(AVE);
                    bicho->setTip(DOMESTICO);

                    this->addAnimal(bicho);
                }
                
                if (tipo == 'E'){ //////////AVE EXOTICA/////////
                    string str5;
                    cout << "Informe a região originária do animal:" << endl;
                    cin >> str5;

                    Animal* bicho =new AveExotica(nutri, risco_ext, periculosi, ID, Especie, Sexo,
                    Fecundacao, boolean1, str1, str2, str5);

                    i = pegarTratador(*bicho, 0);
                    if (i == -1){
                        cout << "A operação não pode ser finalizada.";
                        this->removerAnimal(bicho->getId());
                        break;
                    }
                    bicho->setTratador(*trat[i]);
                    do{
                        cout << "Segue abaixo uma lista disponivel de veterinários para cuidar do animal, escolha:" << endl;
                        this->listarVeterinarios();
                        cin >> escolha;
                        if (escolha >= 0 && escolha < (int)vets.size()){
                            bicho->setVeterinario(*vets[escolha]);
                            pegouVet = false;
                        }
                    }while(pegouVet);

                    bicho->setClas(AVE);
                    bicho->setTip(EXOTICO);

                    this->addAnimal(bicho);
                }

                if (tipo == 'N'){ /////////AVE NATIVA//////////
                    bool str5;
                    char ave_permissao;
                    cout << "O animal tem permissão do ibama para manejo? (s/n)" << endl;
                    do{ 
                        cin >> ave_permissao;
                        ave_permissao = toupper(ave_permissao); 
                    }while(ave_permissao != 'S' && ave_permissao != 'N'); 
                    if (ave_permissao == 'S'){ 
                        str5 = true;
                    }
                    else{
                        str5 = false;
                    }

                    if (str5 == false){
                        cout << "O animal n pôde ser cadastrado, pois não possui permissão do ibama para manejo" << endl;
                    }else{
                        Animal* bicho =new AveNativa(nutri, risco_ext, periculosi, ID, Especie, Sexo,
                        Fecundacao, boolean1, str1, str2, str5);
                        
                        i = pegarTratador(*bicho, 0);
                        if (i == -1){
                            cout << "A operação não pode ser finalizada.";
                            this->removerAnimal(bicho->getId());
                            break;
                        }
                        bicho->setTratador(*trat[i]);
                        do{
                            cout << "Segue abaixo uma lista disponivel de veterinários para cuidar do animal, escolha:" << endl;
                            this->listarVeterinarios();
                            cin >> escolha;
                            if (escolha >= 0 && escolha < (int)vets.size()){
                                bicho->setVeterinario(*vets[escolha]);
                                pegouVet = false;
                            }
                        }while(pegouVet);

                        bicho->setClas(AVE);
                        bicho->setTip(NATIVO);

                        this->addAnimal(bicho);
                    }
                }

                break;
            }
            case 3: // ***********  Mamifero  **************** //
            {
                cout << "Pelagem: " << endl;
                cin >> str1;
                cout << "Tipo de deslocamento: " << endl;
                cin >> str2;
                cout << "Defina o tipo de Mamifero: (D, E, N)" << endl 
                << "\tD - Doméstico" << endl
                << "\tE - Exótico" << endl
                << "\tN - Nativo" << endl;
                do{ 
                    cin >> tipo;
                    tipo = toupper(tipo); 
                }while(tipo != 'D' && tipo != 'E' && tipo != 'N');

                if (tipo == 'D'){ ///////////MAMIFERO DOMESTICO//////////////
                    bool str5;
                    char mamifero_pedigree;
                    cout << "Animal tem pedigree? (s/n)" << endl;
                    do{ 
                        cin >> mamifero_pedigree;
                        mamifero_pedigree = toupper(mamifero_pedigree); 
                    }while(mamifero_pedigree != 'S' && mamifero_pedigree != 'N'); 
                    if (mamifero_pedigree == 'S'){ 
                        str5 = true;
                    }
                    else{
                        str5 = false;
                    }
                    Animal* bicho=new MamiferoDomestico(nutri, risco_ext, periculosi, ID, Especie, Sexo,
                    Fecundacao, str1, str2, str5);
                    
                    i = pegarTratador(*bicho, 1);
                    if (i == -1){
                        cout << "A operação não pode ser finalizada.";
                        this->removerAnimal(bicho->getId());
                        break;
                    }
                    bicho->setTratador(*trat[i]);
                    do{
                        cout << "Segue abaixo uma lista disponivel de veterinários para cuidar do animal, escolha:" << endl;
                        this->listarVeterinarios();
                        cin >> escolha;
                        if (escolha >= 0 && escolha < (int)vets.size()){
                            bicho->setVeterinario(*vets[escolha]);
                            pegouVet = false;
                        }
                    }while(pegouVet);

                    bicho->setClas(MAMIFERO);
                    bicho->setTip(DOMESTICO);

                    this->addAnimal(bicho);
                }

                if (tipo == 'E'){ //////////MAMIFERO EXOTICO/////////
                    string str5;
                    cout << "Informe a região originária do animal:" << endl;
                    cin >> str5;

                    Animal* bicho=new MamiferoExotico(nutri, risco_ext, periculosi, ID, Especie, Sexo,
                    Fecundacao, str1, str2, str5);

                    i = pegarTratador(*bicho, 1);
                    if (i == -1){
                        cout << "A operação não pode ser finalizada.";
                        this->removerAnimal(bicho->getId());
                        break;
                    }
                    bicho->setTratador(*trat[i]);
                    do{
                        cout << "Segue abaixo uma lista disponivel de veterinários para cuidar do animal, escolha:" << endl;
                        this->listarVeterinarios();
                        cin >> escolha;
                        if (escolha >= 0 && escolha < (int)vets.size()){
                            bicho->setVeterinario(*vets[escolha]);
                            pegouVet = false;
                        }
                    }while(pegouVet);

                    bicho->setClas(MAMIFERO);
                    bicho->setTip(EXOTICO);

                    this->addAnimal(bicho);
                }

                if (tipo == 'N'){ /////////MAMIFERO NATIVO//////////
                    bool str5;
                    char mamifero_permissao;
                    cout << "O animal tem permissão do ibama para manejo? (s/n)" << endl;
                    do{ 
                        cin >> mamifero_permissao;
                        mamifero_permissao = toupper(mamifero_permissao); 
                    }while(mamifero_permissao != 'S' && mamifero_permissao != 'N'); 
                    if (mamifero_permissao == 'S'){ 
                        str5 = true;
                    }
                    else{
                        str5 = false;
                    }

                    if (str5 == false){
                        cout << "O animal n pôde ser cadastrado, pois não possui permissão do ibama para manejo" << endl;
                    }else{
                        Animal* bicho= new MamiferoNativo(nutri, risco_ext, periculosi, ID, Especie, Sexo,
                        Fecundacao, str1, str2, str5);
                        
                        i = pegarTratador(*bicho, 1);
                        if (i == -1){
                            cout << "A operação não pode ser finalizada.";
                            this->removerAnimal(bicho->getId());
                            break;
                        }
                        bicho->setTratador(*trat[i]);
                        do{
                            cout << "Segue abaixo uma lista disponivel de veterinários para cuidar do animal, escolha:" << endl;
                            this->listarVeterinarios();
                            cin >> escolha;
                            if (escolha >= 0 && escolha < (int)vets.size()){
                                bicho->setVeterinario(*vets[escolha]);
                                pegouVet = false;
                            }
                        }while(pegouVet);

                        bicho->setClas(MAMIFERO);
                        bicho->setTip(NATIVO);

                        this->addAnimal(bicho);
                    }
                }
   
                break;
            }
            case 4: // **********  Reptil  *********** //
            {
                cout<< "locomoçao: " << endl;
                cin >> str1;
                cout<< "Periodo de muda: " << endl;
                cin >>str2;
                cout << "Defina o tipo de Reptil: (D, E, N)" << endl 
                << "\tD - Doméstico" << endl
                << "\tE - Exótico" << endl
                << "\tN - Nativo" << endl;
                do{ 
                    cin >> tipo;
                    tipo = toupper(tipo); 
                }while(tipo != 'D' && tipo != 'E' && tipo != 'N');

                if (tipo == 'D'){ ///////////REPTIL DOMESTICO//////////////
                    bool str5;
                    char reptil_pedigree;
                    cout << "Animal tem pedigree? (s/n)" << endl;
                    do{ 
                        cin >> reptil_pedigree;
                        reptil_pedigree = toupper(reptil_pedigree); 
                    }while(reptil_pedigree != 'S' && reptil_pedigree != 'N'); 
                    if (reptil_pedigree == 'S'){ 
                        str5 = true;
                    }
                    else{
                        str5 = false;
                    }
                    Animal* bicho=new ReptilDomestico(nutri, risco_ext, periculosi, ID, Especie, Sexo,
                    Fecundacao, str1, str2, str5);
                    
                    i = pegarTratador(*bicho, 1);
                    if (i == -1){
                        cout << "A operação não pode ser finalizada.";
                        this->removerAnimal(bicho->getId());
                        break;
                    }
                    bicho->setTratador(*trat[i]);
                    do{
                        cout << "Segue abaixo uma lista disponivel de veterinários para cuidar do animal, escolha:" << endl;
                        this->listarVeterinarios();
                        cin >> escolha;
                        if (escolha >= 0 && escolha < (int)vets.size()){
                            bicho->setVeterinario(*vets[escolha]);
                            pegouVet = false;
                        }
                    }while(pegouVet);

                    bicho->setClas(REPTIL);
                    bicho->setTip(DOMESTICO);

                    this->addAnimal(bicho);
                }
                
                if (tipo == 'E'){ //////////REPTIL EXOTICO/////////
                    string str5;
                    cout << "Informe a região originária do animal:" << endl;
                    cin >> str5;

                    Animal* bicho= new ReptilExotico(nutri, risco_ext, periculosi, ID, Especie, Sexo,
                    Fecundacao, str1, str2, str5);

                    i = pegarTratador(*bicho, 1);
                    if (i == -1){
                        cout << "A operação não pode ser finalizada.";
                        this->removerAnimal(bicho->getId());
                        break;
                    }
                    bicho->setTratador(*trat[i]);
                    do{
                        cout << "Segue abaixo uma lista disponivel de veterinários para cuidar do animal, escolha:" << endl;
                        this->listarVeterinarios();
                        cin >> escolha;
                        if (escolha >= 0 && escolha < (int)vets.size()){
                            bicho->setVeterinario(*vets[escolha]);
                            pegouVet = false;
                        }
                    }while(pegouVet);

                    bicho->setClas(REPTIL);
                    bicho->setTip(EXOTICO);

                    this->addAnimal(bicho);
                }

                if (tipo == 'N'){ /////////REPTIL NATIVO//////////
                    bool str5;
                    char reptil_permissao;
                    cout << "O animal tem permissão do ibama para manejo? (s/n)" << endl;
                    do{ 
                        cin >> reptil_permissao;
                        reptil_permissao = toupper(reptil_permissao); 
                    }while(reptil_permissao != 'S' && reptil_permissao != 'N'); 
                    if (reptil_permissao == 'S'){ 
                        str5 = true;
                    }
                    else{
                        str5 = false;
                    }

                    if (str5 == false){
                        cout << "O animal n pôde ser cadastrado, pois não possui permissão do ibama para manejo" << endl;
                    }else{
                        Animal* bicho=new ReptilNativo(nutri, risco_ext, periculosi, ID, Especie, Sexo,
                        Fecundacao, str1, str2, str5);
                        
                        i = pegarTratador(*bicho, 1);
                        if (i == -1){
                            cout << "A operação não pode ser finalizada.";
                            this->removerAnimal(bicho->getId());
                            break;
                        }
                        bicho->setTratador(*trat[i]);
                        do{
                            cout << "Segue abaixo uma lista disponivel de veterinários para cuidar do animal, escolha:" << endl;
                            this->listarVeterinarios();
                            cin >> escolha;
                            if (escolha >= 0 && escolha < (int)vets.size()){
                                bicho->setVeterinario(*vets[escolha]);
                                pegouVet = false;
                            }
                        }while(pegouVet);

                        bicho->setClas(REPTIL);
                        bicho->setTip(NATIVO);

                        this->addAnimal(bicho);
                    }
                }

                break;
            }
        }
    }else{
        cout << "Animal não pode ser cadastrado pois o petshop não possui funcionários suficientes para cuidá-lo" << endl;
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

    Veterinario *veterinario = new Veterinario(Nome, ID, Salario, CRMV);
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
    
    Tratador* trat =new Tratador(Nome, ID, Salario, Nivelseguranca);
    this->addTratador(trat);
}

void
PetShop::alterar_dados_animal(){
    int i;
    bool mudar;
    char escolha;
    if ( (int)animais.size() != 0){
    
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
    if ( (int)vets.size() != 0){
        
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
            cout << "Insira o novo id:" << endl;
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
    if ( (int)trat.size() != 0){
        
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
            cout << "Insira o novo id:" << endl;
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

int
PetShop::getsizeanimais(){
    return this->animais.size();
}

int
PetShop::getSizeVeterinarios(){
    return this->vets.size();
}


int
PetShop::getSizeTratadores(){
    return this->trat.size();
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
