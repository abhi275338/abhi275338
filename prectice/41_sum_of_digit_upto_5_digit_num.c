#include <stdio.h>

int main()
{
    int num, a,sum=0;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    for (int i = 0; num >0; num=num/10)
    {
        a=num%10;
        sum=sum+a;
    }
    printf("Sum of the digits is %d:", sum);
    
    return 0;
}