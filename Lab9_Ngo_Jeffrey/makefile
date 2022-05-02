
output: main.o stack.o queue.o menu.o validation.o
	g++ -std=c++11 -o buffer main.o stack.o queue.o menu.o validation.o

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

stack.o: stack.cpp stack.hpp
	g++ -std=c++11 -c stack.cpp

queue.o: queue.cpp queue.hpp
	g++ -std=c++11 -c queue.cpp

menu.o: menu.cpp menu.hpp
	g++ -std=c++11 -c menu.cpp

validation.o: validation.cpp validation.hpp
	g++ -std=c++11 -c validation.cpp

clean:
	rm *.o buffer