#include <stdio.h>
struct complex
{
    int real, img
} n1, n2, sum;
int main()
{
    printf("Enter real and imaginery part of first complex: \n");
    scanf("%d%d", &n1.real, &n1.img);

    printf("Enter real and imaginery part of second complex:d");
    scanf("%d%d", &n2.real, &n2.img);

    sum.real = n1.real + n2.real;
    sum.img = n1.img + n2.img;

    printf("The sum of the complex number is:\n%d + i%d", sum.real, sum.img);
    return 0;
}