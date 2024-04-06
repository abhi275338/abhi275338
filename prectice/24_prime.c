#include <stdio.h>
int main()
{
    int i, n, p = 1;
    printf("Enter the number");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            p = 0;
        break;
    }
    if (p == 0)
        printf("This is not a prime number");

    else
        printf("This is a prime number");

    return 0;
}