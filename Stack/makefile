LinkedList: main.o src/LinkedList.o
	g++ -o LinkedList main.o src/LinkedList.o

main.o: main.cpp src/LinkedList.o
	g++ -c main.cpp

LinkedList.o: include/LinkedList.h src/LinkedList.cpp
	g++ -c include/LinkedList.h src/LinkedList.cpp

clean:
	rm -rf *.o LinkedList src/*.o
