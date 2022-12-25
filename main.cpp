#include "stack.h"
#include "queue.h"

int main() {
    Queue Q;
    Q = createQueue(Q);
    string masukkan = "3-(1+2)*3/2+1";
    for (int i = 0; i < masukkan.length(); i++){
        enqueue(Q, masukkan[i]);
    }
    printQueue(Q);


    return 0;
}
