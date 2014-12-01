all: prog_main

prog_main: prog_main.o List.o Node.o picture.o
	g++ prog_main.o List.o Node.o picture.o -o prog_main

prog_main.o: prog_main.cpp
	g++ -c prog_main.cpp -o prog_main.o


picture.o: List.h Node.h picture.h picture.cpp
	g++ -c picture.cpp -o picture.o

Node.o: List.h picture.h Node.h Node.cpp
	g++ -c Node.cpp -o Node.o

List.o: Node.h List.h List.cpp
	g++ -c List.h List.cpp

clean:
	rm *.o

mrproper: clean
	rm prog_main
