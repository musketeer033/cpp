#include<stdio.h>

int sum(int n){
    if(n==0)
        return 0;
       return sum(n-1)+n; 
        
}
int isum(int n){
    int i;
    int s=0;
    for(i=1;i<=n;i++)
        s=s+i;
        return s;
    
}
int main(){
    int r;
    r=sum(5);
    printf("%d ",r);
}
