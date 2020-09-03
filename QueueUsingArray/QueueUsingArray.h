#define SIZE 10

struct Queue {
    int a[SIZE];
    int front, rear;
};

void init(Queue *);

int isFull(Queue *);
int isEmpty(Queue *);

int enQueue(Queue *, int);
int deQueue(Queue *, int*);
int peekFront(Queue *, int*);
int peekRear(Queue *, int*);

