#include <stdio.h>

int main()
{
    int arr[] = {1, 4, 7, 3, 2, 5, 10, 9,6,8};

    int temp = arr[0];
    for (int i = 0; i < 8; i++)
    {
        for (int i = 0; i < 10; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}