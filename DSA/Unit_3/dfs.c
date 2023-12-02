#include<stdio.h>
#define maxnodes 10

void initgraph(int adjmat[][maxnodes],int n)
{
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			adjmat[i][j]=0;
}

void display(int adjmat[][maxnodes],int n)
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%5d",adjmat[i][j]);
		}
		printf("\n");
	}
}

void create_graph(int adjmat[][maxnodes]) 
{
	int i,j;
	while(1)
	{
		printf("Enter All The Edge Details One By One At Last Enter -1 -1 To Proceed\n");
		scanf("%d %d",&i,&j);
		if(i==-1 && j==-1)
			break;
		adjmat[i][j]=1;
	}
} 

void initvisited(int *visited,int n)
{
	for(int i=1;i<=n;i++)
		visited[i]=0;
} 

void dfs(int adjmat[][maxnodes],int s,int n,int *visited)
{
	visited[s]=1;
	printf("\n%d",s);
	for(int i=1;i<=n;i++)
	{
		if(adjmat[s][i]== 1 && visited[i]!=1) 
			dfs(adjmat,i,n,visited);
	} 
}

void bfs(int adjmat[][maxnodes],int s,int n,int *visited)
{
	int q[20],f=0,r=-1,x;
	q[++r]=s;
	visited[s]=1;
	printf("\n%d",s);
	while(f<=r)
	{
		x=q[f++];
		for(int i=1;i<=n;i++)
		{
			if(adjmat[x][i]==1 && visited[i] !=1)
			{
				visited[i]=1;
				printf("\n%d",i);
				q[++r]=i;
			}
		}
	}
}

int strong_conn(int adjmat[][maxnodes],int n,int *visited)
{
	for(int i=1;i<=n;i++)
	{
		initvisited(visited,n);
		dfs(adjmat,i,n,visited);
		for(int j=1;j<=n;j++)
		{
			if(visited[j]==0)
				return 0;
		} 
	} 
	return 1;
} 
/*int weak_conn(int adjmat[][maxnodes],int n,int *visited)
{
	int b[maxnodes][maxnodes]; 
	initgraph(b,n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(adjmat[i][j]==1)
			{
				b[i][j]=1;
				b[j][i]=1;
			}
		}
	} 
	
	initvisited(visited,n);
	dfs(b,1,n,visited);
	for(int i=1;i<=n;i++)
		if(visited[i]==0)
			return 0;
	return 1;
}*/
int weak_conn(int adjmat[][maxnodes],int n,int *visited)
{
	int b[maxnodes][maxnodes];
	initgraph(b,n);
	initvisited(visited,n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(adjmat[i][j]==1)
			{
				b[i][j]=1;
                b[j][i]=1;
			}
		}
	}
		dfs(b,1,n,visited);
		for(int i=1;i<=n;i++)
            if(visited[i]==0)
                return 0;
		return 1;
}

void path_dfs(int adjmat[][maxnodes],int s,int n,int *visited)
{
	visited[s]=1;
	printf("\n%d",s);
	for(int i=1;i<=n;i++)
	{
		if(adjmat[s][i]== 1 && visited[i]!=1) 
			dfs(adjmat,i,n,visited);
	} 
}

int main()
{
    int ch,n,adjmat[maxnodes][maxnodes],visited[maxnodes],source;
    do
    {
        printf("\nEnter   1: Create Graph \n\t2: Display Graph \n\t3: DFS Traversal \n\t4: BFS Traversal \n\t5: Exit Program \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("Enter the number of vertices in the graph");
                    scanf("%d",&n);
                    initgraph(adjmat,n);
                    create_graph(adjmat);
                    break;
            case 2: display(adjmat,n);
                    break;
			case 3: initvisited(visited,n);
                    printf("Enter the source node");
                    for(int i=1;i<=n;i++)
					{
						if(visited[i]==0) 
							dfs(adjmat,i,n,visited);
					} 
                    break;	
			case 4:initvisited(visited,n);
                    printf("Enter the source node");
					scanf("%d",&source);
					bfs(adjmat,source,n,visited);
                    break;	
			case 5: if(strong_conn(adjmat,n,visited)) 
					printf("Graph is strongly connected ");
                    else		    
					{
                        if(weak_conn(adjmat,n,visited))
                            printf("Graph is weakly connected");
                        else
                            printf("Neighter strongly nor weakly connected");
					}
                    break;
        }
    }while(ch!=5);
} 