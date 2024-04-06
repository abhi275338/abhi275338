#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the length in meter - ");
    scanf("%d", &a);

    printf("Enter the breath in meter - ");
    scanf("%d", &b);

    printf("The area of rectangle is %d meter^2", a * b);
    return 0;
}