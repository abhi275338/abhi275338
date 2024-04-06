#include <stdio.h>
int main()
{
    int i, f = 1, n;
    printf("Enter the number");
    scanf("%d", &n);
    // this program can be done using while loop also try it later.
    for (i = 1; i <= n; i++)
    {
        f *= i;
    }
    printf("the factorial of %d is : %d", n, f);

    return 0;
}