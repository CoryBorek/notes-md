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
