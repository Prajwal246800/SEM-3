//Write a C program Matrix multiplication using functions
//Write a C program for selection sort using functions
//Write the structiure for the fields names mark 1 mark 2 mark 3 read calculate avg of the marks and print the results

#include<stdio.h>
void mul(int a[][100],int b[][100],int x,int y,int m,int n)
{
    if(y!=m)
    {
        printf("Cannot multiply with this order");
    }
    else
    {
        int resul[x][n],i,j;
        for(i=0;i<x;i++)
        {
            for(j=0;j<n;j++)
            {
                int res=0;
                for(int k=0;k<m;k++)
                    res=res+ a[i][k] * b[k][j];
                resul[i][j]=res;
            }
        }
        for(i=0;i<x;i++)
        {
            for(j=0;j<n;j++)
                printf("%d ",resul[i][j]);
            printf("\n");
        }
    }
}

int main()
{
    int x,y,a[100][100],b[100][100],m,n;
    printf("Enter the order of first matrix");
    scanf("%d%d",&x,&y);
    for(int i=0;i<x;i++)
    {
        printf("Enter %d row elements",i);
        for(int j=0;j<y;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Enter the order of second matrix");
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)
    {
        printf("Enter %d row elements",i);
        for(int j=0;j<n;j++)
            scanf("%d",&b[i][j]);
    }
    mul(a,b,x,y,m,n);
    return 0;
}