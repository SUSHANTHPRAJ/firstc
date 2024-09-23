#include<stdio.h>
void main()
{
    int a[10],n,i,key;
    printf("enter the no of elements\n");
    scanf("%d", &n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the key elements\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if (a[i]==key)
    {
        printf("the key element %d is found at position %d",key,i+1);
        break;
    }
    }
    printf("key is not found");
}
