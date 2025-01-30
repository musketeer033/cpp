#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    p = (int *)malloc(5 * sizeof(int));
    p[0] = 1;
    p[1] = 2;
    p[2] = 3;
    p[3] = 4;
    p[4] = 5;

    /*now if want to increase te size of array then i will create a new pointer with size 10 which we will
    use to increase the size of the previous array.*/

    int *q;
    q = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }
    free(p);  // this funtion will free the previous array
    p = q;    /*the address at which pointer q was pointiing(memory with 10 elements)
                now pointer p will point at that address.*/
    q = NULL; // now pointer q will no longer point at that address.

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", p[i]);
    }
    return 0;
}