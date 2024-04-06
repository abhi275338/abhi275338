#include<stdio.h>
#define leap( year ){\
((year%4==0)&&((year %400==0)||(year %100)!=0))?\
printf("%d is aleap year\n" , year ) :\
printf("%d is not a leap year\n" , year ) ;\
}

int main ( )
{
leap(2022);
leap(2024);
leap(2028);
    return 0;
}