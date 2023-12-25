.PHONY: all clean

all: main

main.o: main.cpp
	g++ -c main.cpp

Object.o: Object.cpp
	g++ -c Object.cpp

Creature.o: Creature.cpp
	g++ -c Creature.cpp

Bird.o: Bird.cpp
	g++ -c Bird.cpp

Rat.o: Rat.cpp
	g++ -c Rat.cpp
	
Tree.o: Tree.cpp
	g++ -c Tree.cpp

main: main.o Object.o Creature.o Bird.o Rat.o Tree.o
	g++ main.o Object.o Creature.o Bird.o Rat.o Tree.o -o main -lsfml-graphics -lsfml-window -lsfml-system

clean:
	rm *.o main