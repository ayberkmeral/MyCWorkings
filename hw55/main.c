#include <stdio.h>
#include <stdlib.h>
#define QUEUE_SIZE 100
typedef struct{
char items[QUEUE_SIZE];
int front,rear;

}Queue;

void init(Queue *pq){

pq->front=0;
pq->rear=-1;
return;
}

int is_empty(Queue *pq){

if(pq->rear < pq->front)
    return 1;
else return 0;
}
int is_full(Queue *pq){
if(pq->rear==QUEUE_SIZE -1)
    return 1;
else return 0;
}
void insert(Queue *pq,int item){
if(is_full(pq)){

    printf("ovwerflow\n");
}
    pq->rear++;
    pq->items[pq->rear]=item;
}
int remove(Queue *pq){
if(is_empty(pq)){
    printf("underflow");
    return -999;
}
else{
    int i,item=pq->items[0];
    for(i=0;i<pq->rear;i++){
        pq->items[i]=pq->items[i+1];
        pq->rear--;
        return item;
    }
}
}

int main()
{
   Queue q;
   init(&q);
    Queue q;
    initQueue(&q);

    insert(&q, 10);
    insert(&q, 20);
    insert(&q, 30);

    printf("Dequeued: %d\n", remove(&q));
    printf("Dequeued: %d\n", remove(&q));

    return 0;
}
