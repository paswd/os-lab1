FLAGS=-pedantic -Wall -Werror -Wno-sign-compare -Wno-long-long -lm
COMPILLER=g++

all: start

start: main.o
	$(COMPILLER) $(FLAGS) -o os-lab1 main.o

main.o: main.cpp
	$(COMPILLER) -c $(FLAGS) main.cpp

