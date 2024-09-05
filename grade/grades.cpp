#include<stdio.h>
int main()
{
	int marks;
	printf("enter your marks");
	scanf_s("%d", &marks);
	if (marks <= 100 && marks >= 90)
	{
		printf("You have scored an A+");
	}
	else if (marks < 90 && marks >= 75)
	{
		printf("You have score an A");
	}
	else if (marks < 75 && marks >= 65)
	{
		printf("You have scored a B+");
	}
	else if (marks < 65 && marks >= 50)
	{
		printf("You have scored a B");
	}
	else if (marks < 50 && marks >= 35)
	{
		printf("You have scored a C");
	}
	else if (marks < 35 && marks >= 0)
	{
		printf("You have failed better luck next time");
	}
	else
	{
		printf("Invalid Input the marks should be between 0 and 100");
	}
}
