#include<stdio.h>
char calculategrade(int score1, int score2, int score3)
{
	float average, average23, total, testscoremax;
	testscoremax = 50;
	total = score1 + score2 + score3;
	average = total / 3.0;
	if (average >= 0.9 * testscoremax)
	{
		return 'A';
	}
	else if (average >= 0.7 * testscoremax)
	{
		if (score3 > 0.9 * testscoremax)
		{
			return 'A';
		}
		else
		{
			return 'B';
		}
	}
	else if (average >= 0.5 * testscoremax)
	{
		average23 = (score2 + score3) / 2.0;
		if (average23 > 0.7 * testscoremax)
		{
			return 'C';
		}
		else
		{
			return 'D';
		}
	}
	else
	{
		return 'F';
	}
}
int main()
{
	int score1, score2, score3;
	char grade;
	printf("enter the first test score (between 0 and 50):");
	scanf_s("%d", &score1);
	printf("enter the second test score (between 0 and 50):");
	scanf_s("%d", &score2);
	printf("enter the third score (between 0 and 50):");
	scanf_s("%d", &score3);
	if (score1 < 0 || score1>50 || score2 < 0 || score2>50 || score3 < 0 || score3>50)
	{
		printf("invalid input Test scores should be between 0 and 50.\n");
		return 1;
	}
	grade = calculategrade(score1, score2, score3);
	printf("the student's grade is : %c\n", grade);
	return 0;
}
