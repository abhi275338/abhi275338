#include <stdio.h>
int main()
{
    int a = 0, i = 0, n;
    printf("Enter the number");
    scanf("%d", &n);

    for (i = 0; i < n + 1; i++)
    {
        a += i;
    }

    printf("The sum of first %d naturar numbers is: %d", n, a);
    return 0;
}