CC = gcc
CFLAGS = -Iinclude -Wall -Wextra -std=c99

all: main

main1: src/main1.c src/*.c
	$(CC) $(CFLAGS) -o main1 src/main1.c src/*.c -lm

main2: src/main2.c src/*.c
	$(CC) $(CFLAGS) -o main2 src/main2.c src/*.c -lm

clean: main.c
	rm -f main1 main2
