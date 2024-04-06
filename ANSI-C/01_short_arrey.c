#include <stdio.h>

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: \n");
    for (int i = 0; i < n; i++)
    {
       scanf("%d, ", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int m, j;
        for (j = i; j < n; j++)
        {
            if (a[i] < a[j])
            {
                m = a[i];
                a[i] = a[j];
                a[j] = m;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
    return 0;
}