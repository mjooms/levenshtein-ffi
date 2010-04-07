CC = gcc
CFLAGS = -g -pg -O2
OBJECTS = test.o levenshtein.o

main : $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o test

test.o : test.c
	$(CC) $(CFLAGS) -c test.c

levenshtein.o : ../levenshtein.c
	$(CC) $(CFLAGS) -c ../levenshtein.c
