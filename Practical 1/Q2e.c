#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr = (int *)calloc(3, sizeof(int));

    if (arr == NULL)
    {
        printf("Memory Allocation Failed!");
        return 1;
    }

    printf("Initial Values (intialize by calloc):");
    for (int i = 0; i < 3; i++)
    {
        printf("%d", arr[i]);
    }

    printf("\n");

    // Modify Values
    arr[0] = 5;
    arr[1] = 10;
    arr[2] = 15;

    printf("After Modification: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d", arr[i]);
    }

    free(arr);
    arr = NULL;
    return 0;
}