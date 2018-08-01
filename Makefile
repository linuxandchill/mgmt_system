output: main.o utils.o #whenever object file changes do the following
	g++ -std=c++11 main.o utils.o -o output #compile into exe

main.o: main.cpp #create object file
	g++ -std=c++11 -c main.cpp #compile into object file

utils.o: utils.cpp utils.h
	g++ -std=c++11 -c utils.cpp  #compile into object file

clean:
	rm *.o output #clean object files

