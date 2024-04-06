#include<stdio.h>
 
int main()
{
    int x;
    char arr[20];
    printf("Enter any string:\n");
    fgets(arr, 20, stdin);
    x=printf("%s",arr);
    x=x-1;
    printf("%d", x);
    return 0;
}