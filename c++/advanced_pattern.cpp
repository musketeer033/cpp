#include<iostream>
using namespace std;

//pattern no:01

/*int main(){

 int n;
 int m;
 cout<<"enter the value of n : ";
 cin>>n;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=(n+1)-i;j++){
        cout<<j;
    }
    cout<<endl;
 }   

}*/

//pattern no:02
/*int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        if ((i+j)%2==0){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
            
        }
        cout<<endl;


        
    }
    cout<<endl;
 }  */

 //pattern no:03

 /*int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=(n-i);j++){
        cout<<" ";
            
        }

    for(int j=1;j<=i;j++){
        cout<<j<<" ";
    }
    cout<<endl;    
    }
    
 }*/

 
 //pattern no: 04
 /*int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
    int j;
    for(j=1;j<=(n-i);j++){
        cout<<"  ";
            
    }
    int k=i;
    for(;j<=n;j++){
        cout<<k--<<" ";
    }
    k=2;
    for(;j<=n+i-1;j++){
        cout<<k++<<" ";
    }
    cout<<endl;

        
 }
 }*/

 //pattern no: 05


 int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=n;j++){
            cout<<"*"<<" ";
        }
        for(int j=2;j<=n+i-1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;

    }
 }







