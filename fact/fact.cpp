#include<stdio.h>
void fact(int n);
int main()
{
	int n;
	for (int i = n; i >= 2; i--)
	{
		return fact(n);
	}
}
void fact(int n)
{
	return n * fact(n - 1);
}