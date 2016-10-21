FLAGS=-pedantic -Wall -Werror -Wno-sign-compare -Wno-long-long -lm
COMPILLER=g++

all: start

start: main.o
	$(COMPILLER) $(FLAGS) -o os-lab1 main.o

main.o: main.cpp
	$(COMPILLER) -c $(FLAGS) main.cpp

clear:
	-rm -f *.o *.gch da_sort

freturn:
	mv in.txt input.txt
	rm out.txt
	rm -rf tmp/
