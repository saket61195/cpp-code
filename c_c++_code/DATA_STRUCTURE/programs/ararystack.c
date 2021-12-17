#include <stdio.h>
// #include <conio.h>
#include <stdlib.h>
//#include<iostream>
//using namespace std;
struct arraystack
{
    int top;
    int capacity;
    int *array;
};
struct arraystack *creatstack(int cap)
{
    struct arraystack *stack;
    stack = malloc(sizeof(struct arraystack));
    stack->capacity = cap;
    stack->top = -1;
    stack->array = malloc(sizeof(int) * stack->capacity);
    return (stack);
}
int isfull(struct arraystack *stack)
{
    if (stack->top == stack->capacity - 1)
        return (1);
    else
        return (0);
}
int isempty(struct arraystack *stack)
{
    if (stack->top == -1)
        return (1);
    else
        return (0);
}
void push(struct arraystack *stack, int item)
{
    if (!isfull(stack))
    {
        stack->top++;
        stack->array[stack->top] = item;
    }
}
int pop(struct arraystack *stack)
{
    int item;
    if (!isempty(stack))
    {
        item = stack->array[stack->top];
        stack->top--;
        return item;
    }
    return (-1);
}

int main()
{
    int item, choice;
    struct arraystack *stack;
    stack = creatstack(4);
    while (1)
    {
        printf("\n press 1 to push in stack :\n");
        printf("\n press 2 to pop in stack :\n");
        printf("\npress 3 to exit\n ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter a number\n");
            scanf("%d", &item);
            push(stack, item);
            break;
        case 2:
            item = pop(stack);
            if (item == -1)
                printf("stack is empty");
            else
                printf("\npoped value is %d", item);
            break;
        case 3:
            exit(0);
        }
    }
    // getch();
}
