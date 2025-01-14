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