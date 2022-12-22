#include "TUBES.h"

int main() {
    Stack S;
    CreateEmpty(&S);
    
    cout << "Masukkan ekspresi aritmatika : ";
    string masukkan = "1+2-3";
    cout << masukkan[1] << endl;
    // print stack
    PrintStack(S);

    return 0;
}