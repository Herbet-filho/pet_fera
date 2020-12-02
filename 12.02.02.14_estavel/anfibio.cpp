#include "anfibio.hpp"

Anfibio::Anfibio(){}

Anfibio::Anfibio(string nutricao, string risco_extincao, bool periculosidade, 
                string id, string especie, string sexo, string fecundacao, 
                string temperatura_ambiente,string umidade, string muda,
                string respiracao): Animal(nutricao, risco_extincao, periculosidade, id, especie, sexo,
                 fecundacao), temperatura_ambiente(temperatura_ambiente), umidade(umidade), muda(muda),
                 respiracao(respiracao){}

Anfibio::~Anfibio(){}

void Anfibio::setTemperatura_ambiente(string temperatura_ambiente){
    this->temperatura_ambiente = temperatura_ambiente;
}

string Anfibio::getTemperatura_ambiente(){
    return this->temperatura_ambiente;
}

void Anfibio::setUmidade(string umidade){
    this->umidade = umidade;
}

string Anfibio::getUmidade(){
    return this->umidade;
}

void Anfibio::setMuda(string muda){
    this->muda = muda;
}

string Anfibio::getMuda(){
    return this->muda;
}

void Anfibio::setRespiracao(string respiracao){
    this->respiracao = respiracao;
}

string Anfibio::getRespiracao(){
    return this->respiracao;
}
