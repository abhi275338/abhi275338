#include <stdio.h>

int main()
{
    int num1, num2, p = 0, c=0;
    printf("Enter the value of first number: ");
    scanf("%d", &num1);
    printf("Enter the value of first number: ");
    scanf("%d", &num2);

    for (int i = num1; i <= num2; i++)
    {
        if(i==1)
            continue;
        else
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    p++;
                }
            }
            if (p == 0 )
            {
                printf("%d, ", i);
                c++;
            }
            else
                p = 0;
            
    }
    printf("count = %d", c);

    return 0;
}