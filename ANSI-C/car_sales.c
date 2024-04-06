#include<stdio.h>
#include<string.h>
int main()
{
    char m[20], n[7],o[20],t[7];
    char car[4][20]={{"MARUTI-800"},{"MARUTI-DX"},{"GYPSY"}, {"MARUTI-VAN"}};
    char d[4][10]={{"02/01"},{"07/01"},{"04/02"},{"08/02"}};
    unsigned int p[4]={210000,265000,315750,240000};
    printf("Enter the model name:\n");
    fgets(m, sizeof(m), stdin);
    printf("Enter the date in form of dd/mm:\n");
    fgets(n, sizeof(n), stdin);
    for (int i = 0; i < 4; i++)
    {
        strcpy(o,car[i]);
        strcpy(t,d[i]);
        if (strcmp(m, o)==0||strcmp(n,t)==0)
        {
            printf("%s\t",car[i]);
            printf("%s\t",d[i]);
            printf("%u\t",p[i]);
            printf("\n");
            break;
        }
    }
    return 0;
}