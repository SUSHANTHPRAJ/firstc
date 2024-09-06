#include<stdio.h>
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
}