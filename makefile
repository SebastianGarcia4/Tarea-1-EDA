CC = g++
flags = -std=c++11

exe = prog

$(exe): main.o sort.o 
	$(CC) $(flags) main.o sort.o -o $(exe)

sort.o: sort.cpp sort.h
	$(CC) $(flags) -c sort.cpp -o sort.o

main.o: main.cpp sort.h
	$(CC) $(flags) -c main.cpp -o main.o

run: $(exe)
	./$(exe)

clean:
	rm $(exe) *.o
