all: oak.o pine.o lumberjack.o utils.o main.o
	g++ -o main main.o oak.o pine.o lumberjack.o utils.o
main.o : tree.h oak.h pine.h main.cpp
	g++ -c -Wall --std=c++17 main.cpp
pine.o: tree.h pixel.h pine.h pine.cpp
	g++ -c -Wall --std=c++17 pine.cpp
oak.o: tree.h pixel.h oak.h oak.cpp
	g++ -c -Wall --std=c++17 oak.cpp
lumberjack.o: tree.h lumberjack.h lumberjack.cpp
	g++ -c -Wall --std=c++17 lumberjack.cpp
utils.o: pixel.h utils.cpp
	g++ -c -Wall --std=c++17 utils.cpp	
clean:
	rm -rf *.o main