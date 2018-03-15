prog1: main.o	
	g++ -std=c++11 main.o -o prog1

all:
	
main.o: main.cpp
	g++ -std=c++11 -c -Os main.cpp -o main.o

debug:
	g++ -std=c++11 -g -O0 main.cpp -o main.o

clean:
	rm -f *.o prog1