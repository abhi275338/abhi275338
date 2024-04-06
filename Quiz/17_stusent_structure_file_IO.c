#include<stdio.h>
#include<string.h>
typedef struct student
    {
        char name[20];
        char branch[10];
        int sid, dob;
    }
std;
        
    
int main()
{
    
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    std s[n];
    for (int i = 0; i < n; i++)
    {
       printf("student: %d\n", i+1);
       
       char c[20], b[20];
       printf("Name: ");
       fflush(stdin);
       gets( c);
       strcpy(s[i].name, c);

       printf("Branch: ");
       gets(b);
       strcpy(s[i].branch, b);

       printf("scholer id: ");
       scanf("%d", &s[i].sid);
       
       printf("year of birth: ");
       scanf("%d", &s[i].dob);

    }
    FILE*ptr;
       ptr = fopen("abhi.txt", "w");

    for (int i = 0; i < n; i++)
    {
       fprintf(ptr, "%s\t",s[i].name);
       fprintf(ptr, "%s\t",s[i].branch);
       fprintf(ptr, "%d\t",s[i].sid);
       fprintf(ptr, "%d\t",s[i].dob);
       fprintf(ptr, "\n");

    }
    
    
    return 0;
}