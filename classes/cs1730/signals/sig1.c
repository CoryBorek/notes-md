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