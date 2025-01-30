#include <iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int *p;
    //p=(int *)malloc(5*sizeof(int));    //1st method to use malloc function in c
    p=new int[5];                      //2n method to use maloc function in c++
    p[0]=1; p[1]=2; p[2]=3; p[3]=4; p[4]=5;
   

    for(int i=0;i<=5;i++){
        cout<<p[i]<<endl;
    }
   
}
/* Here, we stored the data inside heap memory instead of stack memory 
 using the malloc function*/

struct rectangle{
     int length;
     int breadth;
};

/*int main(){
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct rectangle *p5;

    cout<<sizeof(p1)<<endl;
    cout<<sizeof(p2)<<endl;
    cout<<sizeof(p3)<<endl;
    cout<<sizeof(p4)<<endl;
    cout<<sizeof(p5)<<endl;

    //as we can see that the size of each and every type of pionter is same i.e '8 bits'
    //all the modern compilers have 8 bit size for all types of pointers
    //in older versions of compileers, pionters use to have 4 bits of size

}*/