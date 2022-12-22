#include <iostream>
using namespace std;

const int maxEl = 100;

typedef int infotype;
typedef int address;

typedef struct {
    infotype T[maxEl];
    address TOP;
} Stack;

#define Top(S) (S).TOP
#define InfoTop(S) (S).T[(S).TOP]
#define Info(P) (P).T[(P)]
#define Elmt(S,i) (S).T[(i)]

void CreateEmpty(Stack *S);
bool IsEmpty(Stack S);
bool IsFull(Stack S);
void Push(Stack *S, infotype X);
void Pop(Stack *S, infotype *X);
void PrintStack(Stack S);



