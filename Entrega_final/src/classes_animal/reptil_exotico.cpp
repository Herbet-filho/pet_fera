#include "reptil_exotico.hpp"

ReptilExotico::ReptilExotico(){}

ReptilExotico::ReptilExotico(string nutricao, string risco_extincao, bool periculosidade, 
                                string id, string especie, string sexo, string fecundacao,
                                string locomocao, string periodoDMuda, string regiao):
                                Reptil(nutricao, risco_extincao, periculosidade, id, especie, sexo,
                                fecundacao, locomocao, periodoDMuda), Exotico(regiao){}

ReptilExotico::~ReptilExotico(){}

ostream& 
ReptilExotico::print(ostream &o){
    o << "Espécie: "<< this->getEspecie() << endl
        << "Classe: Reptil" << endl
        << "Tipo: Exotico" << endl
        << "ID: " << this->getId() << endl
        <<"Nutrição: "<< this->getNutricao() << endl
        <<"Periculosidade: "<< this->getPericulosidadeNivel() << endl
        <<"Risco de extinção: "<< this->getRisco_extincao() << endl
        <<"Locomoçao: " << this->getLocomocao() << endl
        <<"Periodo de muda: " << this->getPeriodoDMuda() << endl
        <<"Tratador responsável: " << this->getNomeTratador()<< endl
        <<"Veterinário responsável: "<< this->getNomeVeterinario() << endl
        <<"Região originária do animal: " << this->getRegiao() << endl;

    return o;
}