output: main.o
	g++ -std=c++11 main.o -o output #compile into exe

main.o: main.cc
	g++ -std=c++11 -c main.cc #compile into object file

clean:
	rm *.o output #clean object files


