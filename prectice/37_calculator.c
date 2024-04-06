#include <stdio.h>
int main()
{
    int a, b;
    char k;
    scanf("%d", &a);
    scanf(" %c", &k);
    scanf("%d", &b);
    if (k == '+')
        printf("Answer is:\n%d", a + b);
    else if (k == '-')
        printf("Answer is:\n%d", a - b);
    else if (k == '*')
        printf("Answer is:\n%d", a * b);
    else if (k == '/')
        printf("Answer is:\n%d", a / b);
    else
        return 0;
}