#include "stack.h"
#include <iostream>
using namespace std;

int main() {
    Stack S;
    
    cout << "== Hello world! ==" << endl;
    createStack(S);
    
    push(S, 4);
    push(S, 7);
    push(S, 2);
    push(S, 9);
    push(S, 6);
    push(S, 0);
    push(S, 1);
    
    printInfo(S);
    cout << "== Balik stack ==" << endl;
    balikStack(S);
    printInfo(S);
    
    return 0;
}