#include "../include/LinkedList.h"
#include<iostream>
#include<stdexcept>
#include <cstddef>

using namespace std;

linkedlist::linkedlist(){
    first = NULL;
    last = NULL;
    mSize = 0;
}
linkedlist::~linkedlist(){
    mSize = 0;
    last = 0;
    first = 0;
    delete first;
    delete last;
}

void linkedlist::AddFirst(type info){
    if (!isEmpty())
        throw invalid_argument("This Is Not The First Node.\n");

    else{
        node *tmp = new node;
        tmp->next = NULL;
        tmp->prev = NULL;
        tmp->ID = mSize;
        last->next = tmp;
        last = tmp;
        last->Data = info;
        mSize+=1;
    }
}

void linkedlist::Append(type info){
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

bool linkedlist::isEmpty(){
    return (mSize == 0);
}

void linkedlist::Traverse(){
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

void linkedlist::SearchByID(int ID){
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

void linkedlist::SearchByData(type info){
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

void linkedlist::DeleteByIndex(int index){ //TODO
    if (index <0 || index > mSize) {
        throw invalid_argument("Out Of Range");
    }

    node *tmp, *tmp2;
    tmp = tmp2 = first;

    if (index == 0) {
        first = first->next;
        first->prev = NULL;
        mSize--;
        SortID();
    }

    else{
        for (int i = 0; i < mSize; i++) {
            if (i == index-1) {
                tmp2 = tmp->next;
                tmp->next = tmp->next->next;
                tmp->next->prev = tmp;
                tmp2 = 0;
                delete tmp2;
                mSize--;
                break;
            }
            tmp = tmp->next;
        }
        SortID();
    }
}

int linkedlist::getMsize(){
    return(mSize);
}

void linkedlist::SortID(){
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

void linkedlist::insert(type record, int index){ //TODO
    if (index <0 || index > mSize) {
        throw invalid_argument("Out Of Range!");
    }

    if (isEmpty()) {
        AddFirst(record);
    }

    if (index == mSize) {
        Append(record);
    }

    else{
        node *p;
        node *newRecord = new node;
        p = first;
        newRecord->Data = record;
        newRecord->ID = -1;

        for (int i = 0; i < mSize; i++) {
            if (i == mSize-1) {
                newRecord->next = p->next;
                mSize++;
                p->next = newRecord;
                break;
            }

            p = p->next;
        }

        SortID();
    }
}
