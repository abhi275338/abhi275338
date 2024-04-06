#include <stdio.h>
struct book
{
    char name[50];
    char author[50];
    int price;
};

int main()
{
    int a, max, min;
    struct book b[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Name = ");
        fflush(stdin);
        gets(b[i].name);
        printf("Author = ");
        gets(b[i].author);
        printf("price =");
        scanf("%d", &b[i].price);
        
    }
    if (b[0].price > b[1].price)
    {
        if (b[2].price > b[0].price)
        {
            printf("the most expencive book is :%s price =%d\n", b[2].name, b[2].price);
            printf("the least expencive book is :%s price =%d\n", b[1].name,b[1].price);
        }
        else
            printf("the most expencive book is :%s price =%d\n", b[0].name,b[0].price);
    }
    else
    {
        if (b[2].price > b[1].price)
        {
            printf("the most expencive book is :%s price =%d\n", b[2].name,b[2].price);
            printf("the least expencive book is :%s price =%d\n", b[0].name, b[0].price);
        }
        else
            printf("the most expencive book is :%s price =%d\n", b[1].name, b[1].price);
    }
}