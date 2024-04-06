#include<stdio.h>
 
int main()
{
    int row,arr[10][10];
    printf("Enter the number of row:");
    scanf("%d",&row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if(j==0||j==i)
            {
                printf("1\t");
                arr[i][j]=1;
            }
            else{
                
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
                printf("%d\t",arr[i][j]);
            }
        }
       printf("\n"); 
    }
    
    return 0;
}