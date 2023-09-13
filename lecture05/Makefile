.PHONY: all
all: example01.out example02.out example03.out

%.out: %.c
	gcc -o $@ $<

.PHONY: clean
clean:
	rm -f *.out
