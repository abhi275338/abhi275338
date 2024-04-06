#include <stdio.h>

int main()
{
    int a = 1;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i+j) % 2 == 0)
            //{

            //     if (j % 2 == 0)
            //     {
            //         a = 1;
            //         printf("%d", a);
            //     }
            //     else
            //     {
            //         a = 0;
            //         printf("%d", a);
            //     }
            // }
            // else if (i % 2 != 0)
            // {
            //     if (j % 2 == 0)
            //     {
            //         a = 0;
            //         printf("%d", a);
            //     }
                printf("1 ");
                else
                {
                    // a = 1;
                    printf("0 ");
                }
            
        }
        printf("\n");
    }
    
}