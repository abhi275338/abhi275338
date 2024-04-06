#include <stdio.h>
int main()
{
    int a;
    printf("Enter anumber: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        for (int j = a; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <(2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for (int i = a; i > 0; i--)
    {
        for (int j = a; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <(2 * i - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}