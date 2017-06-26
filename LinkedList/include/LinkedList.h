#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include<cstddef>

typedef int type;
//node class
struct node{
    type Data;
    int ID; //Help Us For Searching By Index;
    node *next;
    // friend class linkedlist;
};

//linked list class
class linkedlist{
    public:
        linkedlist();
        ~linkedlist();
        void AddFirst(type info);
        void Append(type info);
        void Traverse();
        void SearchByID(int ID);
        void SearchByData(type info);
        void DeleteByIndex(int index);
        bool isEmpty();
        int getMsize();

    private:
        node *first;//stor first node of link
        node *last;//stor last node of link
        int mSize;
};
#endif
