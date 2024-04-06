#include <stdio.h>

int main()
{
    int a[10];
    int *c[10];
    for (int i = 0; i < 10; i++)
    {
        c[i] = &a[i];
        printf("%u\n", c[i]);
    }
    // int d;
    // int *b=&d;
    // b = b + 2;
    // printf("%u\n", b);
    // b = b - 1;
    // printf("%u\n", b);
    return 0;
}
