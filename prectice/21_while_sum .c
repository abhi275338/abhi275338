#include <stdio.h>
int main()
{
    int i=0, n, sum;
    printf("Enter the number");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("The sum of first %d natural numbers is: %d", n, sum);
    return 0;
}