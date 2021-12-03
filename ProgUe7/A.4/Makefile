a.out: liste1ende.o liste1endetest.o
	gcc -std=c99 -Wall -pedantic-errors liste1ende.o liste1endetest.o

liste1ende.o: liste1ende.c liste1ende.h
	gcc -std=c99 -Wall -pedantic-errors liste1ende.c -c

liste1endetest.o: liste1endetest.c liste1ende.h
	gcc -std=c99 -Wall -pedantic-errors liste1endetest.c -c

clean:
	rm main liste1ende.o liste1endetest.o