program: main.o myBank.o
	gcc -o program main.o myBank.o
main.o: main.c
	gcc -c main.c
myBank: myBank.c
	gcc -c myBank.c
clean:
	rm -f *.o program
