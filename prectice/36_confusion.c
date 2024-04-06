#include <stdio.h>
int main()

{
    int a = 10, y;
    y = ++a + a++ + ++a + --a;
    printf("%d\n", y);
    printf("%d\n", a);
    return 0;
}