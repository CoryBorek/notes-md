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
