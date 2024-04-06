#include <stdio.h>
int fn(int a);
int main()
{
    int a;
    printf("enter the num: ");
    scanf("%d", &a);
    fn(a);
    return 0;
}
int fn(int a)
{

    for (int i = 0; i <=(2*a-1); i++)
    {
        if (i == 0)
        {
            printf("\n");
        }
        else
            printf("*");
    }
    return (fn(a - 1));
}