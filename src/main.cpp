#include "TUBES.h"

int main() {
    Stack S;
    S = createStack(S);
    push(S, 'A');
    push(S, 'B');
    push(S, 'C');
    push(S, 'D');

    printStack(S);

    return 0;
}