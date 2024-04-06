#include<stdio.h>
#include<string.h> 
int main()
{
    char c[]={"i am abhishek singh. singh is king. singh means lion"};
    char d[20], temp[20];
    printf("Enter the word :\n");
    scanf("%s", d);
    int  y=0, f=0, x=0;
    for (int i = 0; i < sizeof(c); i++)
    {
        y++;
        if(c[i-x]!=' '||c[i]!='.')
        {
            temp[i]=c[i];
        }
        else
        {
            x=y;
            if (strcmp(temp,d)==0)
            {
                f++;
            }
            
        }
    }
    printf("%d", f);
    return 0;
}