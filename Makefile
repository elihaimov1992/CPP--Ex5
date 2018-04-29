CXX=g++
CXXFLAGS=-std=gnu++11

all: main.o CircularInt.o
	$(CXX) CircularInt.o main.o
	./a.out

CircularInt.o: CircularInt.cpp CircularInt.hpp
	$(CXX) $(CXXFLAGS) -c CircularInt.cpp -o CircularInt.o

main.o: main.cpp CircularInt.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

clean:
	rm *.o a.out
