
output: main.o count_letters.o output_letters.o
	g++ main.o count_letters.o output_letters.o -o io

main.o: main.cpp
	g++ -c main.cpp

count_letters.o: count_letters.cpp count_letters.hpp
	g++ -c count_letters.cpp

output_letters.o: output_letters.cpp output_letters.hpp
	g++ -c output_letters.cpp

clean:
	rm *.o io

