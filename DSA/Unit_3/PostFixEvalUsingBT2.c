#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
    struct node* left;
    char data;
    struct node* right;
}Node;
Node* createNode(char ele){
    Node* new=(Node*)malloc(sizeof(Node));
    new->left=NULL;
    new->right=NULL;
    new->data=ele;
    return new;
}
int isOperand(char x){
    if(x=='+'|| x=='*' || x=='-' || x=='/')
        return 0;
    return 1;
}

void push(char* stk, char data, int top){
    stk[top]=data;
    return;
}
Node* makeTree(Node* root, char* stk, int* top){
    if(*top>=0){
        if(isOperand(stk[*top])&& isOperand(stk[*top-1])){
            root->right=createNode(stk[(*top)--]);
            root->left=createNode(stk[(*top)--]);
            return root;
        }
        if(isOperand(stk[*top])){
            root->left=createNode(stk[*top]);
            --(*top);
            root->right=makeTree(root,stk,top);
            return root;
        }
        else{
            root->right=createNode(stk[*top]);
            --(*top);
            root->right=makeTree(root->right,stk,top);             
            root->left=createNode(stk[*top]);
            --(*top);
            root->left=makeTree(root->left,stk,top);                   
            return root;
        }
    }
    return root;
}
Node* createTree(Node* root, char* postfix, char* stk){
    int top=-1,i=0;
    while(postfix[i]!='\0'){
        top++;
        push(stk,postfix[i],top);
        i++;
    }
    // for(int j=0;j<=top;j++)
    //     printf("%c",postfix[j]);
    // printf("\n");
    root=createNode(stk[top--]);
    root=makeTree(root,stk,&top);
    return root;
}

int calc(int a,int b,char exp){
    switch(exp){
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '*':
            return a*b;
        case '/':
            return a/b;
    }
}
int evaluate(Node* root){
    if(root!=NULL){
        if(!isOperand(root->data)){
            int left=evaluate(root->left);
            int right=evaluate(root->right);
            int res=calc(left,right,root->data);
            return res;
        }
        else{
            return (root->data)-'0';
        }
    }
}
void display(Node* root){
    if(root!=NULL){
        display(root->left);
        printf("%c",root->data);
        display(root->right);
    }
}

int main(){
    char stk[10];
    char postfix[10];
    printf("Enter the postfix expression: ");
    scanf("%s",postfix);
    Node* root=NULL;
    root=createTree(root,postfix,stk);
    // printf("%c %c %c ",root->data,root->left->data,root->right->data);
    display(root);
    printf("\n %d",evaluate(root));
    return 0;
}