#!/bin/bash

rm -f *.o
g++ -Wall -c funcionario.cpp
g++ -Wall -c veterinario.cpp
g++ -Wall -c nivelSeguranca.cpp
g++ -Wall -c tratador.cpp

g++ -Wall gomoku.c jogadores.o tela.o rodadas.o armazenamento.o -o test.o

./test.o

#g++ -std=c++11 -Wall funcionario.cpp  nivelSeguranca.cpp tratador.cpp animal.cpp veterinario.cpp test_tratador.cpp -o test_trat.o
