#include <stdio.h>

int pow(int m, int n)
{
    if (n == 0)
        return 1;

    if (n % 2 == 0)
        return pow(m * m, n / 2);
    return pow(m * m, (n - 1) / 2) * m;
}
int main()
{
    int r = pow(2, 9);
    printf("%d", r);
    return 0;
}