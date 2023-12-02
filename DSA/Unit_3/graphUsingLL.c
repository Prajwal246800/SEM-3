#include <stdio.h>
#include <stdlib.h>

struct Node {
    int vertex;
    struct Node* next;
};

struct Node* createNode(int v) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the linked list
void insertNode(struct Node** adjList, int src, int dest) {
    struct Node* newNode = createNode(dest);
    newNode->next = adjList[src];
    adjList[src] = newNode;

    // For undirected graphs, add an edge from dest to src as well
    newNode = createNode(src);
    newNode->next = adjList[dest];
    adjList[dest] = newNode;
}

void deleteEdge(struct Node** adjList, int src, int dest) {
    struct Node* currNode = adjList[src];
    struct Node* prevNode = NULL;

    // Find the node to be deleted
    while (currNode != NULL && currNode->vertex != dest) {
        prevNode = currNode;
        currNode = currNode->next;
    }

    // If the node is found, delete it
    if (currNode != NULL) {
        if (prevNode == NULL) {
            adjList[src] = currNode->next;
        } else {
            prevNode->next = currNode->next;
        }
        free(currNode);
    }

    // Delete the corresponding edge from dest to src as well
    currNode = adjList[dest];
    prevNode = NULL;

    // Find the node to be deleted
    while (currNode != NULL && currNode->vertex != src) {
        prevNode = currNode;
        currNode = currNode->next;
    }

    // If the node is found, delete it
    if (currNode != NULL) {
        if (prevNode == NULL) {
            adjList[dest] = currNode->next;
        } else {
            prevNode->next = currNode->next;
        }
        free(currNode);
    }
}

// Function to initialize the adjacency list
struct Node** initAdjList(int numVertices) {
    struct Node** adjList = malloc(numVertices * sizeof(struct Node*));
    for (int i = 0; i < numVertices; i++) {
        adjList[i] = NULL;
    }
    return adjList;
}

void Display(struct Node **adjList , int numVertices)
{
        for (int i = 0; i < numVertices; i++) {
        struct Node* currNode = adjList[i];
        printf("%d: ", i);
        while (currNode != NULL) {
            printf("%d -> ", currNode->vertex);
            currNode = currNode->next;
        }
        printf("NULL\n");
    }
}

int main() {
    
    int numVertices;
    printf("Enter the number of vertices : ");
    scanf("%d", &numVertices);
    struct Node** adjList = initAdjList(numVertices);
    int i = 0, j = 0;
    printf("Enter All The Edges And Enter -1 -1 for Exit : ");
    while(1)
    {
        printf("Enter The values For i and j : ");
        scanf("%d%d", &i, &j);
        if(i == -1 && j == -1)
            break;
        insertNode(adjList, i, j);
    }
    // deleteEdge(adjList, 0, 1);
    // deleteEdge(adjList, 1, 4);
    // deleteEdge(adjList, 2, 3);

    // Print the adjacency list
    Display(adjList , numVertices);

    // Free the memory
    for (int i = 0; i < numVertices; i++) {
        struct Node* currNode = adjList[i];
        while (currNode != NULL) {
            struct Node* temp = currNode;
            currNode = currNode->next;
            free(temp);
        }
    }
    free(adjList);

    return 0;
}
