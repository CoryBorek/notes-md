# Unions Makefile
This would compile the IPV4 example.

The C Source can be found [here](%WEBPATH%/classes/cs1730/unions/ipv4).
```
compile: ipv4.out

ipv4.out: ipv4.c
	gcc -Wall --pedantic-errors ipv4.c -o ipv4.out

run: ipv4.out
	./ipv4.out
clean:
	rm ipv4.out
```

### [Back to Unions](%WEBPATH%/classes/cs1730/unions/)