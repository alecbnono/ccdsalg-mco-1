CC = gcc
CFLAGS = -Iinclude -Wall -Wextra -std=c99

all: main

main1:
	$(CC) $(CFLAGS) -o bin/main1 src/*.c main/main1.c

main2:
	$(CC) $(CFLAGS) -o bin/main2 src/*.c main/main2.c

run1:
	./bin/main1

run2:
	./bin/main2

clean: main.c
	rm -f bin/main1 bin/main2
