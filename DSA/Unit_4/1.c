#include<stdio.h>
int tab_size=10;
typedef struct inventory
{
    int part_id;
    int no_parts;
    int flag;
}parts;

void init(parts *p, int n)
{
    for(int i=0;i<10;i++)
        p[i].flag=0;
}

void insert(parts *ht, int id, int no, int *count)
{
    int key, tab_size;
    key=id%10;
    // printf("\n\t %d \n",*count);
    // printf("\n\t %d \n",tab_size);
    if(*count==tab_size)
    {
        printf("hash is full");
        return;
    }
    key=id%tab_size;
    while(ht[key].flag==1) // checks for empty spaces
        key=(key+1)%tab_size; // linear probing
    ht[key].part_id=id;
    ht[key].no_parts=no;
    ht[key].flag=1;
    printf("parts id=%d",ht[key].part_id);
    // printf("\n\t %d \n",*count);
    (*count)++;
    // printf("\n\t %d \n",*count);
    return;

}

void display(parts *ht)
{
    for(int i=0;i<tab_size;i++)
        if(ht[i].flag != 0)
        {
            printf("%d ",i);
            printf("parts id %3d and no of parts %d ",ht[i].part_id,ht[i].no_parts);
            printf("\n");
        }
}
void delete(parts *ht,int id , int *count)
{
    if(*count == 0)
    {
        printf("Empty Hash \n");
        return;
    }
    int h_id = id%tab_size;
    int i=0;
    while(ht[h_id].part_id != id && i<tab_size)
    {
        h_id = (h_id + 1) % tab_size;
        i++;
    }
    if(ht[h_id].part_id == id)
    {
        ht[h_id].flag = 0;
        *count--;
    }
    else
        printf("Id Not Found \n");
}

int main()
{
    int ch, no, id, count=0;
    parts ht[10];
    init(ht,10);
    do
    {
        printf("\n enter the choice \n\t 1 :insert() \n\t 2 :display() \n\t 3 :delete() \n\t 4: exit() \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("enter the parts_id and no of parts \n");
                    scanf("%d %d",&id,&no);
                    insert(ht,id,no,&count);
                    break;
            case 2: display(ht);
                    break;
        }
    }while(ch!=3 || ch!=4);
    return 0;
}