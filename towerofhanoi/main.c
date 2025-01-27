#include <stdio.h>
#include <stdlib.h>
#define QUEUE_SIZE 100

typedef struct {
    char items[QUEUE_SIZE];
    int front, rear;
} Queue;

void init(Queue *pq) {
    pq->front = 0;
    pq->rear = -1;
}

int is_empty(Queue *pq) {
    return pq->rear < pq->front;
}

int is_full(Queue *pq) {
    return pq->rear == QUEUE_SIZE - 1;
}

void insert(Queue *pq, int item) {
    if (is_full(pq)) {
        printf("Overflow\n");
    } else {
        pq->rear++;
        pq->items[pq->rear] = item;
    }
}

int remov(Queue *pq) {
    if (is_empty(pq)) {
        printf("Underflow\n");
        return -999;
    } else {
        int item = pq->items[0];
        for (int i = 0; i < pq->rear; i++) {
            pq->items[i] = pq->items[i + 1];
        }
        pq->rear--;
        return item;
    }
}

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod,)
{
    while(is_empty(Queue *pq)){
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n-1, from_rod, aux_rod, to_rod);
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);


}
}

int main()
{
    int n = 4;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
int main()
{
 Queue q;
 init(&q);


    return 0;
}
