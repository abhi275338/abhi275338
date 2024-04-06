#include <stdio.h>
int dif(int a, int b);
int main()
{
    int a, b, p;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    p = dif(a, b);
    printf("the diffrance of these numbers is: %d", p);
    return 0;
}
int dif(int a, int b)
{
    int c;
    c = a - b;
    return c;
}