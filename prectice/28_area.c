#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter the side of the squire:  ");
    scanf("%d", &a);

    printf("The area of the squire is %f", pow(a, 2));
    return 0;
}