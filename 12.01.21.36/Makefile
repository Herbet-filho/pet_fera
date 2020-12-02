G++ = g++
FLAGS1 = -Wall -std=c++11 -c


all: 
	$(G++) $(FLAGS1) funcionario.cpp
	$(G++) $(FLAGS1) veterinario.cpp
	$(G++) $(FLAGS1) tratador.cpp
	$(G++) $(FLAGS1) animal.cpp
	$(G++) $(FLAGS1) anfibio.cpp
	$(G++) $(FLAGS1) reptil.cpp
	$(G++) $(FLAGS1) ave.cpp
	$(G++) $(FLAGS1) mamifero.cpp
	$(G++) $(FLAGS1) petshop.cpp
	$(G++) -Wall main.cpp funcionario.o veterinario.o tratador.o animal.o anfibio.o reptil.o ave.o mamifero.o petshop.o -o test.o



	
run:
	./test.o

run_all: all run

clear:
	rm -f *.o
	reset

run_valgrind:
	valgrind -v ./test.o

run_valgrind_erros:
	valgrind -v --leak-check=full --show-reachable=yes ./test.o