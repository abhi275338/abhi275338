#include<stdio.h>
 
int main()
{
    int n;
    printf("Enter size");
    scanf("%d", &n);
    int a[n];
    float s=0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        s=s+a[i]; 
    }
    printf("%2f, %3f ", s, s/10);
    return 0;
}