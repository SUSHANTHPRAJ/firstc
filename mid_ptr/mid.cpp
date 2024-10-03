#include<stdio.h>
int* midpoint(int* ptr_start, int* ptr_end);
int* midpoint(int* ptr_start, int* ptr_end)
{
	if (ptr_start == 0 || ptr_end == 0 || ptr_start > ptr_end)
	{
		return 0;
	}
	else
	{
		return ptr_start + (ptr_end - ptr_start) / 2;
	}	
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int* ptr_start = arr;
	int* ptr_end = arr + sizeof(arr) / sizeof(arr[0]) - 1;
	printf("midpoint value: %d\n", *midpoint(ptr_start, ptr_end));
}