#include <stdio.h>
#define MAXNODES 20

void initgraph(int a[][MAXNODES], int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] = 0;
        }
    }
}

void creategraph(int a[][MAXNODES]) {
    int i, j;
    while (1) {
        printf("\nEnter the values for i and j: ");
        scanf("%d %d", &i, &j);
        if (i == -1 && j == -1)
            break;
        a[i][j] = 1;
        a[j][i] = 1;
    }
}

void display(int a[][MAXNODES], int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}

void init_visited(int visited[], int n) {
    for (int i = 1; i <= n; i++) {
        visited[i] = 0;
    }
}

void DFS(int adjmat[][MAXNODES], int s, int n, int *visited) {
    visited[s] = 1;
    printf("\n%d", s);
    for (int i = 1; i <= n; i++) {
        if (adjmat[s][i] == 1 && visited[i] != 1) {
            DFS(adjmat, i, n, visited);
        }
    }
}

void BFS(int adjmat[][MAXNODES], int s, int n, int *visited) {
    int q[20], r = -1, f = 0, x;
    q[++r] = s;
    visited[s] = 1;
    printf("\n%5d", s);
    while (f <= r) {
        x = q[f++];
        for (int i = 1; i <= n; i++) {
            if (adjmat[x][i] == 1 && visited[i] != 1) {
                visited[i] = 1;
                q[++r] = i;
                printf("\n%5d", i);
            }
        }
    }
}

int strongly_conn(int adjmat[][MAXNODES], int n, int *visited)
{
    // int visited[20];
    for(int i=1;i<=n;i++)
    {
        int i;
        init_visited(visited, n);
        DFS(adjmat , i , n , visited);
        for(int j=1;j<=n;j++)
            if(visited[j]==0)
                return 0;
    }
}



int main() {
    int n, adj[MAXNODES][MAXNODES];
    int ch;
    int visited[MAXNODES], source;
    int count = 0;
    do {
        printf("\n1.CreateGraph  2.Display  3.DFS Traversal  4.BFS Traversal  5.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("\nEnter the no. of nodes: ");
                scanf("%d", &n);
                initgraph(adj, n);
                creategraph(adj);
                break; 
            case 2:
                display(adj, n);
                break;
            case 3:
                init_visited(visited, n);
                printf("\nEnter the source node: ");
                scanf("%d", &source);
                DFS(adj, source, n, visited);
                for (int i = 1; i <= n; i++) {
                    if (visited[i] != 1) {
                        count++;
                        DFS(adj, i, n, visited); 
                    }
                }
                break;
            case 4:
                init_visited(visited, n);
                printf("\nEnter the source node: ");
                scanf("%d", &source);
                BFS(adj, source, n, visited);
                break;
            case 5:
                if(strongly_conn(adj,n,visited))
                    printf("Strongly conected graph");
                else
                {
                    printf("Not strongly connected graph");
                }
                break;
        }
    } while (ch != 5);
    printf("\nNumber of nodes visited is %d", count + 1);
    return 0;
}