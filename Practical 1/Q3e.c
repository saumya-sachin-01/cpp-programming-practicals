#include <stdio.h>
#include <stdlib.h>

int main()
{ // Allocate memory of 3 integers
    int *arr = (int *)malloc(3 * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }
    // Initialize with values
    for (int i = 0; i < 3; i++)
    {
        arr[i] = (i + 1) * 10;
    }

    printf("Initial array(size 3): ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // Resize to 5 integers
    arr = (int *)realloc(arr, 5 * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory reallocation failed!");
        return 1;
    }

    // Initialize new elements
    arr[3] = 40;
    arr[4] = 50;

    printf("After realloc(size 5): ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    arr == NULL;

    return 0;
}
