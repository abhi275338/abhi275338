#include <stdio.h>

int main()
{
    int a[5] = {4, 3, 5, 1}, p;
    for (int i = 1; i <= 5; i++)
    {
        p = 0;
        for (int j = 0; j < 4; j++)
        {
            if (i == a[j])
            {
                p++;
            }
        }
        if (p == 0)
        {
            printf("Missing element = %d", i);
            break;
        }
    }
    return 0;
}
