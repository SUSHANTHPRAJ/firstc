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
	int number = 27; // test solution
	int result = factorial(number);
	printf("factorial of %d is %d\n", number, result);
	return 0;
}
//output
//factorial of 27 is 1484783616