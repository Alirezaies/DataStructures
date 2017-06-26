#include "../include/LinkedList.h"
#include<iostream>
#include<stdexcept>

using namespace std;

void linkedlist::AddFirst(type info){
    if (!isEmpty)
        throw invalid_argument('This Is Not The First Node.')
    else{
        node *tmp = new node;
        tmp->next = NULL;
        tmp->ID = mSize;
        last->next = tmp;
        last = tmp;
        last->Data = info;
        mSize+=1;
    }
}

//add node to list and fill node
void linkedlist::Append(type info)
{
    int data1;
    if(isEmpty)
    {
        //create first node
        node *tmp = new node;
        tmp->next = NULL;
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
        tmp->ID = mSize;
        last->next = tmp;
        last = tmp;
        last->Data = info;
        mSize+=1;
    }
}

void linkedlist::isEmpty(){
    return (mSize == 0);
}

void linkedlist::Traverse(){
    if (isEmpty) {
        cout<<"List Is Empty!";
    }

    else{
        node *tmp;
        tmp = first;

        while (tmp->next != NULL) {

            for (int i = 0; i < mSize; i++) {

                cout << "item[" << i << "]: " <<tmp->Data<< '\n';
                tmp = tmp->next;

            }
        }
    }
}
