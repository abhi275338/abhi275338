#include<stdio.h>
int main()
{
    int year, t;
    printf("Enter the year");
    scanf("%d", &year);
    t=year%4;
    if (t==0)
    {
        printf("This is a leap year");
    }
    else
    printf("This is not a leap year");
    
    return 0;
}