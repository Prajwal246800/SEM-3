#include <stdio.h>

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;
    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}
void buildHeap(int arr[], int n)
{
    int startIndex = (n / 2) - 1;
    for (int i = startIndex; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
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
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    buildHeap(arr, n);
    printf("Max-Heap:\n");
    printHeap(arr, n);
    return 0;
}
