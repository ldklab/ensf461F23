.PHONY: all
all: ex01_stack.out ex02_layout.out ex03_bug.out

%.out: %.c
	gcc -O0 -g -Wall -o $@ $^

clean:
	rm -f *.out
