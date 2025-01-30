#include <stdio.h>

struct array{
    int A[10];
    int size;
    int length;
};

int x,index;
void insert(index,x){
    printf("the inserted element is : ");
    
}

void display(struct array arr){
    printf("The elements are : ");
    for(int i=0;i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}

int main(){
    struct array arr={{1,2,3,4,5},20,5};
    display(arr);
    return 0;
}