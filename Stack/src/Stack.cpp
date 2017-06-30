#include "../include/Stack.h"
#include<iostream>
#include<stdexcept>
#include <cstddef>

using namespace std;

Stack::Stack(){
    first = NULL;
    last = NULL;
    mSize = 0;
}
Stack::~Stack(){
    mSize = 0;
    last = 0;
    first = 0;
    delete first;
    delete last;
}

void Stack::Push(type data){
    Append(data);
}

void Stack::Pop(){
    node *tmp;
    tmp = last;
    last = last->prev;
    mSize--;
    delete tmp;
}

void Stack::Append(type info){
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
bool Stack::isEmpty(){
    return (mSize == 0);
}

void Stack::Traverse(){
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

void Stack::SearchByID(int ID){
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

void Stack::SearchByData(type info){
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

int Stack::getMsize(){
    return(mSize);
}

void Stack::SortID(){
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
