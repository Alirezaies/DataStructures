#include "include/Queue.h"
#include <iostream>

using namespace std;

int main() {
    Queue q;

    q.Push(2);
    q.Push(34);
    q.Push(6);
    q.Push(20);
    q.Traverse();
    cout<<"============"<<endl;
    q.Pop();
    q.Pop();
    q.Traverse();
    cout<<"============"<<endl;
    return 0;
}
