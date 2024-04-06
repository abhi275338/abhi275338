#include <stdio.h>
#include <math.h>
float factorial(int n)
{
    int i;
    float f=1;
    for (i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}
int main()
{
    float x, n, a, ss=1;
    printf("Enter the number\n");
    scanf("%f", &x);
    for (int i = 1; i > 0; i++)
    {
        n = factorial(2 * i);
        if (i % 2 == 0)
        {
            a = (pow(x, (2 * i))) / n;
            if (a < 0.000001)
            {
                break;
            }
        }
        else
            a = -(pow(x, (2 * i))) / n;
        
        ss = ss + a;
    }
    printf("the sum of the series is %f", ss);
    return 0;
}
