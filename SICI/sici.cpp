#include<stdio.h>
#include<math.h>
int main()
{
	int p, r, t, choice, timesComp;
	int amount, ci, si;
	printf("enter a choice. \n 1. Compute SI. \n 2. Compute CI. \n 3. Compute both SI and CI.\n");
	scanf_s("%d", &choice);
	printf("Your choice is %d\n", choice);
	printf("Enter the Principal amount:");
	scanf_s("%d", &p);
	printf("Enter the Rate of Interest:");
	scanf_s("%d", &r);
	printf("Enter the Time in years:");
	scanf_s("%d", &t);
	if (choice == 1)
	{
		si = (p * t * r) / 100;
		printf("The Simple interest is : %d\n", si);
	}
	else if (choice == 2)
	{
		printf("enter the number of times interest is compounded per year:");
		scanf_s("%d", &timesComp);
		r /= 100;
		amount = p * pow((1 + r / timesComp), (timesComp * t));
		ci = amount - p;
		printf("The future value of the investment is: %d\n", amount);
		printf("The interest earned is: %d\n", ci);
	}
	else if (choice == 3)
	{
		si = (p * t * r) / 100;
		printf("The Simple interest is : %d\n", si);
		printf("enter the number of times interest is compounded per year:");
		scanf_s("%d", &timesComp);
		r = r / 100;
		amount = p * pow((1 + r / timesComp), (timesComp * t));
		ci = amount - p;
		printf("The future value of the investment is: %d\n", amount);
		printf("The interest earned is: %d\n", ci);
	}
	else
		printf("Invalid Input\n");
	printf("Thank You");
	return 0;

}