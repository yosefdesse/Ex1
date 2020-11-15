all: libmyMath.a libmyMath.so mains maind
mymaths: libmyMath.a
mymathd: libmyMath.so
mains: main.o libmyMath.a
	gcc -Wall -g -o mains main.o libmyMath.a
maind: main.o libmyMath.so
	gcc -Wall -g -o maind main.o ./libmyMath.so
libmyMath.a: power.o basicMath.o
	ar rc libmyMath.a power.o basicMath.o
libmyMath.so: power.o basicMath.o
	gcc -shared power.o basicMath.o -o libmyMath.so
power.o: power.c myMath.h
	gcc -Wall -g -c power.c
basicMath.o: basicMath.c myMath.h
	gcc -Wall -g -c basicMath.c
main.o: main.c myMath.h
	gcc -Wall -g -c main.c
clean:
	rm -f *.o *.a *.so mains maind
