#include<stdio.h>
struct Point
{
    int x;
    int y;
};
int getQuadrant (struct Point p)
{
if(p.x > 0 && p.y > 0)
{
    return 1;
}
else if (p.x < 0 && p.y > 0)
{
    return 2;
}
else if (p.x < 0 && p.y < 0)
{
    return 3;
}
else if (p.x > 0 && p.y < 0)
{
    return 4;
}
else
{
    return 0;
}
}
int main()
{
    struct Point p;
    printf ("enter the x-coordinate of the point:");
    scanf("%d", &p.x);
    printf("enter the y-coordinate of the point:");
    scanf("%d", &p.y);
    int quadrant = getQuadrant(p);
    switch (quadrant)
    {
    case 1:
    printf ("The point is in the first quadrant. \n");
        break;
    case 2:
    printf("The point is in the second quadrant. \n");
    break;
    case 3:
    printf("The point is in the third quadrant. \n");
    break;
    case 4:
    printf("The point is in the fourth quadrant. \n");
    break;    
    default:
    printf("The point is on an axis or at the origin. \n");
        break;
    }
}