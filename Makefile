CC = gcc
CFLAGS = -Iinclude -Wall -Wextra -std=c99

all: main

main1:
	$(CC) $(CFLAGS) -o main1 src/*.c

main2:
	$(CC) $(CFLAGS) -o main2 src/*.c

clean: main.c
	rm -f main1 main2
