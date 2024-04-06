#include<stdio.h>
struct student
{
    char name[20];
    int age;
    struct dob
    {
        int day, mon, year;
    }dob;
}s;
 
int main()
{
    printf("Name = ");
    gets(s.name);
    printf("Age = ");
    scanf("%d", &s.age);
    printf("DOB day = ");
    scanf("%d", &s.dob.day);
    printf("DOB month = ");
    scanf("%d", &s.dob.mon);
    printf("DOB year = ");
    scanf("%d", &s.dob.year);
    printf("Student detail:\n--------------------------------------------\n");
    printf("Name :%s\n", s.name);
    printf("Age :%d\n", s.age);
    printf("DOB :%d-%d-%d", s.dob.day,s.dob.mon,s.dob.year);


    return 0;
}