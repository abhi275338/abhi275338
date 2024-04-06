#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
// This  is a nuber guuessing game.
{
    int n, g, a = 1, p;
    srand(time(0));
    n = rand() % 100 + 1;

    while (n != g)
    {
        printf("guess the number between 0 to 100\n");
        scanf("%d", &g);
        if (g > n)
        {
            printf("Lower number plese\n");
        }
        else if (g < n)
        {
            printf("Higher number plese\n");
        }
        else
            printf("Congratulations you guessed it in %d attemps\n", a);
        a++;
    }
    printf("Press 0 to exit\n");
    scanf("%d", p);
    return 0;
}