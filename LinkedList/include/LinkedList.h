#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef int type;
//node class
struct node{
    type Data;
    int ID; //Help Us For Searching By Index;
    node *next;
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
        void SortID();
        void insert(type record, int index);
        bool isEmpty();
        int getMsize();

    private:
        node *first;//store first node of link
        node *last;//store last node of link
        int mSize;
};
#endif
