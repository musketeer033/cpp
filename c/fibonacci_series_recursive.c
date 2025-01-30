#include<stdio.h>
// This is the iterative version of fibonacci series
//here the timecomplexity is o(n)

int fib(int n){
    int t0=0,t1=1,s=0,i;
    if(n<=1)
        return n;
    
    for(i=2;i<=n;i++){
        s=t0+t1;
        t0=t1;
        t1=s;
    } return s;
   }


//this is the recursive version of fibonacci series
//here the timecomplexity is o(2^n) 

int rfib(int n){
    if(n<=1) return n;
    return rfib(n-2)+rfib(n-1);
   }

//This is the memoised version of fibonacci series(recursive)
//here the timecomplexity is o(n+1) = o(n)
int F[];
int mfib(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2]==-1)
        F[n-2]=mfib(n-2);
        
        if(F[n-1==-1])
        F[n-2]=mfib(n-1);

        return mfib(n-2)+mfib(n-1);
    }
   }

int main(){

    for(int i=0;i<10;i++){
        F[i]=-1;
    }
    int h=5;
    printf("%d \n",mfib(h));
}

