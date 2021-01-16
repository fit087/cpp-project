# makefile
all:
	gcc -c ./*.cpp
	#g++ ./person-test.cpp Person.o -o test.bin -fPIC -O2 -g -Wall -lpthread
	g++ ./person-test.cpp Person.o /usr/local/lib/libgtest.a -o test.bin -fPIC -O2 -g -Wall -lpthread

clean:
	rm *.o
	rm ./person-test.bin
