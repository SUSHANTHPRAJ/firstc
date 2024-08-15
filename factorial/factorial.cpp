#include<stdio.h>
int factorial(int n)
{
	if (n < 0)
	{
		return 0;
	}
	if (n == 0 || n == 1)
	{
		return 1;
	}
	return n * factorial(n - 1);
}
int main()
{
	int number =-3 ; // test solution
	int result = factorial(number);
	printf("factorial of %d is %d\n", number, result);
	return 0;
}
//output
//factorial of -3 is 0