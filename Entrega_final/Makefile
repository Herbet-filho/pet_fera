G++ = g++
FLAGS1 = -Wall -std=c++11 -c
FLAGS2 = -I./include
OBJ = ./obj
SRC = ./src
APPS = ./apps
BIN = ./bin
FUNCIONARIO = /funcionario
BASE_ANIMAL = /classes_animal
FLAGS3 = -o $(OBJ)/

FLAGS_COMPILAR = $(G++) $(FLAGS1) $(SRC)
FLAGS_COMPILAR_ANIMAL = $(FLAGS_COMPILAR)$(BASE_ANIMAL)
FLAGS_COMPILAR_FUNCIONARIOS = $(FLAGS_COMPILAR)$(FUNCIONARIO)

FLAGS2_ANIMAL = $(FLAGS2)$(BASE_ANIMAL)
FLAGS2_FUNCIONARIO = $(FLAGS2)$(FUNCIONARIO)
FLAGS2_ANIMAL_FUNCIONARIO = $(FLAGS2_ANIMAL) $(FLAGS2_FUNCIONARIO)
OBJS = $(FLAGS2) $(OBJ)/armazenamento.o $(OBJ)/funcionario.o $(OBJ)/veterinario.o $(OBJ)/tratador.o $(OBJ)/animal.o $(OBJ)/domestico.o $(OBJ)/exotico.o $(OBJ)/nativo.o $(OBJ)/anfibio.o $(OBJ)/anfibio_domestico.o $(OBJ)/anfibio_exotico.o $(OBJ)/anfibio_nativo.o $(OBJ)/reptil.o $(OBJ)/reptil_domestico.o $(OBJ)/reptil_exotico.o $(OBJ)/reptil_nativo.o $(OBJ)/ave.o $(OBJ)/ave_domestica.o $(OBJ)/ave_exotica.o $(OBJ)/ave_nativa.o $(OBJ)/mamifero.o $(OBJ)/mamifero_domestico.o $(OBJ)/mamifero_exotico.o $(OBJ)/mamifero_nativo.o $(OBJ)/petshop.o

all: 
	#mkdir obj
	#mkdir dados
	#mkdir bin

	$(FLAGS_COMPILAR_FUNCIONARIOS)/funcionario.cpp $(FLAGS2_FUNCIONARIO) $(FLAGS3)funcionario.o
	$(FLAGS_COMPILAR_FUNCIONARIOS)/veterinario.cpp $(FLAGS2_FUNCIONARIO) $(FLAGS3)veterinario.o
	$(FLAGS_COMPILAR_FUNCIONARIOS)/tratador.cpp $(FLAGS2_FUNCIONARIO) $(FLAGS3)tratador.o

	$(FLAGS_COMPILAR_ANIMAL)/animal.cpp $(FLAGS2_ANIMAL_FUNCIONARIO) $(FLAGS3)animal.o
	$(FLAGS_COMPILAR_ANIMAL)/domestico.cpp $(FLAGS2_ANIMAL) $(FLAGS3)domestico.o
	$(FLAGS_COMPILAR_ANIMAL)/exotico.cpp $(FLAGS2_ANIMAL) $(FLAGS3)exotico.o
	$(FLAGS_COMPILAR_ANIMAL)/nativo.cpp $(FLAGS2_ANIMAL) $(FLAGS3)nativo.o

	$(FLAGS_COMPILAR_ANIMAL)/anfibio.cpp $(FLAGS2_ANIMAL_FUNCIONARIO) $(FLAGS3)anfibio.o
	$(FLAGS_COMPILAR_ANIMAL)/anfibio_domestico.cpp $(FLAGS2_ANIMAL_FUNCIONARIO) $(FLAGS3)anfibio_domestico.o
	$(FLAGS_COMPILAR_ANIMAL)/anfibio_exotico.cpp $(FLAGS2_ANIMAL_FUNCIONARIO) $(FLAGS3)anfibio_exotico.o
	$(FLAGS_COMPILAR_ANIMAL)/anfibio_nativo.cpp $(FLAGS2_ANIMAL_FUNCIONARIO) $(FLAGS3)anfibio_nativo.o

	$(FLAGS_COMPILAR_ANIMAL)/reptil.cpp $(FLAGS2_ANIMAL_FUNCIONARIO) $(FLAGS3)reptil.o
	$(FLAGS_COMPILAR_ANIMAL)/reptil_domestico.cpp $(FLAGS2_ANIMAL_FUNCIONARIO) $(FLAGS3)reptil_domestico.o
	$(FLAGS_COMPILAR_ANIMAL)/reptil_exotico.cpp $(FLAGS2_ANIMAL_FUNCIONARIO) $(FLAGS3)reptil_exotico.o
	$(FLAGS_COMPILAR_ANIMAL)/reptil_nativo.cpp $(FLAGS2_ANIMAL_FUNCIONARIO) $(FLAGS3)reptil_nativo.o

	$(FLAGS_COMPILAR_ANIMAL)/ave.cpp $(FLAGS2_ANIMAL_FUNCIONARIO) $(FLAGS3)ave.o
	$(FLAGS_COMPILAR_ANIMAL)/ave_domestica.cpp $(FLAGS2_ANIMAL_FUNCIONARIO) $(FLAGS3)ave_domestica.o
	$(FLAGS_COMPILAR_ANIMAL)/ave_exotica.cpp $(FLAGS2_ANIMAL_FUNCIONARIO) $(FLAGS3)ave_exotica.o
	$(FLAGS_COMPILAR_ANIMAL)/ave_nativa.cpp $(FLAGS2_ANIMAL_FUNCIONARIO) $(FLAGS3)ave_nativa.o

	$(FLAGS_COMPILAR_ANIMAL)/mamifero.cpp $(FLAGS2_ANIMAL_FUNCIONARIO) $(FLAGS3)mamifero.o
	$(FLAGS_COMPILAR_ANIMAL)/mamifero_domestico.cpp $(FLAGS2_ANIMAL_FUNCIONARIO) $(FLAGS3)mamifero_domestico.o
	$(FLAGS_COMPILAR_ANIMAL)/mamifero_exotico.cpp $(FLAGS2_ANIMAL_FUNCIONARIO) $(FLAGS3)mamifero_exotico.o
	$(FLAGS_COMPILAR_ANIMAL)/mamifero_nativo.cpp $(FLAGS2_ANIMAL_FUNCIONARIO) $(FLAGS3)mamifero_nativo.o

	$(FLAGS_COMPILAR)/petshop.cpp $(FLAGS2) $(FLAGS2_ANIMAL_FUNCIONARIO) $(FLAGS3)petshop.o

	$(FLAGS_COMPILAR)/armazenamento.cpp $(FLAGS2) $(FLAGS2_ANIMAL_FUNCIONARIO) $(FLAGS3)/armazenamento.o
	
	$(G++) -Wall -std=c++11 $(APPS)/main.cpp $(OBJS) $(FLAGS2_ANIMAL_FUNCIONARIO) -o $(BIN)/petFera.o



	
run:
	$(BIN)/petFera.o

run_all: all run

run_all_clean: clear all run

clear:
	rm -f $(OBJ)/*.o
	reset

run_valgrind:
	valgrind -v ./petFera.o

run_valgrind_erros:
	valgrind -v --leak-check=full --show-reachable=yes ./petFera.o

test_armazenamento:
	g++ -Wall -c ./src/armazenamento.cpp -I./include -o ./obj/arma.o
	g++ -Wall ./obj/arma.o -I./include ./src/test_armazenamento.cpp -o ./obj/test_arma.o
	./obj/test_arma.o
