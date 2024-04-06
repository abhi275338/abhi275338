#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int a = 49, b = 26;
    printf("The values of a and b are %d & %d\n", a, b);
    swap(&a, &b);
    printf("The values of a and b after swap are %d & %d\n", a, b);
    return 0;
}
void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}