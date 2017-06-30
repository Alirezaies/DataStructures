#include "../include/BTree.h"
#include<iostream>
#include<stdexcept>
#include <cstddef>

using namespace std;

BTree::BTree(){
    root = NULL;
    depth = 0;
}

BTree::~BTree(){
    delete root;
}
