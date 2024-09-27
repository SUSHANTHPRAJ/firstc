#include<stdio.h>
int main()
{
	int choice;
	int km;
	int miles;
	printf("Enter a Choice between 1 and 2.\n");
	printf("1. To convert Miles to Kilometer\n");
	printf("2. To convert Kilometer to Miles\n");
	scanf_s("%d", &choice);
	if (choice == 1)
	{
		printf("Enter the Distance in Kilometers:");
		scanf_s("%d", &km);
		if (km < 0)
		{
			printf("Enter the distance greater than or equal to 0.The distance cannot be negative.\n");
		}
		else
		{
			miles = km * 0.621371;
			printf("The Distance in Miles is %d", miles);
		}
	}
	else if (choice == 2)
	{
		printf("Enter the Distance in Miles:");
		scanf_s("%d", &miles);
		if (miles < 0)
		{
			printf("Enter the Distance greater than or equal to 0.The Distance cannot be negative.\n");
		}
		else
		{
			km = miles * 1.60934;
			printf("The Distance in Km is %d", km);
		}
	}
	else
	{
		printf("invalid input.The number must be between 1 or 2.");
	}
	return 0;
	
}