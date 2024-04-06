#include <stdio.h>
int main()
{
    // to determine the char is lowercase or not ASCII Value 97-122
    char k;
    printf("Enter the charecter");
    scanf("%c", &k);

    if ((k <= 122) && (k >= 97))
    {
        printf("This is lowercase charecter");
    }
    else
        printf("This is not a lover case");

    return 0;
}