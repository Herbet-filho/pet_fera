#include "ave_domestica.hpp"


AveDomestica::AveDomestica(){}

AveDomestica::AveDomestica(string nutricao, string risco_extincao, bool periculosidade, 
                            string id, string especie, string sexo, string fecundacao,
                            bool voa, string cor, string tipo, bool pedigree):
                            Ave(nutricao, risco_extincao, periculosidade, id, especie, sexo, fecundacao,
                            voa, cor, tipo), Domestico(pedigree){}


AveDomestica::~AveDomestica(){}

ostream&
AveDomestica::print(ostream &o){
    o << "Espécie: "<< this->getEspecie() << endl
        << "Classe: Ave" << endl
        << "Tipo: Domestica" << endl
        << "ID: " << this->getId() << endl
        <<"Nutrição: "<< this->getNutricao() << endl
        <<"Periculosidade: "<< this->getPericulosidadeNivel() << endl
        <<"Risco de extinção: "<< this->getRisco_extincao() << endl
        <<"Voa: " << this->getVoaSN() << endl
        <<"Cor: " << this->getCor() << endl
        <<"Tipo: " << this->getTipo() << endl
        <<"Tratador responsável: " << this->getNomeTratador()<< endl
        <<"Veterinário responsável: "<< this->getNomeVeterinario() << endl
        <<"Animal tem pedigree: " << this->getPedigreeSN() << endl;

    return o;
}