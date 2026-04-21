#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    struct patient
    {
        int p_id;
        char name[50];
        int age;
        char disease[50];
        int consultation_fee;
    };

    int n;

    printf("Enter number of patients : ");
    scanf("%d", &n);

    struct patient *ptr;

    ptr = (struct patient *)malloc(n * sizeof(struct patient));

    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Patient  %d\n", i + 1);
        printf("Enter Patient ID : ");
        scanf("%d", &ptr[i].p_id);
        getchar();
        printf("Enter Name : ");
        fgets(ptr[i].name, 50, stdin);
        ptr[i].name[strcspn(ptr[i].name, "\n")] = '\0';
        printf("Enter Age : ");
        scanf("%d", &ptr[i].age);
        getchar();
        printf("Enter Disease : ");
        fgets(ptr[i].disease, 50, stdin);
        ptr[i].disease[strcspn(ptr[i].disease, "\n")] = '\0';
        printf("Enter Consultation Fee : ");
        scanf("%d", &ptr[i].consultation_fee);
        getchar();
    }
    printf("All Patient Records : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Patient  %d\n", i + 1);
        printf("Patient ID : %d\n", ptr[i].p_id);

        printf("Name : %s\n", ptr[i].name);

        printf("Age : %d\n", ptr[i].age);

        printf("Disease : %s\n", ptr[i].disease);

        printf("Consultation Fee : %d\n", ptr[i].consultation_fee);
    }
    int id, found = 0;
    printf("Enter Patient ID : ");
    scanf("%d", &id);
    getchar();
    for (int i = 0; i < n; i++)
    {
        if (ptr[i].p_id == id)
        {
            printf("Patient ID : %d\n", ptr[i].p_id);
            printf("Name : %s\n", ptr[i].name);

            printf("Age : %d\n", ptr[i].age);

            printf("Disease : %s\n", ptr[i].disease);

            printf("Consultation Fee : %d\n", ptr[i].consultation_fee);
        }
        found = 1;
        break;
    }
    if (!found)
    {
        printf("Invalid Student ID !");
    }

    free(ptr);
    return 0;
}