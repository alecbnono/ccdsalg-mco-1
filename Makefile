CC = gcc
CFLAGS = -Wall -Wextra -std=c99

all: main

main: main.c
	$(CC) $(CFLAGS) -o main main.c

test: test.c
	$(CC) $(CFLAGS) -o test test.c

clean: main.c
	rm *.exe
