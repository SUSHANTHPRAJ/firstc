#include<stdio.h>
void main()
{
	int item, low, high, mid, a[50], n;
	printf("\n Enter the size of an array");
	scanf_s("%d", &n);
	printf("enter the key elements of the array in sorted form \n);
		for (int i = 0; i < n; i++)
		{
			scanf_S("%d", &a[i]);

		}
	printf("\n Enter the item to be searched:");
	scanf_s("%d", &item);
	low = 0;
	high = n - 1;
	mid = (low + high) / 2;
	while (low <= high) && (a[mid] != item)
	{
		if (item < a[mid])
			high = mid - 1;
		else
		{
			low = mid + 1;
			mid = (low + high) / 2;
		}
	}
	if (a[mid] = item)
		printf("\n\n %d found at location %d", item, mid + 1);
	else
		printf("\n\n %d does not exist", item);
}