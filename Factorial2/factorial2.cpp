#include<stdio.h>
int factorial(int n);
int factorial(int n) 
{
	if (n == 0) 
	{
		return 1;
	}
	else 
	{
		return n * factorial(n - 1);
	}
}

int main() 
{
	int n = -3;
	if (n<0)
	{
		printf("%d is invalid input. Number must be greater than zero", n);
	}
	for (int i = n; i >= 1; i--) 
	{
		printf("Factorial of %d is %d\n", i, factorial(i));
	}
	return 0;
}