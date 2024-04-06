#include <stdio.h>

int main()
{
    int a, sum=0, i = 0;
    printf("Enter a number :");
    scanf("%d", &a);

    while (i <= a)
    {
        sum += i;
        i++;
    }
    printf("The sum of the first %d natural numbers is : %d", a, sum);
    return 0;
}