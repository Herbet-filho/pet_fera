#ifndef _FUNCIONARIO_
#define _FUNCIONARIO_

using std::string;

class Funcionario{
    private:
        string nome;
        string id;
        float salario;
    
    public:
        Funcionario();

        void setNome(string nome);
        string getNome();

        void setId(string id);
        string getId();

        void setSalario(float salario);
        float getSalario();

};

#endif
