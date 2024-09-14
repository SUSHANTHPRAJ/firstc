#include<stdio.h>
int fib(int n);
int fib(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	int fibNm1 = fib(n - 1);
	int fibNm2 = fib(n - 2);
	int fibN = fibNm1 + fibNm2;
}
int main()
{
	int n;
	printf("enter a number");
	scanf_s("%d", &n);
	for (int i = n; i <= 10; i++)
	{
		printf("The fib is %d \n", fib(i));
	}
}