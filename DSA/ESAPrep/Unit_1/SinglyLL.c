#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* createNode(int value)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
void insertAtBeginning(struct Node** head, int value)
{
    struct Node* newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
    printf("Inserted %d at the beginning\n", value);
}
void insertAtEnd(struct Node** head, int value)
{
    struct Node* newNode = createNode(value);
    if (*head == NULL)
    {
        *head = newNode;
        printf("Inserted %d at the end\n", value);
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    printf("Inserted %d at the end\n", value);
}
void deleteNode(struct Node** head, int value)
{
    if (*head == NULL)
    {
        printf("List is empty, nothing to delete\n");
        return;
    }
    struct Node* temp = *head;
    struct Node* prev = NULL;
    if (temp != NULL && temp->data == value)
    {
        *head = temp->next;
        free(temp);
        printf("Deleted %d from the list\n", value);
        return;
    }
    while (temp != NULL && temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        printf("%d not found in the list\n", value);
        return;
    }
    prev->next = temp->next;
    free(temp);
    printf("Deleted %d from the list\n", value);
}
void display(struct Node* head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    printf("Linked List: ");
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}
void freeList(struct Node** head)
{
    struct Node* temp;
    while (*head != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}

int main()
{
    struct Node* head = NULL;
    insertAtBeginning(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    display(head);
    deleteNode(&head, 20);
    display(head);
    freeList(&head);
    return 0;
}