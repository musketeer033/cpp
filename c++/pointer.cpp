#include <iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int a[5]={1,2,3,4,5};
    int *p;
    p=a;
    //p[0]
    for(int i=0;i<=4;i++){
        cout<<a[i]<<endl;
    }
    return 0;

    // in this, way we can store the address of the data using pointer.

}

