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
	//int fibNm1 = fib(n - 1);
	//int fibNm2 = fib(n - 2);
	//int fibN = fibNm1 + fibNm2;
	else
	return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n;
	printf("enter a number");
	scanf_s("%d", &n);
	for (int i = n; i <= 10; i++)
	{
		printf("The fib of %d is %d \n", n, fib(i));
		n++;
	}
}