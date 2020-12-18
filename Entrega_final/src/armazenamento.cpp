#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include "armazenamento.hpp"
#include "petshop.hpp"

using std::ofstream;
using std::ifstream;
using std::getline;
using std::endl;
using std::cout;
using std::cin;

Armazenamento::Armazenamento(){}
Armazenamento::Armazenamento(int i, string nomeArquivo, PetShop &petFera): 
                            petFera(&petFera){
    switch(i)
    {
        case 1:{
            escreverArquivoAnimal(nomeArquivo, petFera);
            break;
        }
        case 2:{
            escreverArquivoTratador(nomeArquivo, petFera);
            break;
        }
        case 3:{
            escreverArquivoVeterinario(nomeArquivo,petFera);
            break;
        }
        case 4:{
            lerArquivoAnimal(nomeArquivo, petFera);
            break;
        }
        case 5:{
            lerArquivoTratador(nomeArquivo, petFera);
            break;
        }
        case 6:{
            lerArquivoVeterinario(nomeArquivo, petFera);
            break;
        }

    }
}
Armazenamento::~Armazenamento(){}

void Armazenamento::lerArquivoAnimal(string nomeArquivo, PetShop &petFera){
    ifstream arquivo("./dados/" + nomeArquivo);
    string dado;
    vector<string> lista;
    string id_vet;
    string id_tratador;
    string nutricao;
    string risco_extincao;
    bool periculosidade;
    string id;
    string especie;
    string sexo;
    string fecundacao;
    bool permissao_ibama;

    if (arquivo){
        while(getline(arquivo, dado, ';')){
            lista.push_back(dado);
            //CARACTERISTICAS BASE
            if(lista.size() >= 12){

                especie = lista[2];
                id = lista[3];
                nutricao = lista[4];
                stringstream ss(lista[5]);
                ss >> periculosidade;
                stringstream pibama(lista[6]);
                pibama >> permissao_ibama;
                risco_extincao = lista[7];
                sexo = lista[8];
                fecundacao = lista[9];
                id_vet = lista[10];
                id_tratador = lista[11];

                if(lista[0] == "1"){ /////ANFIBIO//////
                    if(lista.size() > 16){
                        string Temperatura_ambiente = lista[12];
                        string Umidade = lista[13];
                        string Muda = lista[14];
                        string Respiracao = lista[15];
                        
                        if(lista[1] == "1"){ //////ANFIBIO DOMESTICO///////
                            bool pedigree;
                            stringstream ped(lista[16]);
                            ped >> pedigree;
                            Animal *bicho = new AnfibioDomestico(nutricao,risco_extincao,periculosidade, 
                                            id,especie, sexo, fecundacao,Temperatura_ambiente,Umidade,
                                            Muda, Respiracao,pedigree);
                            petFera.setTratadorId(bicho,id_tratador);
                            petFera.setVeterinarioId(bicho,id_vet);
                            bicho->setClas(ANFIBIO);
                            bicho->setTip(DOMESTICO);
                            petFera.addAnimal(bicho);
                            lista.clear();
 
                        }else if(lista[1] == "2"){ ////////ANFIBIO EXOTICO///////
                            string regiao = lista[16];
                            Animal *bicho = new AnfibioExotico(nutricao,risco_extincao,periculosidade, 
                                            id,especie, sexo, fecundacao,Temperatura_ambiente,Umidade,
                                            Muda, Respiracao,regiao);
                            petFera.setTratadorId(bicho,id_tratador);
                            petFera.setVeterinarioId(bicho,id_vet);
                            bicho->setClas(ANFIBIO);
                            bicho->setTip(EXOTICO);
                            petFera.addAnimal(bicho);
                            lista.clear();
                            
                        }else if(lista[1] == "3"){ ////////ANFIBIO NATIVO///////
                            stringstream li(lista[16]);
                            bool lic;
                            li >> lic;

                            Animal *bicho = new AnfibioNativo(nutricao,risco_extincao,periculosidade, 
                                            id,especie, sexo, fecundacao,Temperatura_ambiente,Umidade,
                                            Muda, Respiracao,lic);
                            petFera.setTratadorId(bicho,id_tratador);
                            petFera.setVeterinarioId(bicho,id_vet);
                            bicho->setClas(ANFIBIO);
                            bicho->setTip(NATIVO);
                            petFera.addAnimal(bicho);
                            lista.clear();

                        }
                    }
                    
                }
                else if(lista[0] == "2"){//////// AVE //////////////
                    if(lista.size() > 15){
                        stringstream la(lista[12]);
                        bool voa; 
                        la >> voa;
                        string cor = lista[13];
                        string tipo = lista[14];

                    
                        if(lista[1] == "1"){ //////AVE DOMESTICA///////
                            bool pedigree;
                            stringstream ped(lista[15]);
                            ped >> pedigree;
                        
                            Animal* bicho = new AveDomestica(nutricao,risco_extincao,
                            periculosidade, id, especie,sexo,fecundacao,
                            voa,cor,tipo,pedigree);
                            petFera.setTratadorId(bicho,id_tratador);
                            petFera.setVeterinarioId(bicho,id_vet);
                            bicho->setClas(AVE);
                            bicho->setTip(DOMESTICO);
                            petFera.addAnimal(bicho);
                            lista.clear();
                        }
                        else if(lista[1] == "2"){ ////////AVE EXOTICA///////
                            string regiao = lista[15];

                            Animal* bicho = new AveExotica(nutricao,risco_extincao,
                            periculosidade, id, especie,sexo,fecundacao,
                            voa,cor,tipo,regiao);
                            petFera.setTratadorId(bicho,id_tratador);
                            petFera.setVeterinarioId(bicho,id_vet);
                            bicho->setClas(AVE);
                            bicho->setTip(EXOTICO);
                            petFera.addAnimal(bicho);
                            lista.clear();
                        }
                        else if(lista[1] == "3"){ ////////AVE NATIVA///////
                            stringstream li(lista[15]);
                            bool lic;
                            li >> lic;

                            Animal* bicho = new AveNativa(nutricao,risco_extincao,
                            periculosidade, id, especie,sexo,fecundacao,
                            voa,cor,tipo,lic);
                            petFera.setTratadorId(bicho,id_tratador);
                            petFera.setVeterinarioId(bicho,id_vet);
                            bicho->setClas(AVE);
                            bicho->setTip(NATIVO);
                            petFera.addAnimal(bicho);
                            lista.clear();
                        }
                    }
                }else if(lista[0] == "3"){//////// MAMIFERO ////////
                    if(lista.size() > 14){
                        string pelagem = lista[12];
                        string deslocamento = lista[13];

                        if(lista[1] == "1"){ //////MAMIFERO DOMESTICO///////
                            bool pedigree;
                            stringstream ped(lista[14]);
                            ped >> pedigree;

                            Animal* bicho = new MamiferoDomestico(nutricao,risco_extincao,periculosidade, 
                            id,especie,sexo,fecundacao,pelagem,deslocamento,pedigree);
                            petFera.setTratadorId(bicho,id_tratador);
                            petFera.setVeterinarioId(bicho,id_vet);
                            bicho->setClas(MAMIFERO);
                            bicho->setTip(DOMESTICO);
                            petFera.addAnimal(bicho);
                            lista.clear();

                        }else if(lista[1] == "2"){ ////////MAMIFERO EXOTICO///////
                            string regiao = lista[14];

                            Animal* bicho = new MamiferoExotico(nutricao,risco_extincao,periculosidade, 
                            id,especie,sexo,fecundacao,pelagem,deslocamento,regiao);
                            petFera.setTratadorId(bicho,id_tratador);
                            petFera.setVeterinarioId(bicho,id_vet);
                            bicho->setClas(MAMIFERO);
                            bicho->setTip(EXOTICO);
                            petFera.addAnimal(bicho);
                            lista.clear();

                        }else if(lista[1] == "3"){ ////////MAMIFERO NATIVO///////
                            stringstream li(lista[14]);
                            bool lic;
                            li >> lic;
                            Animal* bicho = new MamiferoNativo(nutricao,risco_extincao,periculosidade, 
                            id,especie,sexo,fecundacao,pelagem,deslocamento,lic);
                            petFera.setTratadorId(bicho,id_tratador);
                            petFera.setVeterinarioId(bicho,id_vet);
                            bicho->setClas(MAMIFERO);
                            bicho->setTip(NATIVO);
                            petFera.addAnimal(bicho);
                            lista.clear();

                        }
                    }
                }
                else if(lista[0] == "4"){////////// REPITIL //////////
                    if(lista.size() > 14){
                        string locomocao = lista[12];
                        string periodoDMuda = lista[13];
                        
                        if(lista[1] == "1"){ //////REPITIL DOMESTICO///////
                            bool pedigree;
                            stringstream ped(lista[14]);
                            ped >> pedigree;

                            Animal* bicho = new ReptilDomestico(nutricao, risco_extincao,periculosidade, 
                            id, especie, sexo, fecundacao,locomocao,periodoDMuda,pedigree);
                            petFera.setTratadorId(bicho,id_tratador);
                            petFera.setVeterinarioId(bicho,id_vet);
                            bicho->setClas(REPTIL);
                            bicho->setTip(DOMESTICO);
                            petFera.addAnimal(bicho);
                            lista.clear();  

                        }else if(lista[1] == "2"){ ////////REPITIL EXOTICO///////
                            string regiao = lista[14];
                            
                            Animal* bicho = new ReptilExotico(nutricao, risco_extincao,periculosidade, 
                            id, especie, sexo, fecundacao,locomocao,periodoDMuda,regiao);
                            petFera.setTratadorId(bicho,id_tratador);
                            petFera.setVeterinarioId(bicho,id_vet);
                            bicho->setClas(REPTIL);
                            bicho->setTip(EXOTICO);
                            petFera.addAnimal(bicho);
                            lista.clear();  

                        }else if(lista[1] == "3"){ ////////REPITIL NATIVO///////
                            stringstream li(lista[14]);
                            bool lic;
                            li >> lic;
                            Animal* bicho = new ReptilNativo(nutricao, risco_extincao,periculosidade, 
                            id, especie, sexo, fecundacao,locomocao,periodoDMuda,lic);
                            petFera.setTratadorId(bicho,id_tratador);
                            petFera.setVeterinarioId(bicho,id_vet);
                            bicho->setClas(REPTIL);
                            bicho->setTip(NATIVO);
                            petFera.addAnimal(bicho);
                            lista.clear();  
                            
                        }
                    }
                }
            }

        }
    }else{
        cout << "Arquivo Animal não encontrado" << endl;
    }
    arquivo.close();
}

