
\


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    struct customer
    {
        int ac_no;
        char c_name[50];
        int a_type;
        char type[50];
        int balance;
    };

    int n;

    printf("Enter the number of customers : ");
    scanf("%d", &n);

    struct customer *ptr;
    ptr = (struct customer *)malloc(n * sizeof(struct customer));

    if (ptr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {

        printf("Enter details of customer %d \n", i + 1);

        printf("Enter Account Number : ");
        scanf("%d", &ptr[i].ac_no);

        getchar();

        printf("Enter Customer Name : ");
        fgets(ptr[i].c_name, 50, stdin);

        ptr[i].c_name[strcspn(ptr[i].c_name, "\n")] = '\0';

        printf("1. Savings Account \n");
        printf("2. Investment Account \n");
        printf("3. RD/FD \n");

        printf("Enter Account Type : ");
        scanf("%d", &ptr[i].a_type);

        switch (ptr[i].a_type)
        {
        case 1:
            strcpy(ptr[i].type, "Savings Account");
            break;

        case 2:

            strcpy(ptr[i].type, "Investment Account");
            break;

        case 3:

            strcpy(ptr[i].type, "RD/FD");
            break;

        default:
            break;
        }
        printf("Enter available balance : ");
        scanf("%d", &ptr[i].balance);
    }
    printf("All Customer Records : \n");
    for (int i = 0; i < n; i++)
    {
        printf("Details of customer %d \n", i + 1);
        printf("Account Number : %d\n", ptr[i].ac_no);
        printf("Customer Name : %s\n", ptr[i].c_name);
        printf("Account Type : %s\n", ptr[i].type);
        printf("Available Balance : %d\n", ptr[i].balance);
    }

    printf("List of Customers whose balance is less than 5000 : \n");

    for (int i = 0; i < n; i++)
    {

        if (ptr[i].balance < 5000)
        {
            printf("Customer %d \n", i + 1);
            printf("Account Number : %d\n", ptr[i].ac_no);
            printf("Customer Name : %s\n", ptr[i].c_name);
            printf("Account Type : %s\n", ptr[i].type);
            printf("Available Balance : %d\n", ptr[i].balance);
        }
    }
    free(ptr);
    return 0;
}
