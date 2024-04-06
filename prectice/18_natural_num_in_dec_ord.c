#include <stdio.h>
int main()
{
    int i, n;
    printf("enter the number");
    scanf("%d", &n);

    printf("The first %d natural number in decending order are:\n", n);

    for (i = n; i; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}