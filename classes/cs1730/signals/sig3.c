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