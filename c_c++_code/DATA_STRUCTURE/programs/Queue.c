#include <stdio.h>
#include <stdlib.h>
struct ArrayQueue
{
    int front, rear;
    int capacity;
    int *array;
};
struct ArrayQueue *createQueue(int capacity)
{
    struct ArrayQueue *Q = (struct ArrayQueue *)malloc(sizeof(struct ArrayQueue));
    if (!Q)
        return NULL;
    else
    {
        Q->capacity = capacity;
        Q->front = Q->rear = -1;
        Q->array = (int *)malloc(Q->capacity * sizeof(int));
        if (!Q->array)
            return NULL;
        else
            return Q;
    }
}
int isEmptyQueue(struct ArrayQueue *Q)
{
    return (Q->front == -1);
}
int isFullQueue(struct ArrayQueue *Q)
{
    return ((Q->rear + 1) % Q->capacity == Q->front);
}
int QueueSize(struct ArrayQueue *Q)
{
    return ((Q->capacity - Q->front + Q->rear + 1) % Q->capacity);
}
void enQueue(struct ArrayQueue *Q, int data)
{
    if (isFullQueue(Q))
        printf("overflow ");
    else
    {
        Q->rear = (Q->rear + 1) % Q->capacity;
        Q->array[Q->rear] = data;
        if (Q->front == -1)
            Q->front = Q->rear;
        printf("%d enqueued to queue\n", data);
    }
}
int deQueue(struct ArrayQueue *Q)
{
    int data = -1;
    if (isEmptyQueue(Q))
    {
        return -1;
    }
    else
    {
        data = Q->array[Q->front];
        if (Q->front == Q->rear)
        {
            Q->front = Q->rear = -1;
        }
        else
        {
            Q->front = (Q->front + 1) % Q->capacity;
        }
        return data;
    }
}
void deleteQueue(struct ArrayQueue *Q)
{
    if (Q)
    {
        if (Q->array)
        {
            free(Q->array);
        }
        free(Q);
    }
}
int front(struct ArrayQueue *Q)
{
    if (!isEmptyQueue(Q))
        return Q->array[Q->front];
}

// Function to get rear of queue
int rear(struct ArrayQueue *Q)
{
    if (!isEmptyQueue(Q))
        return Q->array[Q->rear];
}

int main()
{
    int choice, item;
    struct ArrayQueue *stack;
    stack = createQueue(4);
    while (1)
    {
        printf("\n1 insert in queue");
        printf("\n2 delete in queue");
        printf("\n3 front and rare ");
        printf("\n4 exit");
        printf("\n enter the choice ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n enter a number ");
            scanf("%d", &item);
            enQueue(stack, item);
            break;

        case 2:
            item = deQueue(stack);
            if (item == -1)
                printf("Queue is Empty");
            else
                printf(" deleated item is %d\n", item);
            break;
        case 3:
            printf("front is %d ", front(stack));
            printf("Rear item is %d\n", rear(stack));
            break;
        case 4:
            exit(0);
        }
    }
}
