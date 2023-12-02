#include<stdio.h>
#include<stdlib.h>

void TopDown(int H[] , int ele , int *count)
{
    int c = *count;
    int  p = (c -1)/2;
    while(c > 0 && ele >= H[p])
    {
        H[c] = H[p];
        c = p;
        p = (c -1)/2;
    }
    H[c] = ele;
    *count = *count + 1;
}

int main()
{
    int n = 6 , H[10] , ele , count = 0;
    for (int i = 0 ; i < n ; i++)
    {
        scanf("%d", &ele);
        TopDown(H , ele , &count);
    }
    for(int i = 0 ; i < n ; i++)
        printf("%d ", H[i]);
}