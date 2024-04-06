#include <stdio.h>
int main()
{
    int i = 10, n;
    printf("Enter the number");
    scanf("%d", &n);

    printf("The reverse order table of %d is:\n", n);

    for (i = 10; i; i--)
    {
        printf("%d*%d=%d\n", n, i, n * i);
    }

    return 0;
}