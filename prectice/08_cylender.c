#include <stdio.h>
#define pi 3.14
int main()
{
    int r, h;
    float v, sa;

    printf("Enter the radious of cylender-");
    scanf("%d", &r);

    printf("Enter the height of cylender");
    scanf("%d", &h);

    v = pi * r * r * h;
    sa = pi * 2 * r * h;

    printf("The volume of the cylender is: %f\n", v);
    printf("The curved surface area of the cylender is: %f\n", sa);

    return 0;
}