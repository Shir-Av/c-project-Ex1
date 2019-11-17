#-*-MakeFile-*-

all: libmyMath.so libmyMath.a mains maind

mains: main.o  libmyMath.a	 
	gcc -Wall -o mains main.o libmyMath.a
	
maind: main.o libmyMath.so
	gcc -Wall -o maind main.o ./libmyMath.so

mymaths:libmyMath.a

mymathd:libmyMath.so

libmyMath.a: basicMath.o power.o myMath.h
	ar -rcs libmyMath.a basicMath.o power.o

libmyMath.so: basicMath.o power.o myMath.h
	gcc -shared -o libmyMath.so basicMath.o power.o

main.o: main.c myMath.h
	gcc -Wall -c main.c

power.o: power.c myMath.h
	gcc -Wall -fPIC -c power.c

basicMath.o: basicMath.c myMath.h
	gcc -Wall -c basicMath.c

.PHONY: clean all mymaths mymathd

clean:
	rm -f *.o *.a *.so mains maind
