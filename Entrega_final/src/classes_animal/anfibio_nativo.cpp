#include "anfibio_nativo.hpp"


AnfibioNativo::AnfibioNativo(){}

AnfibioNativo::AnfibioNativo(string nutricao, string risco_extincao, bool periculosidade, 
                        string id, string especie, string sexo, string fecundacao, 
                        string temperatura_ambiente,string umidade, string muda,
                        string respiracao, bool licenca_transporte):
                        Anfibio(nutricao,risco_extincao,periculosidade,id,especie,sexo,fecundacao,
                        temperatura_ambiente,umidade,muda,respiracao), Nativo(licenca_transporte){}

AnfibioNativo::~AnfibioNativo(){}

ostream& 
AnfibioNativo::print(ostream &o){ 
    o << "Espécie: "<< this->getEspecie() << endl
        << "Classe: Anfibio" << endl
        << "Tipo: Nativo" << endl
        << "ID: " << this->getId() << endl
        <<"Nutrição: "<< this->getNutricao() << endl
        <<"Periculosidade: "<< this->getPericulosidadeNivel() << endl
        <<"Risco de extinção: "<< this->getRisco_extincao() << endl
        <<"Temperatura ambiente: " << this->getTemperatura_ambiente() << endl
        <<"Umidade: " << this->getUmidade() << endl
        <<"Periodo de muda: " << this->getMuda() << endl
        <<"Tipo de respiraçao: " << this->getRespiracao() << endl
        <<"Tratador responsável: " << this->getNomeTratador()<< endl
        <<"Veterinário responsável: "<< this->getNomeVeterinario() << endl
        << "Animal com licença do ibama para manejo: " << this->getLicenca_transporteSN() << endl;
        
    return o;
}