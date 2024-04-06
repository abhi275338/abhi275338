#include<stdio.h>
#include<string.h>
int main()
{
    char arr[5][30], t[30];
    for (size_t i = 0; i < 5; i++)
    {
        gets(arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            if (strcmp(arr[i], arr[j])>0)
            {
                strcpy(t, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], t);
            }
        }
        
    }
    printf("In accending order\n***************************************************");
    
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", arr[i]);
    }
    

    
    return 0;
}