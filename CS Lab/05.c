#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the first number:\n");
    scanf("%d", &a);
    printf("Enter the second number:\n");
    scanf("%d", &b);
    double sub = a - b;
    printf("The subtraction of given two numbers is:%f", sub);
    return 0;
}