#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *ptr;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed !!");
        return 1;
    }

    printf("Enter %d elements :\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("All elements of the array :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ptr[i]);
    }

    int largest = ptr[0];

    for (int i = 1; i < n; i++)
    {
        if (ptr[i] > largest)
        {
            largest = ptr[i];
        }
    }

    printf("Largest number in this array is : %d\n", largest);

    free(ptr);

    return 0;
}