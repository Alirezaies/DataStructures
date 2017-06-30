#include "include/LinkedList.h"
#include <iostream>

using namespace std;

int main() {

    Stack s;

    s.Append(3);
    s.Append(7);
    s.Append(0);
    s.Append(9);
    s.Append(5);
    s.Traverse();
    cout<<"============"<<endl;
    s.SearchByID(2);
    s.SearchByData(5);
    s.DeleteByIndex(0);
    s.Traverse();
    cout<<"============"<<endl;
    s.DeleteByIndex(3);
    s.Traverse();
    cout<<"============"<<endl;
    s.insert(29, 1);
    s.Traverse();


    return 0;
}
