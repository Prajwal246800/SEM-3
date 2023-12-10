#include <stdio.h>
#include <stdlib.h>

#define MAX_NODES 100
#define QUEUE_SIZE 100

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























void BFS(struct Graph* graph, int startVertex)
{
    int queue[QUEUE_SIZE];
    int front = -1, rear = -1;

    queue[++rear] = startVertex;
    graph->visited[startVertex] = 1;

    while (front != rear)
    {
        int currentVertex = queue[++front];
        printf("Visited node: %d\n", currentVertex);

        struct Node* temp = graph->adjacencyList[currentVertex];
        while (temp != NULL)
        {
            int adjVertex = temp->data;
            if (graph->visited[adjVertex] == 0)
            {
                queue[++rear] = adjVertex;
                graph->visited[adjVertex] = 1;
            }
            temp = temp->next;
        }
    }
}


// 0: 1 -> 2
// 1: 0 -> 2
// 2: 0 -> 1 -> 3
// 3: 3
























int main() {
    struct Graph* graph = createGraph();

    // Add edges to the graph
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 3);

    printf("Breadth-First Traversal starting from vertex 0:\n");
    BFS(graph, 0);

    return 0;
}
