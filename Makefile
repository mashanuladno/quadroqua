CC := g++
objects = inputoutput.o solutionEqu.o test.o mainprogr.o

all: $(objects)
	$(CC) $^ -o all

mainprogr.o: mainprogr.cpp
	$(CC) -c mainprogr.cpp -o mainprogr.o

inputoutput.o: inputoutput.cpp
	$(CC) -c inputoutput.cpp -o inputoutput.o

solutionEqu.o: solutionEqu.cpp
	$(CC) -c solutionEqu.cpp -o solutionEqu.o

test.o: test.cpp
	$(CC) -c test.cpp -o test.o

clean:
	rm *.o all