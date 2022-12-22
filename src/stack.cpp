#include "stack.h"

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