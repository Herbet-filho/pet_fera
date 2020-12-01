G++ = g++
FLAGS1 = -Wall -std=c++11 -c
#FLAGS2 = -Wall -std=c++11 -o test.o

all: 
	$(G++) $(FLAGS1) funcionario.cpp
	$(G++) $(FLAGS1) veterinario.cpp
	$(G++) $(FLAGS1) nivelSeguranca.cpp
	$(G++) $(FLAGS1) tratador.cpp
	$(G++) $(FLAGS1) animal.cpp
	$(G++) $(FLAGS1) anfibio.cpp
	$(G++) $(FLAGS1) reptil.cpp
	$(G++) $(FLAGS1) ave.cpp
	$(G++) $(FLAGS1) mamifero.cpp
	$(G++) $(FLAGS1) silvestre.cpp
	$(G++) $(FLAGS1) domestico.cpp
	$(G++) $(FLAGS1) petshop.cpp
	$(G++) -Wall main.cpp funcionario.o veterinario.o nivelSeguranca.o tratador.o animal.o anfibio.o reptil.o ave.o mamifero.o silvestre.o domestico.o petshop.o -o test.o



	
run:
	./test.o


clear:
	rm -f *.o
	reset

run_valgrind:
	valgrind ./test.o