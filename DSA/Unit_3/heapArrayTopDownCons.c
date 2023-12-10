#include <stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void upHeap(int arr[], int i)
{
    int parent = (i - 1) / 2;
    while (i > 0 && arr[parent] < arr[i])
    {
        swap(&arr[i], &arr[parent]);
        i = parent;
        parent = (i - 1) / 2;
    }
}
void insert(int arr[], int *n, int value)
{
    (*n)++;
    arr[*n - 1] = value;
    upHeap(arr, *n - 1);
}
void printHeap(int arr[], int n)
{
    printf("Heap array representation: ");
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[10];
    int heapSize = 0;
    insert(arr, &heapSize, 12);
    insert(arr, &heapSize, 11);
    insert(arr, &heapSize, 13);
    insert(arr, &heapSize, 5);
    insert(arr, &heapSize, 6);
    insert(arr, &heapSize, 7);
    printf("Max-Heap:\n");
    printHeap(arr, heapSize);
    return 0;
}
