#define SIZE 10

struct Stack {
    int a[SIZE];
    int top;
};

void init(Stack *);

int isEmpty(Stack *);
int isFull(Stack *);

int printStack(Stack *);

int push(Stack *, int);
int pop(Stack *, int *);
int peek(Stack *, int *);