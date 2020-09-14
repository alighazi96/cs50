#include<stdio.h>
#include<cs50.h>

int main(void)
{

    int size;
    int i;
    int j;
    do
    {
        size = get_int("enter the size: ");
    }
    while (1 > size || size > 8);
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            printf(" ");
        }
        for (j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }


}