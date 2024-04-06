#include <stdio.h>

int main()
{
    
    int a=1;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            if (i ==1|| i==5 && j <= 6)
            {
                printf("* ");
            }
            
            // else if (i==5 && j <= 6)
            // {
            //     printf("*");
            // }
            else if (j==1||j==5)
            {
                printf("* ");
            }
            
            else printf("  ");
            
        }
        printf("\n");
    }

    return 0;
}
