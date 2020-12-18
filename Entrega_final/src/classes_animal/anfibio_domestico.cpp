#include "anfibio_domestico.hpp"


AnfibioDomestico::AnfibioDomestico(){}

AnfibioDomestico::AnfibioDomestico(string nutricao, string risco_extincao, bool periculosidade, 
                        string id, string especie, string sexo, string fecundacao, 
                        string temperatura_ambiente,string umidade, string muda,
                        string respiracao, bool pedigree):
                        Anfibio(nutricao,risco_extincao,periculosidade,id,especie,sexo,fecundacao,
                        temperatura_ambiente,umidade,muda,respiracao), Domestico(pedigree){}

AnfibioDomestico::~AnfibioDomestico(){}

ostream& 
AnfibioDomestico::print(ostream &o){ 
    o << "Espécie: "<< this->getEspecie() << endl
        << "Classe: Anfibio" << endl
        << "Tipo: Domestico" << endl
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
        <<"Animal tem pedigree: " << this->getPedigreeSN() << endl;

    return o;
}