#include <stdio.h>
struct BinaryTreeNode
{
    int info, front, rear, capacity, *array;
    struct BinaryTreeNode *Left;
    struct BInaryTreeNode *Right;
};
struct BinaryTreeNode *createQueue(int capacity)
{
    struct BinaryTreeNode *Q = (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
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
int isEmptyQueue(struct BinaryTreeNode *Q)
{
    return (Q->front == -1);
}
int isFullQueue(struct BinaryTreeNode *Q)
{
    return ((Q->rear + 1) % Q->capacity == Q->front);
}
int QueueSize(struct BinaryTreeNode *Q)
{
    return ((Q->capacity - Q->front + Q->rear + 1) % Q->capacity);
}
void enQueue(struct BinaryTreeNode *Q, int data)
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
int deQueue(struct BinaryTreeNode *Q)
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
void deleteQueue(struct BinaryTreeNode *Q)
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
void levelOrder(struct BinaryTreeNode *root)
{
    struct BinaryTreeNode *temp;
    struct BinaryTreeNode *Q;
    Q = createQueue(4);
    if (!root)
        return;
    enQueue(Q, root);
    while (!isEmptyQueue(Q))
    {
        temp = deQueue(Q);
        printf("%d ", temp->info);
        if (temp->Left)
            enQueue(Q, temp->Left);
        if (temp->Right)
            enQueue(Q, temp->Right);
    }
    deleteQueue(Q);
}
int main()
{
    struct BinaryTreeNode *root = createQueue(1);
    root->Left = createQueue(2);
    root->Right = createQueue(3);
    root->Left->Left = createQueue(4);
    root->Left->Right = createQueue(5);

    printf("Level Order traversal of binary tree is \n");
    levelOrder(root);

    return 0;
}