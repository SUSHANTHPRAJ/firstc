#include<stdio.h>
void sortbinaryarray (int arr[], int n)
{
	int countzero = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == 0)
		{
			countzero++;
		}
	}
	for (int i = 0; i < countzero; i++)
	{
		arr[i] = 0;
	}
	for (int i = countzero; i < n; i++)
	{
		arr[i] = 1;
	}
}
int main()
{
	int arr[] = { 1,0,1,0,1,0,0,1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	sortbinaryarray(arr,n);
	printf("sorted binary array:");
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}
// test solution
// expected output: 00001111
// given output: 00001111