#include "include/LinkedList.h"
#include <iostream>

using namespace std;

int main() {

    linkedlist s;

    s.Append(3);
    s.Append(7);
    s.Traverse();
    s.SearchByData(5);
    return 0;
}
