#include <stdio.h>
struct student
{
    char name[20];
    int age, rollno;
};

int main()
{
    struct student s[5];
    for (int i = 0; i < 5; i++)
    {
        printf("For student %d\n", i + 1);
        printf("Name = ");
        fflush(stdin);
        fgets(s[i].name, sizeof(s[i].name), stdin);
        printf("Age = ");
        scanf("%d", &s[i].age);
        printf("Roll number = ");
        scanf("%d", &s[i].rollno);
    }
    printf("Student detail:\n--------------------------------------------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Name :%s\n", s[i].name);
        printf("Age :%d\n", s[i].age);
        printf("roll number= %d\n", s[i].rollno);
    }

    return 0;
}