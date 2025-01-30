#include<iostream>
using namespace std;

class rectangle{
    public:
    int length;
    int breadth;

    
    rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    int area(){
        int a=length*breadth;
        cout<<"area="<<a<<endl;
        return a;
    }

    int perimeter(){
        int peri=2*(length+breadth);
        cout<<"perimeter="<<peri<<endl;
        return peri;
    }

    void changelength(int l){
        length=l;
        cout<<length<<endl;
    }
};

int main(){
    rectangle r(10,20);
    r.area();
    r.perimeter();
    r.changelength(30);
    
    return 0;
}