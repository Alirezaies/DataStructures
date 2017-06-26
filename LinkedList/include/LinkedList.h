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
        linkedlist(){first = NULL, mSize = 0;}
        void AddFirst(type info);
        void Append(type info);
        bool isEmpty();
        void Traverse();
        void SearchByID(int ID);
        void SearchByData(type info);
        void DeleteByIndex(int index);
        int getMsize();
        // void deleteelement(int);//delet node by value of data
        // void showlist();//print all node in list
        // void search_data(int);//search the linked list by value of data
    private:
        node *first;//stor first node of link
        node *last;//stor last node of link
        int mSize;
};
#endif
