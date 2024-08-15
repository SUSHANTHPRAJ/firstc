#include<stdio.h>
unsigned long long factorial_loop(int n)
{
	unsigned long long result = 1;
	if (n < 0)
	{
		return 0;
	}
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}
unsigned long long factorial_recursion(int n)
{
	if (n < 0)
	{
		return 0;
	}
	if (n == 0)
	{
		return 1;
	}
	return n * factorial_recursion(n - 1);
}
int main()
{
	int number = 4;
	unsigned long long loop_result = factorial_loop(number);
	unsigned long long recursion_result = factorial_recursion(number);
	printf("Factorial of %d using loop: %llu\n", number, loop_result);
	printf("Factorial of %d using recursion: %llu\n", number, recursion_result);
	return 0;
}
// output
// Factorial of 4 using loop: 24
// Factorial of 4 using recursion: 24
