#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    int staticArray[SIZE];
    printf("Static memory allocation:\n");
    printf("Address of staticArray: %p\n", staticArray);
    for (int i = 0; i < SIZE; ++i)
    {
        staticArray[i] = i * 10;
    }
    printf("Values stored in staticArray: ");
    for (int i = 0; i < SIZE; ++i)
    {
        printf("%d ", staticArray[i]);
    }
    printf("\n");
    
    int *dynamicArray = (int *)malloc(SIZE * sizeof(int));
    printf("\nDynamic memory allocation using malloc:\n");
    printf("Address of dynamicArray: %p\n", dynamicArray);
    for (int i = 0; i < SIZE; ++i)
    {
        dynamicArray[i] = i * 5;
    }
    printf("Values stored in dynamicArray: ");
    for (int i = 0; i < SIZE; ++i)
    {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");
    free(dynamicArray);
    return 0;
}
