all: main.o pine.o
	g++ -o main main.o pine.o
main.o : tree.h pine.h main.cpp
	g++ -c -Wall --std=c++17 main.cpp
pine.o: tree.h pine.h pine.cpp
	g++ -c -Wall --std=c++17 pine.cpp
clean:
	rm -rf *.o main
