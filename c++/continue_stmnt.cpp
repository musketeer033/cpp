#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"enter the number";
    cin>>a;
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            cout<<"number is not prime";
            break;
        }
        
    }
     if(i==a)
        {
            cout<<"number is prime";
        }
}