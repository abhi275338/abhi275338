#include <stdio.h>

int main()
{
    // This is a procgram to cheak leap year
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    
    if (year % 4 == 0)
        printf("This year is a leap year");
    else
        printf("This year is not a leap year");

    return 0;
} 