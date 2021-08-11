// 28. Program to list the vertices by traversing the given graph (adjacency list) through depth first traversal DFS

#include<stdio.h>
#include<stdlib.h>

// implementing the queue
struct Node {
    int data;
    struct Node *next;
}*first=NULL, *rear=NULL;

void enqueue(int x){
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node));
    if(t==NULL){
        printf("Queue is FULL\n");
    }
    else{
        t->data=x;
        t->next=NULL;
        if(first==NULL){
            first=rear=t;
        }
        else{
            rear->next=t;
            rear=t;
        }
    }
}

int dequeue(){
    int x=-1;
    struct Node *p;
    if(first==NULL){
        printf("Queue is EMPTY\n");
    }
    else{
        p=first;
        first=first->next;
        x=p->data;
        free(p);
    }
    return x;
}
int isEmpty(){
    return first==NULL;
}

//ending of the queue implimentation

void BFS(int G[][7], int start, int n){
    int i=start,j;
    int visited[7]={0};

    printf("%d ", i);
    visited[i]=1;
    enqueue(i);
    while(!(isEmpty())){
        i=dequeue();
        for(j=1; j<n; j++){
            if(G[i][j]==1 && visited[j]==0){
                printf("%d ", j);
                visited[j]=1;
                enqueue(j);
            }
        }
    }
}

void DFS(int G[][7], int start, int n){
    static int visited[7]={0};
    int j;
    if(visited[start]==0){
        printf("%d ", start);
        visited[start]=1;
        for(j=1; j<n; j++){
            if(G[start][j]==1 && visited[j]==0){
                DFS(G, j, n);
            }
        }
    }
}


int main(){

    int G[7][7]=
    {
        {0,0,0,0,0,0,0},
        {0,0,1,1,0,0,0},
        {0,1,0,0,1,0,0},
        {0,1,0,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0},
        {0,0,0,0,1,0,0},
    };

    // BFS(G, 1,7);
    printf("\n");
    DFS(G, 1, 7);
    return 0;
}