void Armazenamento::lerArquivoTratador(string nomeArquivo, PetShop &petFera){
    ifstream arquivo("./dados/" + nomeArquivo);
    string dado;
    vector<string> lista;
    string nome, id;
    int nivel;
    float salario;

    if (arquivo){
        while(getline(arquivo, dado, ';')){
            
            lista.push_back(dado); 
            if(lista.size() == 4){
                nome = lista[0];
                id = lista[1];
                stringstream ss(lista[2]);
                ss >> salario;
                stringstream snivel(lista[3]);
                snivel >> nivel;
                Tratador *trat = new Tratador(nome,id,salario,nivel);
                petFera.addTratador(trat);
                lista.clear();   
            } 
        }
    }else{
        cout << "Arquivo Tratador não encontrado" << endl;
    }
    arquivo.close();
}

void Armazenamento::lerArquivoVeterinario(string nomeArquivo, PetShop &petFera){
    ifstream arquivo("./dados/" + nomeArquivo);
    string dado;
    vector<string> veterinarios;
    string nome, id, crmv;
    float salario;

    if (arquivo){
        while(getline(arquivo, dado, ';')){

            veterinarios.push_back(dado); 
            if(veterinarios.size() == 4){
                nome = veterinarios[0];
                id = veterinarios[1];
                stringstream ss(veterinarios[2]);
                ss >> salario;
                crmv = veterinarios[3];
                Veterinario *vets = new Veterinario(nome,id,salario,crmv);
                petFera.addVeterinario(vets);
                veterinarios.clear();   
            } 
        }
    }else{
        cout << "Arquivo Veterinário não encontrado" << endl;
    }
    arquivo.close();
}

