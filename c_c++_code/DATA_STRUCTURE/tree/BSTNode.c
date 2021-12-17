#include<stdio.h>
struct BSTNode
{
    int data;
    struct BSTNode *Left;
    struct BSTNode *Right;
    
};
struct BSTNode * Find(struct BSTNode *root,int data)
{
    if(root==NULL)
    return NULL;
    else if(data<root->Left)
    return find(root->Left,data);
    else if(data>root->Right)
    return Find(root->Right,data);
}

