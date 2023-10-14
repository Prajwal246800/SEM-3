#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    struct Node *left;
    char data;
    struct Node *right;
}NODE;

int isoperand(char ch)
{
    return ch >= '0' && ch <= '9';
}
NODE *GetNode(char ch)
{
    NODE *NewNode = (NODE*)malloc(sizeof(NODE));
    NewNode->data = ch;
    NewNode->left = NULL;
    NewNode->right = NULL;
    return NewNode;
}
NODE *CreateBT(char postFixExp[])
{
    NODE *stk[50];
    int top = -1;
    int i = 0;
    while(postFixExp[i] != '\0')
    {
        if(isoperand(postFixExp[i]))
        {
            stk[++top] = GetNode(postFixExp[i]);
        }
        else
        {
            NODE *NewNode = GetNode(postFixExp[i]);
            NewNode->right = stk[top--];
            NewNode->left = stk[top--];
            stk[++top] = NewNode;
        }
        i++;
    }
    return stk[top];
}


void preOrderTraversal(NODE *root)
{
    if(root != NULL)
    {
        printf("%c ",root->data);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}
void inOrderTraversal(NODE *root)
{
    if(root != NULL)
    {
        inOrderTraversal(root->left);
        printf("%c ",root->data);
        inOrderTraversal(root->right);
    }
}
void postOrderTraversal(NODE *root)
{
    if(root != NULL)
    {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%c ",root->data);
    }
}


int calculate(char opnd , int oper1 , int oper2)
{
    switch(opnd)
    {
        case '+':
            return oper1 + oper2;
        case '-':
            return oper1 - oper2;
        case '*':
            return oper1 * oper2;
        case '/':
            return oper1 / oper2;
        default:
            printf("%c is not a valid operation.", opnd);
            exit(1);
    }
}
int evaluatePostFix(NODE *root)
{
    if(root == NULL)
        return 0;
    if(isoperand(root->data))
    {
        return root->data -'0';
    }
    return calculate(root->data , evaluatePostFix(root->left) , evaluatePostFix(root->right));
}


int main()
{
    printf("Enter The PostFix Expression : ");
    char postFixExp[20];
    scanf("%s",postFixExp);
    NODE *root = CreateBT(postFixExp);
    printf("Pre Order Traversal : ");
    preOrderTraversal(root);
    printf("\nIn Order Traversal : ");
    inOrderTraversal(root);
    printf("\nPost Order Traversal : ");
    postOrderTraversal(root);
    printf("\n");
    int res = evaluatePostFix(root);
    printf("The Answer Is : %d", res);
    return 0;
}