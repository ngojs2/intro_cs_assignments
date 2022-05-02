
output: main.o menu.o queue.o
	g++ -std=c++11 -o queue main.o menu.o queue.o

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

menu.o: menu.cpp menu.hpp
	g++ -std=c++11 -c menu.cpp

queue.o: queue.cpp queue.hpp
	g++ -std=c++11 -c queue.cpp

clean:
	rm *.o queue