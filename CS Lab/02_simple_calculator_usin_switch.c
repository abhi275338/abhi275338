#include <stdio.h>

int main()
{
    float a, b;
    int c;

    printf("Enter the first number: ");
    scanf("%f", &a);

    printf("Enter the second number: ");
    scanf("%f", &b);

    printf("Enter 1 for addition, 2 for subtraction, 3 for multiply, 4 for divide, ");
    scanf("%d", &c);

    switch (c)
    {
    case1:
        printf("The sum of the numbers is: %f", a + b);
        break;
    case2:
        printf("The subtraction of the numbers is: %f", a - b);
        break;
    case3:
        printf("The multiplication of the numbers is: %f", a * b);
        break;
    case4:
        printf("The divison of the numbers is: %f", a / b);
        break;
    default:
        break;
    }

    return 0;
}