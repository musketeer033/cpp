#include<stdio.h>

int fun(int n){
    if(n>0){
        printf("%d ",n);
        fun(n-1);
        fun(n-1);
    }return 0;
}
int main(){
    int x=3;
    fun(x);
    return 0;
}