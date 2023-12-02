#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    struct Node *left;
    char data;
    struct Node *right;
    int rthread;
}NODE;

NODE *GetNode(char ch)
{
    NODE *NewNode = (NODE*)malloc(sizeof(NODE));
    NewNode->data = ch;
    NewNode->left = NULL;
    NewNode->right = NULL;
    NewNode->rthread = 1;
    return NewNode;
}

NODE *insert(NODE *root, int value)
{
    
}