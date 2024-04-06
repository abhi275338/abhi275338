#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the first number:\n");
    scanf("%d", &a);
    printf("Enter the second number:\n");
    scanf("%d", &b);
    double sum = a + b;
    printf("The sum of given two numbers is: %f", sum);
    return 0;
}