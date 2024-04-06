#include <stdio.h>
int main()
{
    float a, b;
    float c;
    printf("Enter the numinator ");
    scanf("%f", &a);

    printf("Enter the denominator ");
    scanf("%f", &b);

    c = a / b;
    printf("The sum of the numbers is %f", c);
    return 0;
}