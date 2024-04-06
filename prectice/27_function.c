#include <stdio.h>
void sum();
int main()
{
    sum();
    return 0;
}

void sum()
{
    int a, b;
    printf("Enter first num: ");
    scanf("%d", &a);

    printf("enter second num");
    scanf("%d", &b);
    printf("The sum of the numbers is: %d", a + b);
}
