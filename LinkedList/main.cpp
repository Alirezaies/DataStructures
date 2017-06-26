#include "include/LinkedList.h"
#include <iostream>

using namespace std;

int main() {

    linkedlist s;

    s.Append(3);
    s.Append(7);
    s.Traverse();
    s.DeleteByIndex(1);
    s.Traverse();
    return 0;
}
