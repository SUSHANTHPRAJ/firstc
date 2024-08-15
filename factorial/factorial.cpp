#include<stdio.h>
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
	int number = 6; // test solution
	int result = factorial(number);
	printf("factorial of %d is %d\n", number, result);
	return 0;
}
