#include"QueueUsingArray.h"

void init(Queue* q) {
    q->front = q->rear = -1;
}

int isEmpty(Queue* q) {
    if(q->rear == -1) 
        return 1;
    return 0;
}

int isFull(Queue* q) {
    if(q->rear == SIZE - 1 && q->front == 0) 
        return 1;
    return 0;
}

int enQueue(Queue* q, int data) {
    if(isFull(q))
        return 0;
    if(isEmpty(q)) {
        q->front++;
        q->rear++;
        q->a[q->rear] = data;
    } else {
        q->a[++(q->rear)] = data;
    }
    return 1;
}

int deQueue(Queue* q, int *data) {
    if(isEmpty(q))
        return 0;
    *data = q->a[q->front];
    if(q->front == q->rear) {
        q->rear = q->front = -1;
        return 1;
    }
    for(int i = q->front; i < q->rear; i++) {
        q->a[i] = q->a[i + 1];
    }
    q->rear--;
    return 1;
}

int peekFront(Queue* q, int* data) {
    if(isEmpty(q))
        return 0;
    *data = q->a[q->front];
    return 1;
}

int peekRear(Queue* q, int* data) {
    if(isEmpty(q))
        return 0;
    *data = q->a[q->rear];
    return 1;
}