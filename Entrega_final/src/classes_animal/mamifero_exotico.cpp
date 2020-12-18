#include "mamifero_exotico.hpp"

MamiferoExotico::MamiferoExotico(){}

MamiferoExotico::MamiferoExotico(string nutricao, string risco_extincao, bool periculosidade, 
                        string id, string especie, string sexo, string fecundacao,
                        string pelagem, string deslocamento, string regiao):
                        Mamifero(nutricao, risco_extincao, periculosidade, id, especie, sexo, fecundacao,
                        pelagem, deslocamento), Exotico(regiao){}

MamiferoExotico::~MamiferoExotico(){}

ostream&
MamiferoExotico::print(ostream &o){
    o << "Espécie: "<< this->getEspecie() << endl
        << "Classe: Mamifero" << endl
        << "Tipo: Exotico" << endl
        << "ID: " << this->getId() << endl
        <<"Nutrição: "<< this->getNutricao() << endl
        <<"Periculosidade: "<< this->getPericulosidadeNivel() << endl
        <<"Risco de extinção: "<< this->getRisco_extincao() << endl
        <<"Deslocamento: " << this->getDeslocamento() << endl
        <<"Pelagem: " << this->getPelagem() << endl
        <<"Tratador responsável: " << this->getNomeTratador()<< endl
        <<"Veterinário responsável: "<< this->getNomeVeterinario() << endl
        <<"Região originária do animal: " << this->getRegiao() << endl;

    return o;
}