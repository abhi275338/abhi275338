#include <stdio.h>
int main()
{
    float i, t;
    printf("Enter your income");
    scanf("%f", &i);

    if ((i >= 250000)&&(i<500000))
    {
        t = t + 0.05 * (i - 250000);
    }

    if ((i >= 500000)&&(i<1000000))
    {
        t =12500 + 0.2 * (i - 500000);
    }

    if (i >= 1000000)
    {
        t = 112500 + 0.3 * (i - 1000000);
    }

    printf("You have to pay the tax of %f rupees", t);

    return 0;
}