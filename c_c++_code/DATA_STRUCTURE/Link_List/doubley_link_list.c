#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

// struct node *createNode();
// //void insertNode();
// void deleteNode();
// void viewList();
// int menuList();

struct node
{
    int info;
    struct node *prev, *next;
};
struct node *START = NULL;
void insertNode()
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    printf("Enter a number\n");
    scanf("%d", &n->info);
    n->prev = NULL;
    n->next = NULL;
    if (START == NULL)
        START = n;
    else
    {
        n->next = START;
        START->prev = n;
        START = n;
    }
}
void deleteNode()
{
    struct node *r;
    if (START == NULL)
        printf("list is empty");
    else if(START->next == NULL)  
    {  
        START = NULL;   
        free(START);  
        printf("\nNode Deleted\n");  
    }  
    else
    {
        r = START;
        START = START->next;
        START->prev = NULL;
        free(r);
    }
}
void viewList()
{
    struct node *t;
    t = START;
    if (START == NULL)
        printf("list is empty");
    else
    {
        while (t != NULL)
        {
            printf("data is %d\n", t->info);
            t = t->next;
        }
    }
}
int menuList()
{
    int ch;
    printf("\n1.Add value to the list");
    printf("\n2.delete first value");
    printf("\n3.view list");
    printf("\n4.Exit");
    printf("\nEnter your choice");
    scanf("%d", &ch);
    return (ch);
}
int main()
{
    while (1)
    {
        switch (menuList())
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
            printf("invalid choice");
        }
    }
}