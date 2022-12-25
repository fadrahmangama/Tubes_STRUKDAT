#include <iostream>
#include <cctype>
using namespace std;

const int maxElm = 100;

typedef char infotype;
typedef int address;

struct Stack{
    infotype T[maxElm];
    address TOP;
};

#define Top(S) (S).TOP
#define InfoTop(S) (S).T[(S).TOP]
#define Elmt(S,i) (S).T[(i)]

bool isStackEmpty(Stack S);
bool isStackFull(Stack S);
Stack createStack(Stack S);
void push(Stack &S, infotype p);
void pop(Stack &S, infotype &p);
void printStack(Stack S);
bool isOperator (char c);
int Prioritas (char c);
string infixToPostfix (string infix);
string infixToPrefix(string infix);



