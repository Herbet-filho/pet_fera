#include <iostream>

#include "funcionario.hpp"
#include "veterinario.hpp"

using namespace std;

int main(){

    Funcionario joao("João Pedro", "ght12548966", 3000);
    Veterinario vet(joao, "cmf0122548");

    return 0;
}