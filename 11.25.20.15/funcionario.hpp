#ifndef _FUNCIONARIO_
#define _FUNCIONARIO_

#include <iostream>

using std::string;

class Funcionario{
    protected:
        string nome;
        string id;
        float salario;
        int quantidade;

    public:
        Funcionario();
    
        Funcionario(string nome, string id, float salario);
    
        ~Funcionario();
    
        void setNome(string nome);
        string getNome();

        void setId(string id);
        string getId();

        void setSalario(float salario);
        float getSalario();

        int getQuantidade();
        void setQuantidade(int quantidade);

};

#endif