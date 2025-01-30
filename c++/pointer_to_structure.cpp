#include <iostream>
#include<stdlib.h>
using namespace std;

struct rectangle {
    int length;
    int breadth;
};

/*int main(){
    int *p;
    p[0]=1; p[1]=2; p[2]=3; p[3]=4; p[4]=5;

    struct rectangle r={5,20};
    r.length=10;
    r.breadth=30;
    cout<<r.length<<endl<<r.breadth<<endl;
}*/

int main(){
    rectangle *p;
    p=new rectangle;
    p->length=10;
    p->breadth=20;

    cout<< p->length<<endl<< p->breadth;
}

// NOTE: that the values of length and breadth are dtored inside the heap memory.
