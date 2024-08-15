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
	int number =0 ; // test solution
	int result = factorial(number);
	printf("factorial of %d is %d\n", number, result);
	return 0;
}
//output
//factorial of 0 is 1