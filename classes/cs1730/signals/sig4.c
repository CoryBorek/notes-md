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
