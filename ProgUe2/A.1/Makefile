GCC_ARGS = gcc -std=c99 -pedantic-errors -Wall -Wstrict-prototypes
OBJ = main.o summe.o differenz.o input.o

math: $(OBJ)
	$(GCC_ARGS) -o $@ $(OBJ)
%.o: %.c
	$(GCC_ARGS) -c $<

main.o: summe.h differenz.h

differenz.o: input.h

summe.o: input.h

clean:
	rm math $(OBJ)