#include<stdio.h>
#include<stdlib.h>

void BottomUpCons(int H[] , int n)
{
    int k , v , heap , j;
    for(int i = n/2 ;i > 0; i--)
    {
        k=i;
        v = H[k];
        heap = 0 ;
        while(heap != 1 && 2*k <= n)
        {
            j = 2*k;
            if(j < n)
                if(H[j] < H[j+1])
                    j = j+1;
            if(v >= H[j])
                heap = 1;
            else
            {
                H[k] = H[j];
                k = j;
            }
        }H[k] = v;
    }
}

int main()
{
    int n=6 ,H[100];
    printf("Enter the Elements");
    for(int i=1; i<=n; i++)
	{
        scanf("%d",&H[i]);
    }
    BottomUpCons(H,n);
    for(int i=1; i<=n; i++)
        printf("%d ",H[i]);
    return 0;
}