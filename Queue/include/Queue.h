#ifndef QUEUE_H
#define QUEUE_H

typedef int type;

struct node{
    type Data;
    int ID;
    node *next;
    node *prev;
};

class Queue{
    public:
        Queue();
        ~Queue();
        void Push(type data);
        void Pop();
        void Traverse();
        void SearchByID(int ID);
        void SearchByData(type info);
        bool isEmpty();
        int getMsize();

    private:
        node *first; //Bottom
        node *last; //Top

        void Append(type Data);
        void SortID();

        bool underflow = true;
        int mSize;
};
#endif
