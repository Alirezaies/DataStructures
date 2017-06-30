#include "include/LinkedList.h"
#include <iostream>

using namespace std;

int main() {

    linkedlist s;

    s.Append(3);
    s.Append(7);
    s.Append(0);
    s.Append(9);
    s.Append(5);
    s.Traverse();
    cout<<"============"<<endl;
    s.DeleteByIndex(3);
    s.Traverse();
    cout<<"============"<<endl;
    s.Insert(14, 1);
    s.Insert(77, 3);
    s.Insert(19, 4);
    s.Traverse();
    cout<<"============"<<endl;
    s.DeleteByIndex(2);
    s.Traverse();
    cout<<"============"<<endl;


    return 0;
}
