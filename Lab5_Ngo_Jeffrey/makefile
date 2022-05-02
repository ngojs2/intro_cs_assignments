
output: main.o first.o second.o third.o menu.o
	g++ -o recursion main.o first.o second.o third.o menu.o

main.o: main.cpp
	g++ -c main.cpp

first.o: first.cpp first.hpp
	g++ -c first.cpp

second.o: second.cpp second.hpp
	g++ -c second.cpp

third.o: third.cpp third.hpp
	g++ -c third.cpp

menu.o: menu.cpp menu.hpp
	g++ -c menu.cpp

clean:
	rm *.o recursion
