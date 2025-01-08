### Makefile for fork4.c

This is a Makefile that can be used to run fork4.c.

Fork4.c's source can be found [here](%WEBPATH%/classes/cs1730/systems/calls/fork4).
```
compile: fork4.out

fork4.out: fork4.c
	gcc -Wall fork4.c -o fork4.out

run: fork4.out
	./fork4.out
clean:
	rm fork4.out
```