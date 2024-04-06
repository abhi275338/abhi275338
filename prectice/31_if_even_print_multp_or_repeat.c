/*TAke a no.
if this is even write its multiple
if its odd repeat untill even no. is provided
*/

#include <stdio.h>

// void func(int num)
// {

// }

int main()
{

    int num;
top:
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\n");
    if (num % 2 == 0)
    {
        for (int i = 1; i <= 10; i++)
        {
            printf("%d x %d= %d\n", i, num, i * num);
        }
    }
    else if (num % 2 != 0)
    {
        goto top;
    }
    // func(num);

    return 0;
}