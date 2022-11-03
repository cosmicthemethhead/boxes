CC = clang

INCFLAGS = -Isrc 

CFLAGS  = -std=c11 -O3 -g -Wall -Wextra -Wpedantic -Wstrict-aliasing
CFLAGS += -Wno-pointer-arith -Wno-newline-eof -Wno-unused-parameter -Wno-gnu-statement-expression
CFLAGS += -Wno-gnu-compound-literal-initializer -Wno-gnu-zero-variadic-macro-arguments
CFLAGS += -fbracket-depth=1024
CFLAGS += $(INCFLAGS)

SRC  = $(wildcard src/**/*.c) $(wildcard src/*.c) $(wildcard src/**/**/*.c) $(wildcard src/**/**/**/*.c)
OBJ  = $(SRC:.c=.o)
BIN  = build
GAME = boxes

.PHONY: all run build clean

all: build

run: all
	$(BIN)/$(GAME)

build: $(OBJ)
	$(CC) -o $(BIN)/$(GAME) $^

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm -rf $(BIN) $(OBJ)
