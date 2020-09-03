#include"StackUsingArray.h"
void init(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack* s) {
    if( s->top == -1 ) 
        return 1;
    return 0;
}

int isFull(Stack* s) {
    if( s->top == SIZE - 1 )
        return 1;
    return 0;
}

int push( Stack *s, int data) {
    if(isFull(s))
        return 0;
    s->a[++(s->top)] = data;
    return 1;
} 

int pop(Stack *s, int *item) {
    if(isEmpty(s)) 
        return 0;
    *item = s->a[(s->top)--];
    return 1;
}

int peek(Stack *s, int *item) {
    if(isEmpty(s)) 
        return 0;
    *item = s->a[(s->top)];
    return 1;
}

