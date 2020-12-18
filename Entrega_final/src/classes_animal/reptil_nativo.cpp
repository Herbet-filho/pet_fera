#include "reptil_nativo.hpp"

ReptilNativo::ReptilNativo(){}

ReptilNativo::ReptilNativo(string nutricao, string risco_extincao, bool periculosidade, 
                                string id, string especie, string sexo, string fecundacao,
                                string locomocao, string periodoDMuda, bool licenca_transporte):
                                Reptil(nutricao, risco_extincao, periculosidade, id, especie, sexo,
                                fecundacao, locomocao, periodoDMuda), Nativo(licenca_transporte){}

ReptilNativo::~ReptilNativo(){}

ostream& 
ReptilNativo::print(ostream &o){
    o << "Espécie: "<< this->getEspecie() << endl
        << "Classe: Reptil" << endl
        << "Tipo: Nativo" << endl
        << "ID: " << this->getId() << endl
        <<"Nutrição: "<< this->getNutricao() << endl
        <<"Periculosidade: "<< this->getPericulosidadeNivel() << endl
        <<"Risco de extinção: "<< this->getRisco_extincao() << endl
        <<"Locomoçao: " << this->getLocomocao() << endl
        <<"Periodo de muda: " << this->getPeriodoDMuda() << endl
        <<"Tratador responsável: " << this->getNomeTratador()<< endl
        <<"Veterinário responsável: "<< this->getNomeVeterinario() << endl
        << "Animal com licença do ibama para manejo: " << this->getLicenca_transporteSN() << endl;

    return o;
}