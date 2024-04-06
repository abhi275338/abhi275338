#include<stdio.h>
#include<string.h>
int main()
{
    char a[22], b[22];
    scanf(" %s", a);
    scanf(" %s", b);
    printf("%d", strcmp(a,b));
    return 0;
}