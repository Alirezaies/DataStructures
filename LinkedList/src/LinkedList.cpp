#include "../include/LinkedList.h"
#include<iostream>
#include<stdexcept>
#include <cstddef>

using namespace std;

linkedlist::linkedlist(){
    first = NULL;
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
    if(isEmpty())
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

bool linkedlist::isEmpty(){
    return (mSize == 0);
}

void linkedlist::Traverse(){
    if (isEmpty())
        cout<<"List Is Empty!\n";

    else{
        node *tmp;
        tmp = first;

        while (tmp->next != NULL) {
            for (int i = 0; i <= mSize; i++) {
                cout << "item[" << tmp->ID << "]: " <<tmp->Data<< '\n';
                if(tmp->next == NULL)
                    break;
                tmp = tmp->next;
            }
        }
    }
}

void linkedlist::SearchByID(int ID){
    if (isEmpty())
        cout<<"List Is Empty!\n";

    else{
        node *tmp;
        tmp = first;
        int flag = 0;
        while (tmp->next != NULL) {
            for (int i = 0; i < mSize; i++) {
                if (tmp->ID == ID) {
                    cout<<"Found The First Record With The Data Of: "<<tmp->Data<<"\n";
                    flag = 1;
                    break;
                }
                if(tmp->next == NULL)
                    break;
                else{
                    tmp = tmp->next;
                }
            }

            if (flag == 0) {
                cout<<"No Entry Found!\n";
            }
        }
    }
}

void linkedlist::SearchByData(type info){
    if (isEmpty())
        cout<<"List Is Empty!\n";

    else{
        node *tmp;
        tmp = first;
        int flag = 0;
        while (tmp->next != NULL) {

            for (int i = 0; i < mSize; i++) {

                if (tmp->Data == info) {
                    cout<<"Found The Record With The ID Of: "<<tmp->ID<<endl;
                    flag = 1;
                    break;
                }
                if(tmp->next == NULL)
                    break;
                tmp = tmp->next;
            }
        }
        if (flag == 0) {
            cout<<"No Entry Found."<<endl;
        }
    }
}

void linkedlist::DeleteByIndex(int index){
    if(isEmpty())
        cout<<"List Is Empty!\n";
    else{
        node *tmp, *tmp2;
        tmp = first;

        while (tmp->next != NULL) {
            for (int i = 0; i <= mSize; i++) {
                if (index == last->ID && tmp->ID == index-1) {
                    tmp2 = tmp->next;;
                    tmp->next = NULL;
                    delete tmp2;
                }
                if(tmp->next == NULL)
                    break;
                tmp = tmp->next;
            }
        }
    }
}

int linkedlist::getMsize(){
    return(mSize);
}
