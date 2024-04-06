#include<stdio.h>
void display(int *ptr, int n)
{
for (int a = 0; a < 12; a++)
    {
        if (a==0)
        printf("{");
        if(a==3|| a==6|| a==9)
        printf("} \n{");
        else 
        printf(",");
        printf("%d", *(ptr+a)); 

    }
    printf("}");
}

int main()
{
    int arr[3][4];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter the value of row %dand coloum %d: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
        
    }
    display(arr, 12);
    
    return 0;
}