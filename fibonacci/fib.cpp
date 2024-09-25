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
	//int fibNm1 = fib(n - 1);
	//int fibNm2 = fib(n - 2);
	//int fibN = fibNm1 + fibNm2;
	return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n;
	printf("enter a number");
	scanf_s("%d", &n);
	printf("the fib of %d is %d", n, fib(n));
	return 0;
}