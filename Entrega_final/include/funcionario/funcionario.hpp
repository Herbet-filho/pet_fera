#ifndef _FUNCIONARIO_
#define _FUNCIONARIO_

#include <iostream>
using std::ostream;
using std::string;




class Funcionario{
    protected:
        string nome;
        string id;
        float salario;

    public:
        Funcionario();
    
        Funcionario(string nome, string id, float salario);
    
        virtual ~Funcionario();
    
        void setNome(string nome);
        string getNome();

        void setId(string id);
        string getId();

        void setSalario(float salario);
        float getSalario();


        friend ostream& operator<< (ostream &o, Funcionario &funcionario); 

    private:
        virtual ostream& print(ostream&) = 0;


};

#endif