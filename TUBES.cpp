#include "TUBES.h"

bool isStackEmpty(Stack S){
    return (Top(S) == 0);
}

bool isStackFull(Stack S){
    return (Top(S) == maxElm);
}

Stack createStack(Stack S){
    Top(S) = 0;
    return S;
}

void push(Stack &S, infotype p){
    if (isStackFull(S)){
        cout << "Stack penuh" << endl;
    } else {
        Top(S)++;
        InfoTop(S) = p;
    }
}

void pop(Stack &S, infotype &p){
    if (isStackEmpty(S)){
        cout << "Stack kosong" << endl;
    } else {
        p = InfoTop(S);
        Top(S)--;
    }
}

void printStack(Stack S){
    if (isStackEmpty(S)){
        cout << "Stack kosong" << endl;
    } else {
        for (int i = Top(S); i >= 1; i--){
            cout << Elmt(S, i) << " ";
        }
        cout << endl;
    }
}

Queue createQueue(Queue Q){
    Head(Q) = NULL;
    Tail(Q) = NULL;
    return Q;
}

addressQ allocate(infotypeQ p){
    addressQ Q = new elmQueue;
    Info(Q) = p;
    Next(Q) = NULL;
    return Q;
}

void enqueue(Queue &Q, infotypeQ p){
    addressQ Qnew = allocate(p);
    if (Head(Q) == NULL){
        Head(Q) = Qnew;
        Tail(Q) = Qnew;
    } else {
        Next(Tail(Q)) = Qnew;
        Tail(Q) = Qnew;
    }
}

void dequeue(Queue &Q, infotypeQ &p){
    if (Head(Q) == NULL){
        cout << "Queue kosong" << endl;
    } else {
        addressQ Qdel = Head(Q);
        p = Info(Qdel);
        Head(Q) = Next(Qdel);
        delete Qdel;
    }
}

bool isQueueEmptyQ(Queue Q){
    return (Head(Q) == NULL);
}

void printQueue(Queue Q){
    if (isQueueEmptyQ(Q)){
        cout << "Queue kosong" << endl;
    } else {
        addressQ Qprint = Head(Q);
        while (Qprint != NULL){
            cout << Info(Qprint) << " ";
            Qprint = Next(Qprint);
        }
        cout << endl;
    }
}
