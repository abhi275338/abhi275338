#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number");
    scanf("%d", &n);

    printf("The fierst %d natural numbers are: \n", n);
    for (i = 1; i <= n; i++)
    {

        printf("%d\n", i);
    }

    return 0;
}