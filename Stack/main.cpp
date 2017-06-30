#include "include/Stack.h"
#include <iostream>

using namespace std;

int main() {

    Stack s;

    s.Push(2);
    s.Push(4);
    s.Push(6);
    s.Push(23);
    s.Traverse();
    cout<<"============="<<endl;
    s.Pop();
    s.Pop();
    s.Traverse();
    cout<<"============="<<endl;
    return 0;
}
