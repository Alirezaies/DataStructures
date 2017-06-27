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
    s.SearchByID(2);
    s.SearchByData(5);
    s.DeleteByIndex(0);
    s.Traverse();
    s.DeleteByIndex(3);
    s.Traverse();

    return 0;
}
