#include "TUBES.h"

void CreateEmpty(Stack *S) {
    Top(*S) = -1;
}

bool IsEmpty(Stack S) {
    return (Top(S) == -1);
}

bool IsFull(Stack S) {
    return (Top(S) == maxEl-1);
}

void Push(Stack *S, infotype X) {
    if (IsFull(*S)) {
        cout << "Stack penuh" << endl;
    } else {
        Top(*S)++;
        InfoTop(*S) = X;
    }
}

void Pop(Stack *S, infotype *X) {
    if (IsEmpty(*S)) {
        cout << "Stack kosong" << endl;
    } else {
        *X = InfoTop(*S);
        Top(*S)--;
    }
}

void PrintStack(Stack S) {
    if (IsEmpty(S)) {
        cout << "Stack kosong" << endl;
    } else {
        for (int i = Top(S); i >= 0; i--) {
            cout << InfoTop(S) << endl;
        }
    }
}