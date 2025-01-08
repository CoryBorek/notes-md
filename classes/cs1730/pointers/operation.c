#include <stdio.h>

int addition(int a, int b) { return a + b; }
int subtraction(int a, int b) { return a - b; }


int operation(int x, int y, int (* functocall)(int, int)) {
	int g;
	g = (*functocall)(x,y);
	return g;
}

int main(void) {
	int m, n;
	int (* minus)(int, int) = subtraction;
	m = operation(7, 5, addition);
	n = operation(20, m, minus);
	printf("%d\n", n);
	return 0;
}