#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory alocation failed!!");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = (i + 1) * 10;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d", ptr[i]);
    }
    return 0;
}