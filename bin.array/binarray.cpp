#include<stdio.h>
void sortbinaryarray(int arr[], int size)
{
	int count0 = 0, count1 = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			count0++;
		}
		else
		{
			count1++;
		}
	}
	for (int i = 0; i < count0; i++)
	{
		arr[i] = 0;
	}
	for (int i = count0; i < size; i++)
	{
		arr[i] = 1;
	}
}
int main()
{
	int arr[] = { 0,1,0,0,1,0,0,0,0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	sortbinaryarray(arr, size);
	for (int i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
	}
	return 0;
}
// expected output: 000000011
// 000000011: output given