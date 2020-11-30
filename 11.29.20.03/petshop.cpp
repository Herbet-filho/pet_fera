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
        cout << i << "\t" << animais[i]->getId() << "\t" << animais[i]->getEspecie() << endl;
    }
}
void
PetShop::listarAnfibios(){
    for(int i = 0; i < this->capacidade_anfibio; i++){
        cout << i << "\t" << anfibio[i]->getId() << "\t" << anfibio[i]->getEspecie() << endl;
    }
}
void
PetShop::listarAves(){
    for(int i = 0; i < this->capacidade_ave; i++){
        cout << i << "\t" << ave[i]->getId() << "\t" << ave[i]->getEspecie() << endl;
    }
}
void
PetShop::listarMamiferos(){
    for(int i = 0; i < this->capacidade_mamifero; i++){
        cout << i << "\t" << mamifero[i]->getId() << "\t" << mamifero[i]->getEspecie() << endl;
    }
}

void
PetShop::listarRepteis(){
    for(int i = 0; i < this->capacidade_reptil; i++){
        cout << i << "\t" << reptil[i]->getId() << "\t" << reptil[i]->getEspecie() << endl;
    }
}

void
PetShop::listarVeterinarios(){
    for(int i = 0; i < this->capacidade_veterinario; i++){
        cout << i << "\t" << vets[i]->getNome() << "\t" << vets[i]->getId() << endl;
    }
}

