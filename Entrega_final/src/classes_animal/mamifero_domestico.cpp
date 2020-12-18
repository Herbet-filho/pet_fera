#include "mamifero_domestico.hpp"

MamiferoDomestico::MamiferoDomestico(){}

MamiferoDomestico::MamiferoDomestico(string nutricao, string risco_extincao, bool periculosidade, 
                        string id, string especie, string sexo, string fecundacao,
                        string pelagem, string deslocamento, bool pedigree):
                        Mamifero(nutricao, risco_extincao, periculosidade, id, especie, sexo, fecundacao,
                        pelagem, deslocamento), Domestico(pedigree){}

MamiferoDomestico::~MamiferoDomestico(){}

ostream&
MamiferoDomestico::print(ostream &o){
    o << "Espécie: "<< this->getEspecie() << endl
        << "Classe: Mamifero" << endl
        << "Tipo: Domestico" << endl
        << "ID: " << this->getId() << endl
        <<"Nutrição: "<< this->getNutricao() << endl
        <<"Periculosidade: "<< this->getPericulosidadeNivel() << endl
        <<"Risco de extinção: "<< this->getRisco_extincao() << endl
        <<"Deslocamento: " << this->getDeslocamento() << endl
        <<"Pelagem: " << this->getPelagem() << endl
        <<"Tratador responsável: " << this->getNomeTratador()<< endl
        <<"Veterinário responsável: "<< this->getNomeVeterinario() << endl
        <<"Animal tem pedigree: " << this->getPedigreeSN() << endl;

    return o;
}