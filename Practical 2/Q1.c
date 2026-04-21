#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    struct vehicle
    {
        int v_no;
        char o_name[50];
        char v_type[50];
        int r_year;
    };

    int n;

    printf("Enter number of vehicles : ");
    scanf("%d", &n);

    struct vehicle *ptr;

    ptr = (struct vehicle *)calloc(n, sizeof(struct vehicle));

    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nVehicle  %d\n", i + 1);

        printf("\nEnter Vehicle No : ");
        scanf("%d", &ptr[i].v_no);

        getchar();

        printf("\nEnter Owner Name : ");
        fgets(ptr[i].o_name, 50, stdin);

        ptr[i].o_name[strcspn(ptr[i].o_name, "\n")] = '\0';

        printf("\nEnter Vehicle Type : ");
        fgets(ptr[i].v_type, 50, stdin);

        ptr[i].v_type[strcspn(ptr[i].v_type, "\n")] = '\0';

        printf("\nEnter Registration Year : ");
        scanf("%d", &ptr[i].r_year);
    }

    printf("\n   All Records :  \n");

    for (int i = 0; i < n; i++)
    {
        printf("\nVehicle %d\n", i + 1);

        printf("\nVehicle No : %d\n", ptr[i].v_no);

        printf("\nOwner Name : %s\n", ptr[i].o_name);

        printf("\nVehicle Type : %s\n", ptr[i].v_type);

        printf("\nRegistration Year : %d\n", ptr[i].r_year);
    }

    int no, found = 0;

    printf("\nEnter Vehicle Number You Want to Search: ");
    scanf("%d", &no);

    for (int i = 0; i < n; i++)
    {
        if (ptr[i].v_no == no)
        {
            printf("\nVehicle %d\n", i + 1);

            printf("\nVehicle No : %d\n", ptr[i].v_no);

            printf("\nOwner Name : %s\n", ptr[i].o_name);

            printf("\nVehicle Type : %s\n", ptr[i].v_type);

            printf("\nRegistration Year : %d\n", ptr[i].r_year);

                found = 1;
                
                break;
                
        }
    
    }

    if (!found)
    {
        printf("Invalid Vehicle No !");
    }

    free(ptr);
    return 0;
}