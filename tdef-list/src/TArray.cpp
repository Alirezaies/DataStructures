#include "../include/TArray.h"

#include <iostream>
#include <stdexcept>

using namespace std;

TArray::TArray(int s){
    if (s <= 0)
        s = 100;
    else
        mSize = s;

    ar = new type[mSize];
    cp = 0;
}

TArray::~TArray(){
    delete[] ar;
    ar = 0;
}

int TArray::Lenght(){
    return (cp);
}

int TArray::Size(){
    return (mSize);
}

void TArray::Traverse(){
    for(int i = 0; i < cp; i++)
        cout<<ar[i]<<endl;
}

bool TArray::append(type info){
    if(cp >= mSize)
        return 1;
    ar[cp] = info;
    cp++;

    return (true);
}

int TArray::add(type info, int index){
    if(cp >= mSize)
        return (1);

    if(index < 0 || index >cp)
        return (2);

    for (int i = cp; i > index; i--)
        ar[i] = ar[i-1];

    ar[index] = info;
    cp++;
}

int TArray::removeAt(int index){
    if(cp <= 0)
        return(2);

    if (index < 0 || index > cp)
        return (3);

    for(int i = index; i< cp; i++)
        ar[i] = ar[i+1];
    cp--;
    return (0);
}

type TArray::getItem(int index){
    if (index < 0 || index > cp)
        throw invalid_argument("Error!");

    return (ar[index]);
}
