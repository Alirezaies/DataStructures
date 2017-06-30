Stack: main.o src/Stack.o
	g++ -o Stack main.o src/Stack.o

main.o: main.cpp src/Stack.o
	g++ -c main.cpp

Stack.o: include/Stack.h src/Stack.cpp
	g++ -c include/Stack.h src/Stack.cpp

clean:
	rm -rf *.o Stack src/*.o
