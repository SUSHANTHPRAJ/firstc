// 1. Write a loop for testing - sizes 1-10
// 2. 2-digit random numbers
// 3. Create a pull requests

// Comment

#include<stdio.h>
#include<stdlib.h>
void revarray(int* array, int size)
{
    int temp;
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }

}
void reverse_and_print(int arr[], int size)
{
    printf("Before reverse:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    revarray(arr, size);
    printf("Reversed array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int array[10];
    for (int size = 3; size <= 7; size++)
    {
        for (int i = 0; i < size; i++)
        {
            array[i] = rand() % 100;
        }
        reverse_and_print(array, size);

    }
    return 0;
}




