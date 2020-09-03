struct Node {
    Node* next;
    int data;
};
int insertNodeAtBeginning(Node**, Node *);
int insertNodeInTheMiddle(Node **, Node *, int);
int insertNodeAtTheEnd(Node **, Node *);

int searchData(Node *, int);

int deleteElement(Node**, int);
