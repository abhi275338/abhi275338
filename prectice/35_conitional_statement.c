#include <stdio.h>
int main()
{
    int a, b, big;
    printf("Enter a number: \n");
    scanf("%d", &a);
    printf("Enter second number: \n");
    scanf("%d", &b);
    big = a > b ? a : b;
    printf("%d", big);
    return 0;
}