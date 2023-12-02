#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct inventory
{

}INVENTORY;

void init(INVENTORY *p , int n)
{
    for (int i=0;i<n;i++)
    {

    }
}

void insert(INVENTORY *ht,int id , int no,)

int main()
{
    int ch,id,no;
    INVENTORY ht[10];
    do 
    {
        printf("Enter The Choice : ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1: printf("Enetr The Part Number And number Of Parts");
                    scanf("%d %d", &id, &no);
                    insert(ht,id,no);
        }
    }
    return 0;
}