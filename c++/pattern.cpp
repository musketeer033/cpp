#include<iostream>
using namespace std;

//empty rctangle pattern
/*int main(){
    int n;
    cout<<"input n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if ( i==1||i==n||j==1||j==n){
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        } 
        cout<<endl;  
    }
}*/

//180 degree inverted triangle pattern
/*int main(){
 int n;
    cout<<"input n : ";
    cin>>n;
    int i;
    int j;
    for( i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}*/

//butterfly pattern
/*int main(){
    int n;
    cout<<"input n";
    cin>>n;
    int i;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        
        int space=2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";

        }
      
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;

    }  


for(int i=n;i>=1;i--){
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        
        int space=2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";

        }
      
        for (int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;

    } 
} */

/*int main(){
    int n;
    cout<<"enter the valus of n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(int j=1;j<=n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
}*/
