#include <stdio.h>

int main()
{
    int mark[5];
    printf("Enter the mark of student 1: ");
    scanf("%d", &mark[0]);
    printf("Enter the mark of student 2: ");
    scanf("%d", &mark[1]);
    printf("Enter the mark of student 3: ");
    scanf("%d", &mark[2]);
    printf("Enter the mark of student 4: ");
    scanf("%d", &mark[3]);
    printf("Enter the mark of student 5: ");
    scanf("%d", &mark[4]);
    printf("The mark of students are: %d %d %d %d & %d",
           mark[0], mark[1], mark[2], mark[3], mark[4]);
    return 0;
}