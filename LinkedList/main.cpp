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
    
    return 0;
}
