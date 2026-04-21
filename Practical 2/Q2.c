#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    struct student
    {
        int s_id;
        char s_name[50];
        char course[50];
        int duration;
    };

    int n, k;

    printf("Enter number of students : ");
    scanf("%d", &n);

    struct student *ptr;

    ptr = (struct student *)malloc(n * sizeof(struct student));

    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("\n     Student %d     \n   ", i + 1);

        printf("\nEnter Student ID : ");
        scanf("%d", &ptr[i].s_id);

        getchar();

        printf("Enter Student Name : ");
        fgets(ptr[i].s_name, 50, stdin);

        ptr[i].s_name[strcspn(ptr[i].s_name, "\n")] = '\0';

        printf("Enter Course : ");
        fgets(ptr[i].course, 50, stdin);

        ptr[i].course[strcspn(ptr[i].course, "\n")] = '\0';

        printf("Enter Duration : ");
        scanf("%d", &ptr[i].duration);
    }

    printf("\nEnter number of new students : ");
    scanf("%d", &k);

    ptr = (struct student *)realloc(ptr, (n + k) * sizeof(struct student));

    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = n; i < (n + k); i++)
    {
        printf("\n     Student %d     \n", i+1);

        printf("\nEnter Student ID : ");
        scanf("%d", &ptr[i].s_id);

        getchar();

        printf("Enter Student Name : ");
        fgets(ptr[i].s_name, 50, stdin);

        ptr[i].s_name[strcspn(ptr[i].s_name, "\n")] = '\0';

        printf("Enter Course : ");
        fgets(ptr[i].course, 50, stdin);

        ptr[i].course[strcspn(ptr[i].course, "\n")] = '\0';

        printf("Enter Duration : ");
        scanf("%d", &ptr[i].duration);
    }

    printf("\n     All Records     \n");
    for (int i = 0; i < (n + k); i++)
    {
        printf("\n     Student %d     \n", i + 1);
        printf("\nStudent ID     : %d\n", ptr[i].s_id);
        printf("Student Name   : %s\n", ptr[i].s_name);
        printf("Course         : %s\n", ptr[i].course);
        printf("Duration       : %d\n", ptr[i].duration);
    }
    int id, found = 0;
    printf("\nEnter Student ID You Want to Search : \n");
    scanf("%d", &id);

    for (int i = 0; i < (n + k); i++)
    {
        if (ptr[i].s_id = id)
        {
            printf("\nStudent ID     : %d\n", ptr[i].s_id);
            printf("Student Name   : %s\n", ptr[i].s_name);
            printf("Course         : %s\n", ptr[i].course);
            printf("Duration       : %d\n", ptr[i].duration);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("Invalid Student ID !");
    }

    free(ptr);
    return 0;
}