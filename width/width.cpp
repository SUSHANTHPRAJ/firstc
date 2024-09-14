#include<stdio.h>
int main() 
{
    int n;
    printf("Enter the width of the road (n >= 11): ");
    scanf_s("%d",&n);
    if (n < 11)
    {
        printf("Invalid width. The value of n must be >= 11.\n");
        return 1;
    }
    for (int m = 1; m <= 5; m++) 
    {
        if ((n - m - 4) % 6 == 0) 
        {
            int c = (n - m - 4) / 6;
            if (c >= 0) 
            {
                printf("For n = %d, solution is: m = %d, p = 0\n", n, m);
                return 0;
            }
        }
        if ((n - m - 10) % 6 == 0) {
            int c = (n - m - 10) / 6;
            if (c >= 0) {
                printf("For n = %d, solution is: m = %d, p = 1\n", n, m);
                return 0;
            }
        }
    }
    printf("invalid solution found for n = %d\n", n);
    return 0;
}