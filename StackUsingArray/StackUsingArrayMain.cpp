#include<iostream>
#include"StackUsingArray.cpp"

using namespace std;

int printStack(Stack *s) {
    for(int i=0;i<=s->top;i++) {
        cout<<s->a[i]<<" ";
    }
    return 1;
}

int main() {
    Stack *s = new Stack;
    init(s);
    for(int i = 0; i < 10; i++) {
        push(s, i);
    }
    printStack(s);
    int item;
    pop(s, &item);
    cout<<"\nPopped: "<<item;
    printStack(s);
}