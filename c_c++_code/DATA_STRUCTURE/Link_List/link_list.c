#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *START = NULL;

struct node *createNode()
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    return n;
}
void insertNode()
{
    struct node *temp, *t;
    temp = createNode();
    printf("enter a number ");
    scanf("%d", &temp->info);
    temp->link = NULL;
    if (START == NULL)
        START = temp;
    else
    {
        t = START;
        while (t->link != NULL)
        {
            t = t->link;
        }
        t->link = temp;
    }
}
void deleteNode()
{
    struct node *r;
    if (START == NULL)
        printf(" List  is empty ");
    else
    {
        r = START;
        START = START->link;
        free(r);
    }
}
void viewList()
{
    struct node *t;
    if (START == NULL)
        printf("list is empty");
    else
    {
        t = START;
        while (t != NULL)
        {
            printf("%d ", t->info);
            t = t->link;
        }
    }
}
int menu()
{
    int ch;
    printf("\n1 Add value in the list ");
    printf("\n2 Delete first value");
    printf("\n3 view All");
    printf("\n4 exit");
    printf("\n \nEnter your choice  ");
    scanf("%d", &ch);
    return ch;
}
int main()
{
    while (1)
    {
        switch (menu())
        {
        case 1:
            insertNode();
            break;
        case 2:
            deleteNode();
            break;
        case 3:
            viewList();
            break;
        case 4:
            exit(0);
        default:
            break;
        }
    }
}