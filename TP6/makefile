all: main.o
	g++ -o main main.o 
main.o : utils.h main.cpp
	g++ -c -Wall --std=c++17 main.cpp
clean:
	rm -rf *.o main
