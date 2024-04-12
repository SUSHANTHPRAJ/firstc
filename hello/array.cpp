#include <stdio.h>
#include <stdlib.h>

int findDuplicate(int nums[], int n) 
{
    // Use the array elements as indices and mark them as negative
    // If an eleme
    // int is already negative, that means it is a duplicate
    for (int i = 0; i < n; i++) {
        int index = abs(nums[i]);
        if (nums[index] < 0)
            return index;
        else
            nums[index] = -nums[index];
    }
    return -1; // No duplicate found
}

int main() 
{
    int nums[] = {1, 3, 4, 2, 2}; // Example input array
    int n = sizeof(nums) / sizeof(nums[0]);

    int duplicate = findDuplicate(nums, n);
    if (duplicate != -1)
        printf("The repeated number is: %d\n", duplicate);
    else
        printf("No repeated number found.\n");

    return 0;
}