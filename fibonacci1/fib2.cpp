#include<stdio.h>
int fib(int n);
int fib(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
int main()
{
	int n;
	printf("enter a number:");
	scanf_s("%d", &n);
	for (int i = n; i <= 15; i++)
	{
		printf("The Fib of %d is %d\n", n, fib(i + 1));
		n++;
	}
}