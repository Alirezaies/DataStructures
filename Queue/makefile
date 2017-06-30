Queue: main.o src/Queue.o
	g++ -o Queue main.o src/Queue.o

main.o: main.cpp src/Queue.o
	g++ -c main.cpp

Queue.o: include/Queue.h src/Queue.cpp
	g++ -c include/Queue.h src/Queue.cpp

clean:
	rm -rf *.o Queue src/*.o
