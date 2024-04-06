#include<stdio.h>
int c(int x){
    if(x==0)
    return 1;
    else
    return x*c(x-1);
}
int main()
{
    int row;
    printf("Enter the number of row:");
    scanf("%d",&row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d\t",c(i)/(c(j)*c(i-j)));
        }
        printf("\n");
    }
    
    return 0;
}