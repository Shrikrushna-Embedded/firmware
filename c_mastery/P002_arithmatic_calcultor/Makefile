CC = gcc
CFLAGS = -std=c17 -Wall -Wextra -Werror -pedantic

SRC = src/main.c
TARGET = build/p002

all:
	mkdir -p build
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -rf build

