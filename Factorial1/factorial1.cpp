
#include<stdio.h>
int factorial(int n);
int factorial(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

int main() {
	for (int i = 5; i >= 1; i--) {
		printf("Factorial of %d is %d\n", i, factorial(i));
	}
	return 0;
}