#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int fibonacci(int n) {
	if (n == 1 || n == 2) {
		return 1;								   //first two numbers are equal 1
	}
	return fibonacci(n - 1) + fibonacci(n - 2);    //add up the previous 2 numbers
}

int main(void) {
	int n;
	printf("n = ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		printf("%d ", fibonacci(i));
	}
	getchar(); getchar();
	return 0;
}