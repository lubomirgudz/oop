all: Lab1

Lab1: main.o module1.o module2.o
	g++ main.o module1.o module2.o -o Lab1

main.o: main.cpp module1.h module2.h
	g++ -c main.cpp

module1.o: module1.cpp module1.h
	g++ -c module1.cpp

module2.o: module2.cpp module2.h
	g++ -c module2.cpp

clean:
	rm -f *.o Lab1