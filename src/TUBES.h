#include <iostream>
using namespace std;

// ADT Stack
const int maxElm = 100;

typedef char infotype;
typedef int address;

struct Stack{
    infotype T[maxElm];
    address TOP;
};

#define Top(S) (S).TOP
#define InfoTop(S) (S).T[(S).TOP]
#define Info(P) (P).T[(P)]
#define Elmt(S,i) (S).T[(i)]

bool isStackEmpty(Stack S);
bool isStackFull(Stack S);
Stack createStack(Stack S);
void push(Stack &S, infotype p);
void pop(Stack &S, infotype &p);
void printStack(Stack S);

//ADT Queue
typedef char infotypeQ;
typedef struct elmQueue *addressQ;

struct elmQueue{
    infotypeQ info;
    addressQ next;
};

struct Queue{
    addressQ Head;
    addressQ Tail;
};

#define Head(Q) (Q).Head
#define Tail(Q) (Q).Tail
#define InfoHead(Q) (Q).Head->info
#define InfoTail(Q) (Q).Tail->info
#define Next(P) (P)->next
#define Info(P) (P)->info

Queue createQueue(Queue Q);
addressQ allocate(infotypeQ p);
void enqueue(Queue &Q, infotypeQ p);
void dequeue(Queue &Q, infotypeQ &p);
bool isQueueEmptyQ(Queue Q);
void printQueue(Queue Q);






