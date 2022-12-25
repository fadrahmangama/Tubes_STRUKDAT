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

bool isOperator (char c){
    return (!isalpha(c) && isdigit(c));
}

int Prioritas (char c){
    if ((c == '+') || (c == '-')){
        return 1;
    } else if ((c == '*') || (c == '/')){
        return 2;
    } else if ((c=='^')){
        return 3;
    }
    return 0;
}
string infixToPostfix (string infix){
    int infixSize=infix.size();
    Stack charStack;
    string output="";
    infotype p;
    string bracket,bracket1,bracket12;


    infix = '(' + infix + ')';
    for (int i = 0; i<infixSize;i++){
        if (isalpha(infix[i]) || isdigit(infix[i])){
            output = output + infix[i];
        } else if (infix[i]== '(' ){
            bracket1=')';
            p = '(';
            push(charStack,p);
        } else if (infix[i]==')'){
            while (Top(charStack)!='('){
                output += Top(charStack);
                pop(charStack,p);
            }
            pop(charStack,p);
            bracket1=')';
        } else {
            if (isOperator(Top(charStack))){
                if (infix[i]=='^'){
                    while (Prioritas(infix[i])< Prioritas(Top(charStack))){
                        output+=Top(charStack);
                        pop(charStack,p);
                    }
                } else{
                    while (Prioritas(infix[i])<Prioritas(Top(charStack))){
                        output+=Top(charStack);
                        pop(charStack,p);
                    }
                }
                p=infix[i];
                push(charStack,p);
            }
        }

    }
    while (!isStackEmpty(charStack)){
        output+=Top(charStack);
        pop(charStack,p);
    }
    return output;

}
string infixToPrefix(string infix){
    int size =infix.size();
    string reversedInfix="";
    int bracket;
    string prefix;


    for(int i = size-1;i>=0;i--){
        reversedInfix=reversedInfix+infix[i];
    }

    for(int i = 0; i<size;i++){
        if (infix[i]=='('){
                infix[i]=')';
                bracket='(';
        } else if (infix[i]==')'){
                infix[i]='(';
                bracket=')';
        }
    }

    prefix = infixToPostfix(infix);
    int prefixSize=prefix.size();
    return prefix;


}
