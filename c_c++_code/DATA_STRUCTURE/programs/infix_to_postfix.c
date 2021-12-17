#include <stdio.h>
#define size 100
char stack[size];
int top = -1;
void push(char item)
{
    if (top >= size - 1)
        printf("\n stack overflow");
    else
    {
        top++;
        stack[top] = item;
    }
}
char pop()
{
    char item;
    item = stack[top];
    top--;
    return item;
}
int is_operator(char symbol)
{
    if (symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol == '-')
        return 1;
    else
        return 0;
}
int precddence(char symbol)
{
    if (symbol == '^')
        return 3;
    else if (symbol == '*' || symbol == '/')
        return 2;
    else if (symbol == '+' || symbol == '-')
        return 1;
    else
        return 0;
}
int main()
{
    char infix[size], postfix[size], item, temp;
    int i = 0, j = 0;
    printf("enter the airthematic expression  ");
    gets(infix);
    while (infix[i] != '\0')
    {
        item = infix[i];
        if (item == "(")
            push(item);
        else if (item >= 'A' && item <= 'Z' || item >= 'a' && item <= 'z')
        {
            postfix[j] = item;
            j++;
        }
        else if (is_operator == 1)
        {
            temp = pop();
            while (is_operator == 1 && precddence(temp) >= precddence(item))
            {
                postfix[j] = temp;
                j++;
                temp = pop();
            }
            push(temp);
            push(item);
        }
        else if (item == ")")
        {
            temp = pop();
            while (temp != "(")
            {
                postfix[j] = temp;
                j++;
                temp = pop();
            }
        }
        else
        {
            printf("\n in valid airthmatic expression. \n ");
        }
        i++;
    }
    while (top > -1)
    {
        postfix[j] = pop();
        j++;
    }
    postfix[j] = '\0';
    printf("\n airthematic expression in postfix notation ");
    puts(postfix);
}