void Armazenamento::escreverArquivoAnimal(string nomeArquivo, PetShop petFera){
    ofstream arquivo("./dados/" + nomeArquivo);

    for (int i = 0; i < petFera.getsizeanimais(); i++){
        arquivo << petFera.getAnimais(i)->getClas() << ";"
                << petFera.getAnimais(i)->getTip() << ";"
                << petFera.getAnimais(i)->getEspecie() << ";"
                << petFera.getAnimais(i)->getId() << ";"
                << petFera.getAnimais(i)->getNutricao() << ";"
                << petFera.getAnimais(i)->getPericulosidade() << ";"
                << petFera.getAnimais(i)->getPermissao_ibama() << ";"
                << petFera.getAnimais(i)->getRisco_extincao() << ";"
                << petFera.getAnimais(i)->getSexo() << ";"
                << petFera.getAnimais(i)->getFecundacao() << ";"
                << petFera.getAnimais(i)->getIdVeterinario() << ";"
                << petFera.getAnimais(i)->getIdTratador() << ";";

        switch (petFera.getAnimais(i)->getClas()){
            case 1://******  Anfibio  *******
            {
                switch (petFera.getAnimais(i)->getTip())
                {
                    case 1://******  Domestico  **********
                    {
                        AnfibioDomestico* anf_Domes = dynamic_cast<AnfibioDomestico*> (petFera.getAnimais(i));
                        
                        arquivo << anf_Domes->getTemperatura_ambiente() << ";"
                                << anf_Domes->getUmidade() << ";"
                                << anf_Domes->getMuda() << ";"
                                << anf_Domes->getRespiracao() << ";"
                                << anf_Domes->getPedigree() << ";";

                        break;
                    }
                    case 2://*******  Exotico  ************
                    {
                        AnfibioExotico* anf_exo = dynamic_cast<AnfibioExotico*>(petFera.getAnimais(i));
                        arquivo << anf_exo->getTemperatura_ambiente() << ";"
                                << anf_exo->getUmidade() << ";"
                                << anf_exo->getMuda() << ";"
                                << anf_exo->getRespiracao() << ";"
                                << anf_exo->getRegiao() << ";";
                        break;
                    }
                    case 3:
                    {
                        AnfibioNativo* anf_nat = dynamic_cast<AnfibioNativo*>(petFera.getAnimais(i));
                        arquivo << anf_nat->getTemperatura_ambiente() << ";"
                                << anf_nat->getUmidade() << ";"
                                << anf_nat->getMuda() << ";"
                                << anf_nat->getRespiracao() << ";"
                                << anf_nat->getLicenca_transporte() << ";";
                        break;
                    }
 
                }
                
                break; 
            }

            case 2://**********  Ave  **************
            {
                switch (petFera.getAnimais(i)->getTip())
                {
                    case 1: //*********** Domestico *****************
                    {    
                        AveDomestica* av_domestica = dynamic_cast<AveDomestica*>(petFera.getAnimais(i));
                        arquivo << av_domestica->getVoa() << ";"
                                << av_domestica->getCor() << ";"
                                << av_domestica->getTipo() << ";"
                                << av_domestica->getPedigree() << ";";
                        break;
                    }
                    case 2://************  Exotico  *************
                    {
                        AveExotica* av_exo = dynamic_cast<AveExotica*>(petFera.getAnimais(i));
                        arquivo << av_exo->getVoa() << ";"
                                << av_exo->getCor() << ";"
                                << av_exo->getTipo() << ";"
                                << av_exo->getRegiao() << ";";
                        break;
                    }
                    case 3://*********** Nativo ***********
                    {
                        AveNativa* av_nat = dynamic_cast<AveNativa*>(petFera.getAnimais(i));
                        arquivo << av_nat->getVoa() << ";"
                                << av_nat->getCor() << ";"
                                << av_nat->getTipo() << ";"
                                << av_nat->getLicenca_transporte() << ";";
                        break;
                    }
                }
                
                break;
            }
            case 3://**********  Mamifero **************
            {
                switch(petFera.getAnimais(i)->getTip()){
                    case 1://******** Domestico ***********
                    {
                        MamiferoDomestico* mami_domes = dynamic_cast<MamiferoDomestico*> (petFera.getAnimais(i));
                        arquivo << mami_domes->getPelagem() << ";"
                                << mami_domes->getDeslocamento() << ";"
                                << mami_domes->getPedigree() << ";";
                        break;
                    }
                    case 2://********** Exotico *******
                    {
                        MamiferoExotico* mami_exo = dynamic_cast<MamiferoExotico*>(petFera.getAnimais(i));
                        arquivo << mami_exo->getPelagem() << ";"
                                << mami_exo->getDeslocamento() << ";"
                                << mami_exo->getRegiao() << ";";
                        break;
                    }
                    case 3://*********** Nativo ***********
                    {
                        MamiferoNativo* mami_nat = dynamic_cast<MamiferoNativo*>(petFera.getAnimais(i));
                        arquivo << mami_nat->getPelagem() << ";"
                                << mami_nat->getDeslocamento() << ";"
                                << mami_nat->getLicenca_transporte() << ";";
                        break;
                    }
                }
                
                break;
            }
            case 4://****** Reptil  ***********
            {
                switch(petFera.getAnimais(i)->getTip()){
                    case 1://************* domestico **********
                    {
                        ReptilDomestico* rept_domes = dynamic_cast<ReptilDomestico*>(petFera.getAnimais(i));
                        arquivo << rept_domes->getLocomocao() << ";"
                                << rept_domes->getPeriodoDMuda() << ";"
                                << rept_domes->getPedigree() << ";";
                        break;
                    }
                    case 2: //************ Exotico ************
                    {
                        ReptilExotico* rept_exo = dynamic_cast<ReptilExotico*>(petFera.getAnimais(i));
                        arquivo << rept_exo->getLocomocao() << ";"
                                << rept_exo->getPeriodoDMuda() << ";"
                                << rept_exo->getRegiao() << ";";
                        break;
                    }
                    case 3: //*********** Nativo ************
                    {
                        ReptilNativo* rep_nat = dynamic_cast<ReptilNativo*>(petFera.getAnimais(i));
                        arquivo << rep_nat->getLocomocao() << ";"
                                << rep_nat->getPeriodoDMuda() << ";"
                                << rep_nat->getLicenca_transporte() << ";";
                        break;
                    }

                }
                
                break;
            }

        }
    }
    arquivo.close();
}

void Armazenamento::escreverArquivoTratador(string nomeArquivo, PetShop petFera){
    ofstream arquivo("./dados/" + nomeArquivo);

    for (int i = 0; i < petFera.getSizeTratadores(); i++){
        arquivo << this->petFera->getTratadores(i)->getNome() << ";"
                << this->petFera->getTratadores(i)->getId() << ";"
                << this->petFera->getTratadores(i)->getSalario() << ";"
                << this->petFera->getTratadores(i)->getNivelSeguranca() << ";";
    }
    arquivo.close();
}

void Armazenamento::escreverArquivoVeterinario(string nomeArquivo, PetShop petFera){
    ofstream arquivo("./dados/" + nomeArquivo);

    for (int i = 0; i < petFera.getSizeVeterinarios(); i++){
        arquivo << this->petFera->getVeterinarios(i)->getNome() << ";"
                << this->petFera->getVeterinarios(i)->getId() << ";"
                << this->petFera->getVeterinarios(i)->getSalario() << ";"
                << this->petFera->getVeterinarios(i)->getCrmv() << ";";
    }

    arquivo.close();
}
