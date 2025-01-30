#include <stdio.h>

// using formula
int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return fact(n - 1) * n;
}

// using loop 
int rfact(int n)
{
    int f = 1;
    int i;
    for (i = 1; i <= n; i++)
        f = f * i;
    return f;
}
int main()
{
    int r;
    r = rfact(5);
    printf("%d ", r);
}