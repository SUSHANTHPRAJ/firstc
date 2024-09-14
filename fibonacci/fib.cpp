/*#include<stdio.h>
int fib(int n);
int fib(int n)
{
	if (n == 1)
	{
		return 0;
	}
	if (n == 2)
	{
		return 1;
	}
	return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n;
	printf("enter a number:");
	scanf_s("%d", &n);
	printf("Fibonacci Sequence from 1 to %d:\n",n);
	for (int i = 1; i <= n; i++) {
		printf("%d\n ", fib(i) + 1);
	}
	printf("\n");
	return 0;
}
*/

/*int n;
print("enter a number:");
scanf_s("%d", &n);
for(int i=n; i<=10; i++)
{
printf("the fib of %d is %d",n++,fib(i));
return 0;
}*/

/*#include <stdio.h>

int main() {
	int n =10; 
	int fib[100]; 

	fib[0] = 0; 
	fib[1] = 1; 

	for (int i = 2; i < n; i++) {
		fib[i] = fib[i - 1] + fib[i - 2]; 
	}

	printf("Fibonacci Sequence from 1 to 10:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", fib[i] + 1); 
	}
	printf("\n");
	return 0;
}*/
