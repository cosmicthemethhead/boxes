build:
	gcc ./src/*.c -o ./build/boxes.o
	@./build/boxes.o

.PHONY: all build clean
