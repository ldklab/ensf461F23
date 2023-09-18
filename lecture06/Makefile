.PHONY: all
all: example_fork.out example_exec.out example_shell.out

%.out: %.c
	gcc -o $@ $<

.PHONY: clean
clean:
	rm -f *.out
