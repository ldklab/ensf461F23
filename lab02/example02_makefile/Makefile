.PHONY: all
all: main.out

main.out: main.c util.h util.c
		gcc -o main.out main.c util.c

.PHONY: clean
clean:
		rm -f main.out
