#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template<typename E>
struct Node{
    E data;
    Node<E> *next;
    Node(E item, Node<E> *ptr=0):data(item), next(ptr){}
};

class LinkedList{
public:
    LinkedList();
    ~LinkedList();
    int Lenght() const {return(mSize);};
    bool isEmpty() const {return(mSize == 0);};
    bool Traverse() const;
    void Append(const T& info);
    const T& getItem(int index) const;
    void removeAt(int index);
    void Clear();
    
private:
    Node<T> *head;
    int mSize;
};
#endif
