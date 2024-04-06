#include <stdio.h>
void armstrong(int i)
{
    int n, m, am = 0;
    for (n = i; n > 0; n /= 10)
        {
            m = n % 10;
            am = am + (m * m * m);
        }
        if (am == i)
        {
            printf("%d,", i);
        }
}
int main()
{
    int k, l;
    printf("Enter the enterval:\n");
    scanf("%d%d", &k, &l);
    printf("The armstrong number betveen this enterval are:\n");
    for (int i = k; i < l; i++)
    {
       armstrong(i);
    }

    return 0;
}