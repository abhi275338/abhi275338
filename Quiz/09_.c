#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int n, p, max = 15, min = 5;
    printf("Enter the size of : ");
    scanf("%d", &n);
    int num[n], f;
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        num[i] = rand() % (max - min + 1) + min;
    }
    for (int j = 5; j <= 15; j++)
    {
        f = 0;
        for (int k = 0; k < n; k++)
        {
            if (j == num[k])
            {
                f++;
            }
        }
        if (f != 0)
            printf("The frequnty of %d is %d\n", j, f);
    }

    return 0;
}