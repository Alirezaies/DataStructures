#ifndef TARRAY_H
#define TARRAY_H

typedef char type;

class TArray{
public:
    TArray(int s);
    ~TArray();
    int Lenght();
    int Size();
    void Traverse(void);
    bool append(type info);
    int add(type info, int index);
    int removeAt(int index);
    type getItem(int index);

private:
    type *ar;
    int mSize;
    int cp;
};

#endif
