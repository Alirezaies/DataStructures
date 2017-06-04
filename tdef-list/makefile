TList: main.o src/TArray.o
	g++ -o TList main.o src/TArray.o

main.o: main.cpp src/TArray.o
	g++ -c main.cpp

TArray.o: include/TArray.h src/TArray.cpp
	g++ -c include/TArray.h src/TArray.cpp

clean:
	rm -rf *.o TList
