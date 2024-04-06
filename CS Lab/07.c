#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the first number:\n");
    scanf("%d", &a);
    printf("Enter the second number:\n");
    scanf("%d", &b);
    float divison = a / b;
    printf("The divison of given two numbers is:%f", divison);
    return 0;
}