void
PetShop::listarTratadores(){
    for(int i = 0; i < this->capacidade_tratador; i++){
        cout << i << "\t" << trat[i]->getNome() << "\t" << trat[i]->getId() << endl;
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

void
PetShop::Funcionamento(){
    int primeiraescolha;
    int segundaescolha;
    cout << "Insira a area que deseja navergar dentro do petshop:" << endl;
    cout << "1 - Animal" << endl;
    cout << endl;
    cout << "2 - Veterinário" << endl;
    cout << endl;
    cout << "3 - Tratador" << endl;
    cout << endl;
    cin >> primeiraescolha;

    if (primeiraescolha == 1){
        cout << "Selecione a opção desejada:" << endl;
        cout << endl;
        cout << "1 - Cadastro de um novo animal" << endl;
        cout << endl;
        cout << "2 - Remoção de animal comercializado" << endl;
        cout << endl;
        cout << "3 - Alteração de dados cadastrais de um animal" << endl;
        cout << endl;
        cout << "4 - Listagem dos dados cadastrais de um determinado animal" << endl;
        cout << endl;
        cout << "5 - Listar animais de uma determinada classe" << endl;
        cout << endl;
        cin >> segundaescolha;

        switch (segundaescolha){

            case 1:
            {
                this->CadastrarAnimal();
                break;
            }
            case 2:
            {
                string id;
                cout << "Lista de animais:" << endl;
                this->listarAnimais();
                cout << "Informe o id do animal a ser removido:" << endl;
                this->removerAnimal(id);
            }
            case 3:
            {
                int i;
                bool mudar;
                this->listarAnimais();
                cout << "Informe a posição do animal para alteração de seus dados:" << endl;
                cin >> i;
                cout << "Mudar a especie? " << endl;
                cin >> mudar;
                if(mudar == true){
                    string mudarespecie;
                    cout << "Insira a nova especie" << endl;
                    cin >> mudarespecie;
                    animais[i]->setEspecie(mudarespecie);
                }
                cout << "Mudar o Id? " << endl;
                cin >> mudar;
                if(mudar == true){
                    string mudarid;
                    cout << "Insira o novo Id" << endl;
                    cin >> mudarid;
                    animais[i]->setId(mudarid);
                }
                cout << "Mudar o sexo? " << endl;
                cin >> mudar;
                if(mudar == true){
                    string mudarsexo;
                    cout << "Insira o novo sexo" << endl;
                    cin >> mudarsexo;
                    animais[i]->setSexo(mudarsexo);
                }
                cout << "Mudar o tipo de fecundação? " << endl;
                cin >> mudar;
                if(mudar == true){
                    string mudarfecundacao;
                    cout << "Insira o novo tipo de fecundação" << endl;
                    cin >> mudarfecundacao;
                    animais[i]->setFecundacao(mudarfecundacao);
                }
                cout << "Mudar a nutrição? " << endl;
                cin >> mudar;
                if(mudar == true){
                    string mudarnutricao;
                    cout << "Insira o novo tipo de nutrição" << endl;
                    cin >> mudarnutricao;
                    animais[i]->setNutricao(mudarnutricao);
                }
                cout << "Mudar o nivel do risco de extinção? " << endl;
                cin >> mudar;
                if(mudar == true){
                    string mudarextincao;
                    cout << "Insira o novo nivel de risco de extinção" << endl;
                    cin >> mudarextincao;
                    animais[i]->setRisco_extincao(mudarextincao);
                }
                cout << "Mudar se o animal é perigoso? " << endl;
                cin >> mudar;
                if(mudar == true){
                    bool mudarpericulosidade;
                    cout << "Insira se o animal é perigoso" << endl;
                    cin >> mudarpericulosidade;
                    animais[i]->setPericulosidade(mudarpericulosidade);
                }
                cout << "Mudar o tratador do animal?" << endl;
                cin >> mudar;
                if(mudar == true){
                    int p;
                    this->listarTratadores();
                    cout << "Informe a posição do tratador na lista para que se responsabilize pelo animal" << endl;
                    cin >> p;
                    animais[i]->setTratador(*trat[p]);
                }
                cout << "Mudar o veterinário do animal?" << endl;
                cin >> mudar;
                if(mudar == true){
                    int s;
                    this->listarVeterinarios();
                    cout << "Informe a posição do veterinário na lista para que se responsabilize pelo animal" << endl;
                    cin >> s;
                    animais[i]->setVeterinario(*vets[s]);
                }
            }  
                
        }
    }else if(primeiraescolha == 2){
        cout << "Selecione a opção desejada:" << endl;
        cout << endl;
        cout << "1 - Inserir novo veterinário ao Petshop" << endl;
        cout << endl;
        cout << "2 - Alterar dados de um determinado veterinário" << endl;
        cout << endl;
        cout << "3 - Remover veterinario do petshop" << endl;
        cout << endl;
        cout << "4 - Consultar determinado veterinario" << endl;
        cout << endl;
        cout << "5 - Listar animais sob a responsabilidade de um determinado veterinário" << endl;
        cout << endl;
        cin >> segundaescolha;
    }else if(primeiraescolha == 3){
        cout << "Selecione a opção desejada:" << endl;
        cout << endl;
        cout << "1 - Inserir novo tratador ao Petshop" << endl;
        cout << endl;
        cout << "2 - Alterar dados de um determinado tratador" << endl;
        cout << endl;
        cout << "3 - Remover tratador do petshop" << endl;
        cout << endl;
        cout << "4 - Consultar determinado tratador" << endl;
        cout << endl; 
        cout << "5 - Listar animais sob a responsabilidade de um determinado tratador" << endl;
        cout << endl;
        cin >> segundaescolha;
    }
}

void
PetShop::CadastrarAnimal(){
    if (this->getCapacidade_veterinario() > 0 && this->getCapacidade_tratador() > 0){
    string nutri;
    string risco_ext;
    bool periculosi;
    string ID;
    string Especie;
    string Sexo;
    string Fecundacao;
    int escolha, escolha2;
    cout << "Informe os dados necessário para o cadastro do veterinário" << endl;
    cout << "Especie:" << endl;
    cin >> Especie;
    cout << "ID:" << endl;
    cin >> ID;
    cout << "Sexo:" << endl;
    cin >> Sexo;
    cout << "Fecundação:" << endl;
    cin >> Fecundacao;
    cout << "nutrição(Carnivoro, Herbivoro, Onivoro):" << endl;
    cin >> nutri;
    cout << "Risco de extinção(Baixo, Médio, Alto)" << endl;
    cin >> risco_ext;
    cout << "Animal perigoso?" << endl;
    cin >> periculosi;
    cout << "Segue abaixo uma lista disponivel de veterinários para cuidar do animal, escolha:" << endl;
    this->listarVeterinarios();
    cin >> escolha;
    cout << "Segue abaixo uma lista disponivel de tratadores para cuidar do animal, escolha:" << endl;
    this->listarTratadores();
    cin >> escolha2;
    Animal* animais = new Animal(*vets[escolha], *trat[escolha2], nutri, risco_ext,periculosi, ID, Especie, Sexo, Fecundacao);
    this->addAnimal(animais); 
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