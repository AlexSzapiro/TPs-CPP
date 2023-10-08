main : main.o tree.o pine.o
	g++ -o main main.o tree.o pine.o -Wall
main.o: main.cpp
	g++ -c main.cpp -Wall
tree.o: tree.cpp tree.h
	g++ -c tree.cpp -Wall
pine.o: pine.cpp pine.h
	g++ -c pine.cpp -Wall
clean :
	rm -rf *.o main