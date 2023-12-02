#include<stdio.h>
#include<stdlib.h>
#define maxnodes 20

void initGraph(int adjmat[][maxnodes] , int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            adjmat[i][j] = 0 ;
}

void createGraph(int adjmat[][maxnodes])
{
    while(1)
    {
        printf("Enter The Values For i and j: ");
        int i = 0 , j = 0 ;
        scanf("%d%d",&i,&j);
        if(i == -1 && j == -1)
            break;
        adjmat[i][j] = 1;
        adjmat[j][i] = 1;
    }
}

void display(int adjmat[][maxnodes] , int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ", adjmat[i][j]);
        printf("\n");
    }
}

#include<stdio.h>
#include<stdlib.h>
#define maxnodes 20

void initGraph(int adjmat[][maxnodes] , int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            adjmat[i][j] = 0 ;
}

void createGraph(int adjmat[][maxnodes])
{
    while(1)
    {
        printf("Enter The Values For i and j: ");
        int i = 0 , j = 0 ;
        scanf("%d%d",&i,&j);
        if(i == -1 && j == -1)
            break;
        adjmat[i][j] = 1;
        adjmat[j][i] = 1;
    }
}

void display(int adjmat[][maxnodes] , int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ", adjmat[i][j]);
        printf("\n");
    }
}
void bfs(int adjmat[][maxnodes],int x,int a,int n,int s,int *visited)
{
    int q[20],r=1,f=0;
    q[++r]=s;
    visited[s]=1;
    printf("\n%d",s);
    while(f<=r)
    {
        x=q[f++];
        for(int i=1;i<=n;i++)
            continue;
    }
}


int main()
{
    printf("Enter The No Of Nodes : ");
    int n , source;
    scanf("%d", &n);
    int adjMatrix[maxnodes][maxnodes];
    initGraph(adjMatrix,n);
    createGraph(adjMatrix);
    display(adjMatrix , n);
    return 0;
}