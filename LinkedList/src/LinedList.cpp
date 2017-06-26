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
    if (isEmpty)
        cout<<"List Is Empty!";

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

void linkedlist::SearchByID(int ID){
    if (isEmpty)
        cout<<"List Is Empty!";

    else{
        node *tmp;
        tmp = first;

        while (tmp->next != NULL) {

            for (int i = 0; i < mSize; i++) {

                if (tmp->ID == ID) {
                    cout<<"Found The Record With The Data Of: "<<tmp->Data;
                    break;
                };
                else
                    tmp = tmp->next;
            }
        }
    }
}

void linkedlist::SearchByData(type info){
    if (isEmpty)
        cout<<"List Is Empty!";

    else{
        node *tmp;
        tmp = first;

        while (tmp->next != NULL) {

            for (int i = 0; i < mSize; i++) {

                if (tmp->Data == info) {
                    cout<<"Found The Record With The ID Of: "<<tmp->ID;
                    break;
                };
                tmp = tmp->next;
            }
        }
    }
}

void linkedlist::DeleteByIndex(int index){
    if(isEmpty)
        cout<<"List Is Empty!";
    else{
        node *tmp, *tmp2;
        tmp = first;

        while(tmp->next != NULL){
            for(int i = 0; i < mSize; i++){
                if (tmp->ID == index-1){
                    tmp2 = tmp->next;
                    tmp->next = tmp->next->next;
                    delete tmp2;
                }

                if (tmp->ID == mSize-1) {
                    tmp->next = NULL;
                    last = tmp;
                }
                tmp->ID -= 1; //Sort The IDs
            }
        }
        tmp = temp->next;
    }
}
