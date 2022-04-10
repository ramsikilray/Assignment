#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Graph
{
	int V;
	int E;
	int **Adj;
};
struct Graph* createGraph(int v,int e)
{
	int i,j,k;
	struct Graph *G;
	G=(struct Graph*)malloc(sizeof(struct Graph));
	G->V=v;
	G->E=e;
	G->Adj=(int**)malloc(sizeof(int)*(G->V));
	
	for(i=0;i<v;i++){
		*(G->Adj+i)=(int*)malloc(sizeof(int)*(G->V));
		for(j=0;j<v;j++)
			G->Adj[i][j]=0;
	}
	for(k=1;k<=e;k++)
	{
		printf("Enter vertex numbers connected by this edge:");
		scanf("%d%d",&i,&j);
		G->Adj[i-1][j-1]=1;
		G->Adj[j-1][i-1]=1;
	}
	return G;
}
void printMatrix(struct Graph *G)
{
	int i,j;
	printf("\n");
	for(i=0;i<G->V;i++){
		for(j=0;j<G->V;j++)
			printf("%d ",G->Adj[i][j]);
		printf("\n");
	}
}
main()
{
	struct Graph *G;
	G = createGraph(4,4);
	printMatrix(G);
	getch();
}
