#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{

    struct node *one, *two, *three, *four, *five;

    one = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));
    three = (struct node *)malloc(sizeof(struct node));
    four = (struct node *)malloc(sizeof(struct node));
    five = (struct node *)malloc(sizeof(struct node));

    one->data = 1;
    one->next = two;

    two->data = 2;
    two->next = three;

    three->data = 3;
    three->next = four;

    four->data = 4;
    four->next = five;

    five->data = 5;
    five->next = NULL;

    struct node *temp = one;

    while (temp != NULL)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}
