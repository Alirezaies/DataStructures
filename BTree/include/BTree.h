#ifndef BTREE_H
#define BTREE_H

typedef int type;

struct node{
    type Data;
    node *parent;
    node *left;
    node *right;
};

class BTree{
    public:
        BTree();
        ~BTree();


    private:

        node *root;
        int mSize;
};
#endif
