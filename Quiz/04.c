#include <stdio.h>

int main()
{
    int n, temp, reminder, reverse = 0;
    printf("Enter a number ");
    scanf("%d", &n);
    for (temp = n; n > 0; n = n / 10)
    {
        reminder = n % 10;
        reverse = reverse + (reminder * reminder * reminder);
    }
    if (reverse == temp)
    {
        printf("This number is a armstrong number");
    }
    else
        printf("This number is not a armstrong number");
    return 0;
}