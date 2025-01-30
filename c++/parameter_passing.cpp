#include<iostream>
#include<stdio.h>
using namespace std;

int swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    return x;
}


int main(){
    int a=10,b=20,c;
    swap(a,b);
    cout<<a<<endl<<b;
    
}
//NOTE: This is pass by value method,here the actual parameters are not manipulated

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
   
}

int main(){
    int a=10,b=20,c;
    swap(&a,&b);
    cout<<a<<endl<<b;
    
}
//NOTE: This is pass by address method,here the actual parameters are manipulated

int swap(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    return x;
}

int main(){
    int a=10,b=20,c;
    swap(a,b);
    cout<<a<<endl<<b;
    
}
//NOTE: This is pass by reference method,here the actual parameters are manipulated