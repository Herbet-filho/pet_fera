#include "ave_exotica.hpp"

AveExotica::AveExotica(){}

AveExotica::AveExotica(string nutricao, string risco_extincao, bool periculosidade, 
                        string id, string especie, string sexo, string fecundacao,
                        bool voa, string cor, string tipo, string regiao):
                        Ave(nutricao, risco_extincao, periculosidade, id, especie, sexo, fecundacao,
                        voa, cor, tipo), Exotico(regiao){} 


AveExotica::~AveExotica(){}

ostream&
AveExotica::print(ostream &o){
    o << "Espécie: "<< this->getEspecie() << endl
        << "Classe: Ave" << endl
        << "Tipo: Exotica" << endl
        << "ID: " << this->getId() << endl
        <<"Nutrição: "<< this->getNutricao() << endl
        <<"Periculosidade: "<< this->getPericulosidadeNivel() << endl
        <<"Risco de extinção: "<< this->getRisco_extincao() << endl
        <<"Voa: " << this->getVoaSN() << endl
        <<"Cor: " << this->getCor() << endl
        <<"Tipo: " << this->getTipo() << endl
        <<"Tratador responsável: " << this->getNomeTratador()<< endl
        <<"Veterinário responsável: "<< this->getNomeVeterinario() << endl
        <<"Região originária do animal: " << this->getRegiao() << endl;

    return o;
}