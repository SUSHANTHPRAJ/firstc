/*#include<stdio.h>
int main()
{
	int n;
	int t;
	printf("enter a number");
	scanf_s("%d", &n);
	for(int i = 1; i <= 10; i++)
	{
		t = n * i;
		printf("%d\n", t);
	}
	printf("\n");
	return 0;
}*/


#include<stdio.h>
void printTable(int n);
int main()
{
	int n;
	printf("enter a number:");
	scanf_s("%d", &n);
	printTable(n);
	return 0;
}
void printTable(int n)
{
	for (int i = 1; i <= 10; i++)
	{
		printf("%d\n", n * i);
	}
}