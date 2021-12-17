#include <stdio.h>
#include <stdlib.h>
struct BinaryTreeNode
{
    int info;
    struct BinaryTreeNode *Left;
    struct BinaryTreeNode *Right;
};

struct BinaryTreeNode *createNode(int data)
{
    struct BinaryTreeNode *node = (struct BinaryTreeNode *)malloc(sizeof(struct BinaryTreeNode));
    node->info = data;
    node->Left = NULL;
    node->Right = NULL;

    return (node);
}
void preOrder(struct BinaryTreeNode *root)
{
    if (root)
    {
        printf(" %d ", root->info);
        preOrder(root->Left);
        preOrder(root->Right);
    }
}
void inOrder(struct BinaryTreeNode *root)
{
    if (root)
    {

        inOrder(root->Left);
        printf(" %d ", root->info);
        inOrder(root->Right);
    }
}
void postOrder(struct BinaryTreeNode *root)
{
    if (root)
    {

        postOrder(root->Left);
        postOrder(root->Right);
        printf(" %d ", root->info);
    }
}
int main()
{
    struct BinaryTreeNode *root = createNode(1);
    root->Left = createNode(2);
    root->Right = createNode(3);
    root->Left->Left = createNode(4);
    root->Left->Right = createNode(5);
    root->Right->Left = createNode(6);
    root->Right->Right = createNode(7);
    printf("\n preorder binary tree");
    preOrder(root);
    printf("\n inorder binary tree");
    inOrder(root);
    printf("\n post order binary tree ");
    postOrder(root);
}