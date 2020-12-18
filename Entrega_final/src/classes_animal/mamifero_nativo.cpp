#include "mamifero_nativo.hpp"

MamiferoNativo::MamiferoNativo(){}

MamiferoNativo::MamiferoNativo(string nutricao, string risco_extincao, bool periculosidade, 
                        string id, string especie, string sexo, string fecundacao,
                        string pelagem, string deslocamento, bool licenca_transporte):
                        Mamifero(nutricao, risco_extincao, periculosidade, id, especie, sexo, fecundacao,
                        pelagem, deslocamento), Nativo(licenca_transporte){}

MamiferoNativo::~MamiferoNativo(){}

ostream&
MamiferoNativo::print(ostream &o){
    o << "Espécie: "<< this->getEspecie() << endl
        << "Classe: Mamifero" << endl
        << "Tipo: Nativo" << endl
        << "ID: " << this->getId() << endl
        <<"Nutrição: "<< this->getNutricao() << endl
        <<"Periculosidade: "<< this->getPericulosidadeNivel() << endl
        <<"Risco de extinção: "<< this->getRisco_extincao() << endl
        <<"Deslocamento: " << this->getDeslocamento() << endl
        <<"Pelagem: " << this->getPelagem() << endl
        <<"Tratador responsável: " << this->getNomeTratador()<< endl
        <<"Veterinário responsável: "<< this->getNomeVeterinario() << endl
        << "Animal com licença do ibama para manejo: " << this->getLicenca_transporteSN() << endl;

    return o;
}