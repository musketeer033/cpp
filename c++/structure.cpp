#include<iostream>
#include<stdio.h>
using namespace std;

struct rectangle {
    int length;
    int breadth;
};

int main(){
    struct rectangle r={5,6};
    
    printf("%d\n",r.length);
    printf("%d\n",r.breadth);

    return 0;
}