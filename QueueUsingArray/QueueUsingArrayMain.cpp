#include<iostream>
#include"QueueUsingArray.cpp"

using namespace std;

void printQueue(Queue *q) {
    if(isEmpty(q))
        return;
    for(int i = q->front; i <= q->rear; i++) {
        cout<<q->a[i]<<" ";
    }
}

int main() {
    Queue *q = new Queue;
    init(q);
    for(int i = 0; i<5;i++) {
        enQueue(q, i+1);
    }
    printQueue(q);
    int item;
    deQueue(q, &item);
    cout<<"\nDequeue: "<<item<<"\n";
    printQueue(q);
    peekRear(q, &item);
    cout<<"\nPeekrear: "<<item<<"\n";
    peekFront(q, &item);
    cout<<"\nPeekfront: "<<item<<"\n";
    return 0;
}