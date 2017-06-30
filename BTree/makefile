BTree: main.o src/BTree.o
	g++ -o BTree main.o src/BTree.o

main.o: main.cpp src/BTree.o
	g++ -c main.cpp

BTree.o: include/BTree.h src/BTree.cpp
	g++ -c include/BTree.h src/BTree.cpp

clean:
	rm -rf *.o BTree src/*.o
