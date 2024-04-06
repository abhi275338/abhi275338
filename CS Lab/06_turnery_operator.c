#include <stdio.h>

int main()
{
    int num1, num2, num3, big, biggest;
    printf("Enter first number ");
    scanf("%d", &num1);

    printf("Enter second number ");
    scanf("%d", &num2);

    printf("Enter third number ");
    scanf("%d", &num3);

    big = num1 > num2 ? num1 : num2;

    biggest = big > num3 ? big : num3;
    
    printf("The biggest number is %d", biggest);
    return 0;
}