#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int rows;
    do
    {
    rows = get_int("Height: ");   
    }
    while (rows < 1 || rows > 8);
    for (int i = 1; i < rows + 1; i++)
    {
        for (int j = 0; j < rows - i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}
