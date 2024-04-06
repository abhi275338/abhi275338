#include<stdio.h>
 
int main()
{
    int a=1;
    printf("The odd numbers betwee 0-100 are :\n");
    while (a<=100)
    {
        printf("%d, ", a);
        a= a+2;
    }
    
    return 0;
}