#include "ave_nativa.hpp"

AveNativa::AveNativa(){}

AveNativa::AveNativa(string nutricao, string risco_extincao, bool periculosidade, 
                        string id, string especie, string sexo, string fecundacao,
                        bool voa, string cor, string tipo, bool licenca_transporte):
                        Ave(nutricao, risco_extincao, periculosidade, id, especie, sexo, fecundacao,
                        voa, cor, tipo), Nativo(licenca_transporte){} 


AveNativa::~AveNativa(){}

ostream&
AveNativa::print(ostream &o){
    o << "Espécie: "<< this->getEspecie() << endl
        << "Classe: Ave" << endl
        << "Tipo: Nativa" << endl
        << "ID: " << this->getId() << endl
        <<"Nutrição: "<< this->getNutricao() << endl
        <<"Periculosidade: "<< this->getPericulosidadeNivel() << endl
        <<"Risco de extinção: "<< this->getRisco_extincao() << endl
        << "Voa: " << this->getVoaSN() << endl
        << "Cor: " << this->getCor() << endl
        << "Tipo: " << this->getTipo() << endl
        <<"Tratador responsável: " << this->getNomeTratador()<< endl
        <<"Veterinário responsável: "<< this->getNomeVeterinario() << endl
        << "Animal com licença do ibama para manejo: " << this->getLicenca_transporteSN() << endl;

    return o;
}