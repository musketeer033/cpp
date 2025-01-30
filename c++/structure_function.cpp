#include <iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

void initialize(struct rectangle *r,int l,int b){
    r->length=l;
    r->breadth=b;
}

int area(struct rectangle r){
     cout<<r.length*r.breadth<<endl;
     return 0;
}

int perimeter(struct rectangle r){
    int p;
    p=2*(length+breadth);
    cout<<p<<endl;
}

int changelength(struct rectangle *r,int l){
    r->length=l;
    return 0;
    
}

int main(){
    struct rectangle r;
    initialize(&r,10,5);
    area(r);
    int a=area(r);
    int peri=perimeter(r);
    changelength(&r,20);
}