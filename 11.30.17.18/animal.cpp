#include <iostream>
#include <locale>

#include "animal.hpp"
#include "funcionario.hpp"
#include "veterinario.hpp"
#include "tratador.hpp"
#include "nivelSeguranca.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostream;

Animal::Animal(){}

Animal::Animal(Veterinario &vet, Tratador &tratador,
                string nutricao, string risco_extincao, bool periculosidade, 
                string id, string especie, string sexo, string fecundacao){
                    this-> vet = &vet;
                    this-> tratador = &tratador;
                    this-> nutricao = nutricao;;
                    this-> risco_extincao = risco_extincao;
                    this-> periculosidade = periculosidade;
                    this-> id = id;
                    this-> especie = especie;
                    this-> sexo = sexo;
                    this-> fecundacao = fecundacao;
}

Animal::Animal(string nutricao, string risco_extincao, bool periculosidade, 
                string id, string especie, string sexo, string fecundacao){
                    this-> nutricao = nutricao;;
                    this-> risco_extincao = risco_extincao;
                    this-> periculosidade = periculosidade;
                    this-> id = id;
                    this-> especie = especie;
                    this-> sexo = sexo;
                    this-> fecundacao = fecundacao;
}
        
Animal::~Animal(){}

/*void Animal::setNome(string nome){
    this->nome = nome;
}
string Animal::getNome(){
    return this->nome;
}*/



void Animal::setId(string id){
    this->id = id;
}
string Animal::getId(){
    return this->id;
}

string Animal::getNutricao(){
    return this -> nutricao;
}
void Animal::setNutricao(string nutricao){
    this -> nutricao = nutricao;
}

string Animal::getEspecie(){
    return this -> especie;
}

void Animal::setEspecie(string especie){
    this-> especie = especie;
}

/*void
Animal::setTipos(tipos natiExo){
    this->natiExo = natiExo;
}

bool Animal::getPermissao_ibama(){
    return this-> permissao_ibama;
}
void Animal::setPermissao_ibama(bool permissao_ibama){
    this-> permissao_ibama = permissao_ibama;
}

bool Animal::getLicenca_transporte(){
    return this -> licenca_transporte;
}
void Animal::setLicenca_transporte(bool licenca_transporte){
    this -> licenca_transporte = licenca_transporte;
}*/

string Animal::getRisco_extincao(){
    return this-> risco_extincao;
}
void Animal::setRisco_extincao(string risco_extincao){
    this-> risco_extincao = risco_extincao;
}
bool Animal::getPericulosidade(){
    return this-> periculosidade;
}
string Animal::getPericulosidadeNivel(){
    if (this->periculosidade == false){
        return "Não representa perigo/Nivel baixo de periculosidade";
    }

    return "Animal perigoso";
}
void Animal::setPericulosidade(bool periculosidade){
    this -> periculosidade = periculosidade;
}

void Animal::setSexo(string sexo){
    this->sexo = sexo;
}
string Animal::getSexo(){
    return this->sexo;
}

void Animal::setFecundacao(string fecundacao){
    this->fecundacao = fecundacao;
}
string Animal::getFecundacao(){
    return this->fecundacao;
}

string Animal::getNomeVeterinario(){
    return vet-> getNome();
}
string Animal::getIdVeterinario(){
    return vet->getId();
}
void Animal::setVeterinario(Veterinario &vet){
    this-> vet = &vet;
}

string Animal::getNomeTratador(){
    return tratador->getNome();
}
string Animal::getIdTratador(){
    return tratador->getId();
}
void Animal::setTratador(Tratador &tratador){
    
    this-> tratador = &tratador;
}
/*void 
Animal::definirclassificacao(){
    string analise;
    string analise2;
    bool escolha;
    bool escolha2;
    cout << "Informe se o animal é silvestre ou doméstico:" << endl;
    cin >> analise;
    analise = tolower(analise);
    if (analise != "silvestre" || analise != "domestico" || analise != "doméstico"){
        cout << "Acesso negado, nomenclatura não identificada" << endl;

    }else if(analise == "silvestre"){
        cout << "Exótico ou nativo?" << endl;
        cin >> analise2;
        analise2 = tolower(analise2);
        if(analise2 != "exotico" || analise2 != "exótico" || analise2 != "nativo"){
            cout << "Acesso negado, nomenclatura não identificada" << endl;
        }else if(analise2 == "nativo"){
            cout<<"Existe permissão do ibama para comércio?(true/false)" << endl;
            cin >> escolha;
            setPermissao_ibama(escolha);
            cout<<"Existe permissão do ibama para transporte?(true/false)" << endl;
            cin >> escolha2;
            setLicenca_transporte(escolha2);
        }else{
            setTipos(exotico);
        }
    }
}*/

ostream& operator<< (ostream &o, Animal animal){
    o << "Espécie: "<< animal.getEspecie() << endl
        << "ID: " << animal.getId() << endl
        <<"Nutrição: "<< animal.getNutricao() << endl
        <<"Periculosidade: "<< animal.getPericulosidadeNivel() << endl
        <<"Risco de extinção: "<< animal.getRisco_extincao() << endl
        <<"Tratador responsável: " << animal.getNomeTratador()<< endl
        <<"Veterinário responsável: "<< animal.getNomeVeterinario();
    
    return o;
}   