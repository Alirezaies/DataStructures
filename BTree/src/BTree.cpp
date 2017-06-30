#include "../include/BTree.h"
#include<iostream>
#include<stdexcept>
#include <cstddef>

using namespace std;

BTree::BTree(){
    root = NULL;
}

BTree::~BTree(){
    delete root;
}
