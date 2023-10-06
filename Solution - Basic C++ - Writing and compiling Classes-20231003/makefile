main: main.o tree.o
	g++ -o main main.o tree.o -Wall
main.o: main.cpp
	g++ -c main.cpp -Wall
tree.o: tree.cpp tree.h
	g++ -c tree.cpp -Wall
clean:
	rm -rf *.o main
