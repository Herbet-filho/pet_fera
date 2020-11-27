all: 
	
#main: main.o
	#./main.o

#main.o: main.cpp main.hpp

petshop.o: funcionario.o veterinario.o nivelSeguranca.o tratador.o animal.o mamifero.o ave.o reptil.o anfibio.o petshop.cpp petshop.hpp
	g++ -Wall -c petshop.cpp funcionario.o veterinario.o nivelSeguranca.o tratador.o animal.o mamifero.o ave.o reptil.o anfibio.o
	echo petShop.o ok

silvestre.o: silvestre.cpp silvestre.hpp
	g++ -Wall -c silvestre.cpp
	echo "silvestre.o ok"

mamifero.o: funcionario.o veterinario.o nivelSeguranca.o tratador.o animal.o mamifero.cpp mamifero.hpp
	g++ -Wall -c mamifero.cpp funcionario.o veterinario.o nivelSeguranca.o tratador.o animal.o 
	echo mamifero.o ok

ave.o: funcionario.o veterinario.o nivelSeguranca.o tratador.o animal.o ave.cpp ave.hpp
	g++ -Wall -c ave.cpp funcionario.o veterinario.o nivelSeguranca.o tratador.o animal.o 
	echo ave.o ok

reptil.o: funcionario.o veterinario.o nivelSeguranca.o tratador.o animal.o reptil.cpp reptil.hpp
	g++ -Wall -c reptil.cpp funcionario.o veterinario.o nivelSeguranca.o tratador.o animal.o 
	echo reptil.o ok

anfibio.o: funcionario.o veterinario.o nivelSeguranca.o tratador.o animal.o anfibio.cpp anfibio.hpp
	g++ -Wall -c anfibio.cpp funcionario.o veterinario.o nivelSeguranca.o tratador.o animal.o 
	echo anfibio.o ok

animal.o: funcionario.o veterinario.o nivelSeguranca.o tratador.o animal.cpp animal.hpp
	g++ -Wall -c animal.cpp funcionario.o veterinario.o nivelSeguranca.o tratador.o
	echo animal.o ok

tratador.o: nivelSeguranca.o funcionario.o tratador.cpp tratador.hpp
	g++ -Wall -c tratador.cpp nivelSeguranca.o funcionario.o
	echo tratador.o ok

nivelSeguranca.o: nivelSeguranca.cpp nivelSeguranca.hpp
	g++ -Wall -c nivelSeguranca.cpp
	echo nivelSeguranca.o ok

veterinario.o: funcionario.o veterinario.cpp veterinario.hpp
	g++ -Wall -c veterinario.cpp funcionario.o
	echo veterinario.o ok

funcionario.o: funcionario.cpp funcionario.hpp
	g++ -Wall -c funcionario.cpp
	echo "funcionario.o ok"

clear:
	rm -f *.o