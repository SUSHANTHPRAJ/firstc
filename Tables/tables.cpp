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
	printTable(7);
	return 0;
}
void printTable(int n)
{
	for (int i = 1; i < n; i++)
	{
		printf("Multiplicaion of %d\n", i);
		for (int j = 1; j <= 10; j++)
		{
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}
	
}
