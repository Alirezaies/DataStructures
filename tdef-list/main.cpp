#include "include/TArray.h"
#include <iostream>

using namespace std;

int main(){

    TArray s(10);
    s.append('C');
    s.append('F');
    s.append('H');
    s.Traverse();

    cout<<"==========="<<endl;
    cout<<"Item 0: "<<s.getItem(0)<<endl;
    cout<<"==========="<<endl;

    s.add('K', 0);
    s.add('K', 2);
    s.Traverse();
    
    return 0;
}
