
output: main.o FibonacciNR.o FibonacciR.o
	g++ -std=c++11 -o fibonacci main.o FibonacciNR.o FibonacciR.o

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

FibonacciNR.o: FibonacciNR.cpp FibonacciNR.hpp
	g++ -std=c++11 -c FibonacciNR.cpp

FibonacciR: FibonacciR.cpp FibonacciR.hpp
	g++ -std=c++11 -c FibonacciR.cpp

clean:
	rm *.o fibonacci