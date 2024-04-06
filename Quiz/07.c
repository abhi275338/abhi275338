#include<stdio.h>
 
int main()
{
    int a, b, hcf,num;
    printf("Enter a number ");
    scanf("%d", &a);
    printf("Enter second number ");
    scanf("%d", &b);
    if (a<0)
        a=a*(-1);
    if (b<0)
        b=b*(-1);    
    
    num=a>b?a:b;
    if (a==0||b==0)
    {
        hcf=num;
    }
    
    for (int i = num; i >= 1; i--)
    {
        
        if (a%i==0&&b%i==0)
        {
            hcf=i;
            break;
        }
        
    }
    printf("%d", hcf);
    return 0;
}