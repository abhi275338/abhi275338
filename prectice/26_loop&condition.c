#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a number");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("This is a even number\n");
        printf("Enter a number: \n");
        scanf("%d", &c);
        if (c%2==0)
        {
        
        for (b = 1; b < 11; b++)
        {
            printf("%d*%d=%d\n", c, b, b * c);
        }
    }
    else
    printf("this number is odd");
    }
    else
        printf("NUmber is odd");
    return 0;
}