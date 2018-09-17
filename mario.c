#include <cs50.h>
#include <stdio.h>

void printHashes(int i);
void printBlanks(int rows, int i);

int main(void)
{
    int rows;
    do
    {
        rows = get_int("Height: ");
    }
    while (rows < 1 || rows > 8);
    for (int i = 1; i <= rows; i++)
    {
        printBlanks(rows, i);
        printHashes(i);
        printf("  ");
        printHashes(i);
        printBlanks(rows, i);
        printf("\n");
    }
}

void printBlanks(int rows, int i)
{
    for (int j = 0; j < rows - i; j++)
    {
        printf(" ");
    }        
}

void printHashes(int i)
{
    for (int j = 0; j < i; j++)
    {
        printf("#");
    }
}
