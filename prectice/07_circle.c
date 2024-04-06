#include <stdio.h>
#define pi 3.14
int main()
{
    int r;
    float a, p;
    printf("Enter the radius of the circle:\n");
    scanf("%d", &r);

    a = pi * r * r;
    p = pi * 2 * r;

    printf("Area of the circle is %f .\n", a);
    printf("The perimeter of circle is %f. \n", p);
    return 0;
}