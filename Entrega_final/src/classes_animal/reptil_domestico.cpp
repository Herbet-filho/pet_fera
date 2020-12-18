#include "reptil_domestico.hpp"

ReptilDomestico::ReptilDomestico(){}

ReptilDomestico::ReptilDomestico(string nutricao, string risco_extincao, bool periculosidade, 
                                string id, string especie, string sexo, string fecundacao,
                                string locomocao, string periodoDMuda, bool pedigree):
                                Reptil(nutricao, risco_extincao, periculosidade, id, especie, sexo,
                                fecundacao, locomocao, periodoDMuda), Domestico(pedigree){}

ReptilDomestico::~ReptilDomestico(){}

ostream& 
ReptilDomestico::print(ostream &o){
    o << "Espécie: "<< this->getEspecie() << endl
        << "Classe: Reptil" << endl
        << "Tipo: Domestico" << endl
        << "ID: " << this->getId() << endl
        <<"Nutrição: "<< this->getNutricao() << endl
        <<"Periculosidade: "<< this->getPericulosidadeNivel() << endl
        <<"Risco de extinção: "<< this->getRisco_extincao() << endl
        <<"Locomoçao: " << this->getLocomocao() << endl
        <<"Periodo de muda: " << this->getPeriodoDMuda() << endl
        <<"Tratador responsável: " << this->getNomeTratador()<< endl
        <<"Veterinário responsável: "<< this->getNomeVeterinario() << endl
        <<"Animal tem pedigree: " << this->getPedigreeSN() << endl;

    return o;
}