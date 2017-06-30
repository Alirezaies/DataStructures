#include "../include/Queue.h"
#include<iostream>
#include<stdexcept>
#include <cstddef>

using namespace std;

Queue::Queue(){
    first = NULL;
    last = NULL;
    mSize = 0;
}
Queue::~Queue(){
    mSize = 0;
    last = 0;
    first = 0;
    delete first;
    delete last;
}

void Queue::Push(type data){
    Append(data);
}

void Queue::Pop(){
    node *tmp;
    tmp = first;
    first = first->next;
    first->prev = NULL;
    delete tmp;
    mSize--;
    SortID();
}

void Queue::Append(type info){
    int data1;
    if(isEmpty())
    {
        //create first node
        node *tmp = new node;
        tmp->next = NULL;
        tmp->prev = NULL;
        tmp->ID = mSize;
        first=tmp;
        first->Data = info;
        last=first;
        mSize+=1;
    }
    else
    {
        //create other node
        node *tmp = new node;
        tmp->next = NULL;
        tmp->prev = last;
        tmp->ID = mSize;
        last->next = tmp;
        last = tmp;
        last->Data = info;
        mSize+=1;

    }
}

bool Queue::isEmpty(){
    return (mSize == 0);
}

void Queue::Traverse(){
    node *p;
    p = first;
    if (isEmpty())
        cout<<"List Is Empty!\n";

    else{
        for (int i = 0; i < mSize; i++) {
            cout<<"Item ["<<i<<"]: "<<p->Data<<endl;
            p = p->next;
        }
    }
}

void Queue::SearchByID(int ID){
    int flag;
    node *p;
    p = first;
    if (isEmpty())
        cout<<"List Is Empty!\n";

    else{
        for (int i = 0; i < mSize; i++) {
            if(p->ID == ID){
                cout<<"Found The Record With Data Of: "<<p->Data<<endl;
                flag = 1;
                break;
            }

            p = p->next;
        }

        if(flag == 0)
            cout<<"No Entry Found!"<<endl;
    }
}

void Queue::SearchByData(type info){
    node *p;
    p = first;
    if (isEmpty())
        cout<<"List Is Empty!\n";

    else{
        for (int i = 0; i < mSize; i++) {
            if (p->Data == info) {
                cout<<"Found The Record By ID Of: "<<p->ID<<endl;
            }
            p = p->next;
        }
    }
}

int Queue::getMsize(){
    return(mSize);
}

void Queue::SortID(){
    node *p;
    p = first;
    if (isEmpty())
        cout<<"List Is Empty!\n";

    else{
        for (int i = 0; i < mSize; i++) {
            p->ID = i;
            p = p->next;
        }
    }
}
