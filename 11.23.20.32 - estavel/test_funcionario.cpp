#include <iostream>

#include "funcionario.hpp"

using namespace std;

int main(){

    Funcionario funcionario1("João Pedro", "ght12548966", 3000);

    cout << funcionario1.getNome() << endl;
    cout << funcionario1.getId() << endl;
    cout << funcionario1.getSalario() << endl;

    return 0;
}