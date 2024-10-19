# Programs.

The following included source files contain what is necessary to run the signal examples.

## sig1.c
```c
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void f(int); /* prototype for signal handler function */

int main(void) {
	int i;
	signal(SIGFPE, f); /* install the handler */
	for (i = -3; i <= 3; i++) {
		printf("%d\n", 12 / i);
	}
	return 0;
}

void f(int signum) {
	printf("You can't divide by zero!\n");
	exit(SIGFPE);
}
```

## sig2.c
```c
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int main(void) {
	signal(SIGINT, SIG_IGN);

	long pid = getpid();
	printf("Process %ld is running ... \n", pid);
	for (int i = 1; i <= 30; i++) {
		printf("Process %ld is still going ... \n", pid);
		sleep(1);
	}
	return 0;
}

```

## sig3.c
```c
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int main(void) {
	signal(SIGINT, SIG_IGN);
	long pid = getpid();

	printf("Process %ld is running ... \n", pid);

	for (int i = 1; i <= 30; i++) {
		printf("Process %ld is still running ... \n", pid);
		sleep(1);
		if (i == 3) {
			signal(SIGINT, SIG_DFL);
		}
	}
	return 0;
}
```

## sig4.c
```c
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void f(int);

int running;

int main(void) {
	int i;
	char text[80];
	i = fork();
	if (i == 0) {
		signal(SIGUSR1, f);
		printf("Child waiting...\n");
		running = 1;
		int j = 1;
		while (running == 1 && j <= 60) {
			sleep(1);
			j++;
		} // while
	} else {
		int exit = 0;
		while (exit == 0) {
			sleep(1);
			printf("Command? ");
			scanf("%s", text);
				if (strcmp(text, "frog") == 0) {
					kill(i, SIGUSR1);
				}
				if (strcmp(text, "quit") == 0) {
					exit = 1;
				}
		}
	}
	return 0;
}

void f(int signum) {
	printf("Child received a frog from parent!\n");
	running = 0;
}
```

## sig5.c
```c
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

void f(int), g(int);

int main(void) {

	signal(SIGUSR1, f);
	signal(SIGUSR2, g);
	for (int i = 1; i < 60; i++) {
		sleep(1);
	}
	return 0;
}

void f(int signum) {
	printf("Recieved a frog!\n");
}

void g(int signum) {
	printf("Received a giraffe!\n");
	exit(SIGUSR2);
}
```

## sig6.c
```c
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
	pid_t iPid = getpid();
	printf("Process %ld started.\n", (long) iPid);
	kill(iPid, SIGINT);
	printf("Process %ld ended.\n", (long) iPid);
	return 0;
}
```

## Makefile
```
compile: sig1.out sig2.out sig3.out sig4.out sig5.out

sig1.out: sig1.c
	gcc -Wall sig1.c -o sig1.out

sig2.out: sig2.c
	gcc -Wall sig2.c -o sig2.out

sig3.out: sig3.c
	gcc -Wall sig3.c -o sig3.out

sig4.out: sig4.c
	gcc -Wall sig4.c -o sig4.out

sig5.out: sig5.c
	gcc -Wall sig5.c -o sig5.out

sig6.out: sig6.c
	gcc -Wall sig6.c -o sig6.out
run: sig1.out
	./sig1.out
run2: sig2.out
	./sig2.out
run3: sig3.out
	./sig3.out
run4: sig4.out
	./sig4.out
run5: sig5.out
	./sig5.out
clean:
	rm sig1.out
	rm sig2.out
	rm sig3.out
	rm sig4.out
	rm sig5.out
```

### ### [Back to Signals](https://coryborek.github.io/classes/cs1730/signals/)