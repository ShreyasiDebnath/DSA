#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int* arr;
};


int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}

int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}

void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("This Queue is full\n");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
    }
}

int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is empty\n");
    }
    else{
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}
int main()
{
     struct queue q;
    q.size = 400;
    q.f = q.r = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));

    int n;
    printf("No. of vertex: ");
    scanf("%d",&n);
    printf("%d",n);
    int graph[n][n];
    int visited[n];
    memset (graph,0,sizeof(graph));
    memset (visited,0,sizeof(visited));
    int i;
    for(i=0;i<n;i++){
        printf("\nno of Edges connected to %d :",i);
        int e;
        scanf("%d",&e);
        int j;
        for(j=0;j<e;j++){
           printf(" \nEdge connected to %d :",i);
           int ed;
           scanf("%d",&ed);
           graph[i][ed]=1;
        }
    }printf("Source node: ");
    scanf("%d",&i);
     printf("%d", i);
    visited[i] = 1;
    enqueue(&q, i); // Enqueue i for exploration
    while (!isEmpty(&q))
    {
        int node = dequeue(&q);
        for (int j = 0; j < n; j++)
        {
            if(graph[node][j] ==1 && visited[j] == 0){
                printf("%d", j);
                visited[j] = 1;
                enqueue(&q, j);
            }
        }
    }
    return 0;

}
