#include <stdio.h>

int main()
{
    int k = 0, p = 1, m = 0;
    for (int i = 0; i < 15; i++)
    {
        m = k + p;
        printf("%d, ", k);
        k = p;
        p = m;
    }

    return 0;
}