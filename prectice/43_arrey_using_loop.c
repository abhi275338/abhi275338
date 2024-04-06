#include<stdio.h>
 
int main()
{
    int mark[10];
    printf("Enter the marks of the students:\n");
    for(int i=0; i<10; i++)
    {
        printf("%d:", i+1);
        scanf("%d", &mark[i]);
    }
    for (int j = 0; j < 10; j++)
    {
     printf("The mark of the student %d is %d\n", j+1, mark[j]);
    }
    
    return 0;
}