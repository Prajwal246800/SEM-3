#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100

struct Node {
    int data;
    struct Node* next;
};

struct Graph {
    struct Node* adjacencyList[MAX_NODES];
    int visited[MAX_NODES];
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Graph* createGraph() {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    int i;
    for (i = 0; i < MAX_NODES; ++i) {
        graph->adjacencyList[i] = NULL;
        graph->visited[i] = 0;
    }
    return graph;
}

void addEdge(struct Graph* graph, int src, int dest) {
    // Add edge from src to dest
    struct Node* newNode = createNode(dest);
    newNode->next = graph->adjacencyList[src];
    graph->adjacencyList[src] = newNode;

    // For undirected graph, add edge from dest to src as well
    newNode = createNode(src);
    newNode->next = graph->adjacencyList[dest];
    graph->adjacencyList[dest] = newNode;
}




















void DFS(struct Graph* graph, int vertex)
{
    struct Node* adjList = graph->adjacencyList[vertex];
    struct Node* temp = adjList;

    graph->visited[vertex] = 1;
    printf("Visited node: %d\n", vertex);

    while (temp != NULL)
    {
        int connectedVertex = temp->data;
        if (graph->visited[connectedVertex] == 0)
        {
            DFS(graph, connectedVertex);
        }
        temp = temp->next;
    }
}


// 0 -> 1 -> 2
// 1 -> 0 -> 2
// 2 -> 0 -> 1 -> 3
// 3 -> 2 -> 3


















int main() {
    struct Graph* graph = createGraph();

    // Add edges to the graph
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 3);

    printf("Depth-First Traversal starting from vertex 0:\n");
    DFS(graph, 0);

    return 0;
}
